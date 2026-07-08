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
