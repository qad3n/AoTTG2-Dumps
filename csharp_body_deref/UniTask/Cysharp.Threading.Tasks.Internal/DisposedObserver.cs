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

[Token(Token = "0x2000258")]
internal class DisposedObserver<T> : IObserver<T>
{
	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DisposedObserver<T> Instance;

	[Token(Token = "0x6000D6D")]
	private DisposedObserver()
	{
	}

	[Token(Token = "0x6000D6E")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D6F")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D70")]
	public void OnNext(T value)
	{
	}
}
