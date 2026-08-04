// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.EmptyObserver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
