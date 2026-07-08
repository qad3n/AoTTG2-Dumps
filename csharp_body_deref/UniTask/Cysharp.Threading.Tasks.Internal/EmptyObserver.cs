using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000253")]
internal class EmptyObserver<T> : IObserver<T>
{
	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly EmptyObserver<T> Instance;

	[Token(Token = "0x6000D3F")]
	private EmptyObserver()
	{
	}

	[Token(Token = "0x6000D40")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D41")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D42")]
	public void OnNext(T value)
	{
	}
}
