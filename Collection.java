����   A a
      java/lang/Object <init> ()V  java/util/Hashtable
    PPA
      java/lang/Integer valueOf (I)Ljava/lang/Integer;
     put 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;  LB  Python  LSP	      ! java/lang/System out Ljava/io/PrintStream;
  # $ % get &(Ljava/lang/Object;)Ljava/lang/Object;
 ' ( ) * + java/io/PrintStream println (Ljava/lang/Object;)V
  - . % remove
  0 1 2 keys ()Ljava/util/Enumeration; 4 5 6 7 8 java/util/Enumeration hasMoreElements ()Z 4 : ; < nextElement ()Ljava/lang/Object;
 > ? @  A java/lang/String &(Ljava/lang/Object;)Ljava/lang/String;   C D E makeConcatWithConstants &(Ljava/lang/String;)Ljava/lang/String;
 ' G * H (Ljava/lang/String;)V J Collections8 Code LineNumberTable main ([Ljava/lang/String;)V StackMapTable 
SourceFile Collections.java BootstrapMethods T 	Data is  V
 W X Y D Z $java/lang/invoke/StringConcatFactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; InnerClasses ] %java/lang/invoke/MethodHandles$Lookup _ java/lang/invoke/MethodHandles Lookup   I            K        *� �    L        	 M N  K   �     u� Y� 	L+
FP� � W+Bh� � W+@t� � W+R� � W� +� "� &+� ,W+� /M,� 3 � � ,� 9 � =� B  � F���    L   .      	  
 "  /  <  H  O  T  ]  t  O    � T  4  P    Q R     U  S [   
  \ ^ ` 