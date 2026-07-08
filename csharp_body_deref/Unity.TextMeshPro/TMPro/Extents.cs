using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200009C")]
public struct Extents
{
	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x0")]
	internal static Extents zero;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x10")]
	internal static Extents uninitialized;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 min;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 max;

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4967500", Offset = "0x4967500", VA = "0x4967500")]
	public Extents(Vector2 min, Vector2 max)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4967510", Offset = "0x4967510", VA = "0x4967510", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
