using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000D5")]
public interface IObserver<in T>
{
	[Token(Token = "0x60007AF")]
	void OnNext(T value);

	[Token(Token = "0x60007B0")]
	void OnError(Exception error);

	[Token(Token = "0x60007B1")]
	void OnCompleted();
}
