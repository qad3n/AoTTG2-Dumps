using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000252")]
internal class ListObserver<T> : IObserver<T>
{
	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x0")]
	private readonly ImmutableList<IObserver<T>> _observers;

	[Token(Token = "0x6000D39")]
	public ListObserver(ImmutableList<IObserver<T>> observers)
	{
	}

	[Token(Token = "0x6000D3A")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D3B")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D3C")]
	public void OnNext(T value)
	{
	}

	[Token(Token = "0x6000D3D")]
	internal IObserver<T> Add(IObserver<T> observer)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	internal IObserver<T> Remove(IObserver<T> observer)
	{
		return null;
	}
}
