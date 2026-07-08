using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000D4")]
public interface IObservable<out T>
{
	[Token(Token = "0x60007AE")]
	IDisposable Subscribe(IObserver<T> observer);
}
