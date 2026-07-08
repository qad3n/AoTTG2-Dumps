using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000CC")]
public interface IComparable
{
	[Token(Token = "0x6000796")]
	int CompareTo(object obj);
}
[Token(Token = "0x20000CD")]
public interface IComparable<in T>
{
	[Token(Token = "0x6000797")]
	int CompareTo(T other);
}
