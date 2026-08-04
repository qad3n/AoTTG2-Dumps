// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ListObserver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
