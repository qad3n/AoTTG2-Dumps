using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000255")]
internal class DisposedObserver<T> : IObserver<T>
{
	[Token(Token = "0x40006AE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DisposedObserver<T> Instance;

	[Token(Token = "0x6000D49")]
	private DisposedObserver()
	{
	}

	[Token(Token = "0x6000D4A")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D4B")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D4C")]
	public void OnNext(T value)
	{
	}
}
