using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000051")]
internal class SerializedVirtualizationData
{
	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 scrollOffset;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x18")]
	public int firstVisibleIndex;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x1C")]
	public float contentPadding;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x20")]
	public float contentHeight;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x24")]
	public int anchoredItemIndex;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x28")]
	public float anchorOffset;

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4BFFF90", Offset = "0x4BFFF90", VA = "0x4BFFF90")]
	public SerializedVirtualizationData()
	{
	}
}
