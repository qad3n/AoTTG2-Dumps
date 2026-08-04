// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ListChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000091")]
public sealed class ListChangedEventArgs<T> : EventArgs
{
	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x0")]
	public readonly int index;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x0")]
	public readonly T item;

	[Token(Token = "0x600062B")]
	public ListChangedEventArgs(int index, T item)
	{
	}
}
