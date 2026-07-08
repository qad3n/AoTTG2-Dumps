using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200007C")]
public delegate TResult Func<out TResult>();
[Token(Token = "0x200007D")]
public delegate TResult Func<in T, out TResult>(T arg);
[Token(Token = "0x200007E")]
public delegate TResult Func<in T1, in T2, out TResult>(T1 arg1, T2 arg2);
[Token(Token = "0x200007F")]
public delegate TResult Func<in T1, in T2, in T3, out TResult>(T1 arg1, T2 arg2, T3 arg3);
[Token(Token = "0x2000080")]
public delegate TResult Func<in T1, in T2, in T3, in T4, out TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4);
[Token(Token = "0x2000081")]
public delegate TResult Func<in T1, in T2, in T3, in T4, in T5, out TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5);
[Token(Token = "0x2000082")]
public delegate TResult Func<in T1, in T2, in T3, in T4, in T5, in T6, out TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6);
[Token(Token = "0x2000083")]
public delegate TResult Func<in T1, in T2, in T3, in T4, in T5, in T6, in T7, out TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7);
[Token(Token = "0x2000084")]
public delegate TResult Func<in T1, in T2, in T3, in T4, in T5, in T6, in T7, in T8, out TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8);
