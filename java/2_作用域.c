
java作用域 public ,private ,protected 及不写时的区别

  在说明这四个关键字之前，我想就class之间的关系做一个简单的定义，对于继承自己的class，
base class可以认为他们都是自己的子女，而对于和自己一个目录下的classes，认为都是自己的朋友。 

1. public
  public 表明该数据成员、成员函数是对所有用户开放的，所有用户都可以直接进行调用

2. private
  private 表示私有，私有的意思就是除了class自己之外，任何人都不可以直接使用，私有财产
神圣不可侵犯嘛，即便是子女，朋友，都不可以使用。

3. protected
  protected 对于子女、朋友来说，就是public的，可以自由使用，没有任何限制，而对于
其他的外部class，protected就变成private。 

作用域       当前类    同一package   子孙类     其他package

public        √       √             √           √

protected     √       √             √           ×

friendly      √       √             ×           ×

private       √       ×             ×           ×

不写时默认为friendly 

----------------------------------------------------------------------------------------
java 

1. final
  Java关键字final有“这是无法改变的”或者“终态的”含义，它可以修饰非抽象类、非抽象类成员方法和变量。
你可能出于两种理解而需要阻止改变：设计或效率。

final类不能被继承，没有子类，final类中的方法默认是final的。
final方法不能被子类的方法覆盖，但可以被继承。
final成员变量表示常量，只能被赋值一次，赋值后值不再改变。
final不能用于修饰构造方法。
注意：父类的private成员方法是不能被子类方法覆盖的，因此private类型的方法默认是final类型的。

1）在设计类时候，如果这个类不需要有子类，类的实现细节不允许改变，并且确信这个类不会载被扩展，那么就设计为final类。 

2）如果一个类不允许其子类覆盖某个方法，则可以把这个方法声明为final方法。
使用final方法的原因有二：
  第一、把方法锁定，防止任何继承类修改它的意义和实现。
  第二、高效。编译器在遇到调用final方法时候会转入内嵌机制，大大提高执行效率。

3）final修饰的变量有三种：静态变量、实例变量和局部变量，分别表示三种类型的常量。
final变量定义的时候，可以先声明，而不给初值，这中变量也称为final空白
一个类中的final数据成员就可以实现依对象而有所不同，却有保持其恒定不变的特征。

4）当函数参数为final类型时，你可以读取使用该参数，但是无法改变该参数的值。


2. static 
  static 表示“全局”或者“静态”的意思，用来修饰成员变量和成员方法，也可以形成静态static代码块，
但是Java语言中没有全局变量的概念。 

  被 static 修饰的成员变量和成员方法独立于该类的任何对象。也就是说，它不依赖类特定的实例，
被类的所有实例共享。只要这个类被加载，Java虚拟机就能根据类名在运行时数据区的方法区内定找到他们。
因此，static对象可以在它的任何对象创建之前访问，无需引用任何对象。 

