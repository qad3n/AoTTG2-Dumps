using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200064C")]
public interface IEnumerator<out T> : IDisposable, IEnumerator
{
	[Token(Token = "0x1700081F")]
	new T Current
	{
		[Token(Token = "0x6003202")]
		get;
	}
}
