
Handler��Looper��MessageQueue �첽��Ϣ�������

���ܣ�ʵ���̼߳�ͨ��

Handler����Ϣ���������Ϣ����
Looper��ͣ����Ϣ������ȡ������û�ж�����ȴ�
ÿȡ��һ����ϢLooper���ý���Handlerȥ����

��Ҫ������
    @Override
    public void handleMessage(Message msg);

ʹ�ã�
  1. ���̴߳���һ���� �̳� handler�࣬ ��д handleMeassage(Message msg) ���ӡ��Ϣ��
  2. ���̴߳�������� handler
  3. �����̴߳���Message���� 
        Message msg = handler.obtainMessage();
		msg.what = 2;
		handler.sendMessages(msg); //����Ϣ������Ϣ����
					     //Looper����ȡ��msg���ҳ���֮��Ӧ��handler
					     //Looper���������handler.handleMessage(Message msg);

eg:
    �ڲ���NetworkThread�̳�Thread����дrun����������2�룬s��ֵģ��������л�ȡ�����ݡ�
s��ֵ�ŵ�textview�У�����ֱ���ڸ��߳��и���ui�����ݡ�

button��������onClickListener�����У�����NetworkThread�̶߳�������

����һ��Handler��ʵ����̳�Handler,ʵ��handleMessage����������

��MyHandler����handler����

�����߳��ж���msg��handler.obtionMessage�������ɣ�������Ϣ��handler.sendMessage��������msg��Ϊ�������롣sendMessage�������������̻߳�WorkerThread�з��Ͷ��ǿ��Եġ�

���߳��н�����Ϣ--handler�����߳��ж��壬handleMessage������ϢҲ�������̡߳������������߳�֮���ͨ����



�෴���ӣ���mainthread��workerthread������Ϣ��

1 ׼��looper����

2 ��WorkerThread��������Handler����

3 ��MainThread���з�����Ϣ

��WorkerThread��run������ִ��Looper.prepare������������һ��Looper���󣬲���ɸö���ĳ�ʼ��������

��WorkerThread������handler�����������ڲ��ࡣhandler = new Handler(){
						public void handleMessages(Message msg){ }
						}

Looper����loop����������֮��looper���󽫲��ϴ���Ϣ������ȡ����Ϣ����Ȼ�����handler��handleMessage��������������Ϣ������worker thread�У��������Ϣ������û�ж�������߳�������

���߳��ж���workerthread��������

button��������onClick()����������msg�ͷ�����Ϣ��

Looper.loop();

onClick���������̣߳�handleMessage������worker thread�����͡�������Ϣ�ڲ�ͬ�̡߳�

���ĸ��߳���ʵ��handler����new Handler����---ʵ����������дhandleMessage���������������ĸ��߳��д�����Ϣ��handler���������̡߳�

�����߳���worker thread������Ϣ��worker thread��run������̶��������裺

��1��Looper.prepare��

��2��handler = new MyHandler�������������������ڲ���new Handler����{}��

��3��Looper.loop������

