// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.DisposedObserver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
