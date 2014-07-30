java.lang.Object
  android.content.Context
    android.content.ContextWrapper
      android.view.ContextThemeWrapper
        android.app.Activity

��Ҫ�ķ�����
  setRequestedOrientation();
  setContentView(); //���ز����ļ�
  findViewById();
  getSystemService();


Activity����������(7��������3���׶�)

onCreate
onStart
onRestart
onResume
onPause
onStop
onDestroy
--------------------------------------
��ʼActivity
onCreate -> onStart -> onResume

����Activity
onPause -> onStop -> onDestroy

���»�ȡ����
onRestart -> onStart -> onResume

--------------------------------------
�����������ڣ�Activityʼ�տɼ�
onPause -> onResume -> onPause

�������ڣ�
onStart -> onRestart -> onResume -> onPause -> onStop -> onStart

--------------------------------------
Activity ֮�䴫������

1. Intent

  Intent Structure
    1.action��
    ACTION_MAIN         <==> android.intent.action.MAIN
    ACTION_EDIT 
    ACTION_VIEW
    ACTION_PICK
    ACTION_GET_CONTENT
    
    2.category����� Gives additional information about the action.
    
    CATEGORY_LAUNCHER   <==> android.intent.category.LAUNCHER 
    CATEGORY_DEFAULT
    CATEGORY_ALTERNATIVE
    
    3.data��uri��ʽ
        
    4.type �� Specifies an explicit type (a MIME type) of the intent data.
    
    5.component: �������Ҳ�������ָ�������
    
    6.extras��This is a Bundle of any additional information.

Intent �Ĺ��캯��
    1. Intent(String action);
    2. Intent(String action, Uri uri);
    3. Intent(Context packageContext, class);
    4. Intent(String action, Uri uri, Context packageContext, class)

eg:  ͨ����̬������������
    //ѡ��ָ������ķ���
    Intent intent = new Intent(main.this, otherActivity.class);
    Intent.putExtra("name", "����");
    Intent.putExtra("age","23");
    startActivity(intent);

    ȡ����
    ��otherActivity���У�
    Intent intent = getIntent();
    String name = intent.getStringExtra("name");
    int age = intent.getStringExtra("age");

eg:  ͨ�����а崫������


========================================================================
