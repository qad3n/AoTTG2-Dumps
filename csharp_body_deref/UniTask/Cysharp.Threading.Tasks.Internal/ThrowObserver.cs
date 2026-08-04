// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ThrowObserver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000254")]
internal class ThrowObserver<T> : IObserver<T>
{
	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ThrowObserver<T> Instance;

	[Token(Token = "0x6000D44")]
	private ThrowObserver()
	{
	}

	[Token(Token = "0x6000D45")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D46")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D47")]
	public void OnNext(T value)
	{
	}
}
