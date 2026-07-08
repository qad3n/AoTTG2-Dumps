using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000D6")]
public interface IProgress<in T>
{
	[Token(Token = "0x60007B2")]
	void Report(T value);
}
