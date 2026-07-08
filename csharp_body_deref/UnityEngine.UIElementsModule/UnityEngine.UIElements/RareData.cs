using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035D")]
internal struct RareData : IStyleDataGroup<RareData>, IEquatable<RareData>
{
	[Token(Token = "0x4000A2C")]
	[FieldOffset(Offset = "0x0")]
	public Cursor cursor;

	[Token(Token = "0x4000A2D")]
	[FieldOffset(Offset = "0x18")]
	public TextOverflow textOverflow;

	[Token(Token = "0x4000A2E")]
	[FieldOffset(Offset = "0x1C")]
	public Color unityBackgroundImageTintColor;

	[Token(Token = "0x4000A2F")]
	[FieldOffset(Offset = "0x2C")]
	public OverflowClipBox unityOverflowClipBox;

	[Token(Token = "0x4000A30")]
	[FieldOffset(Offset = "0x30")]
	public int unitySliceBottom;

	[Token(Token = "0x4000A31")]
	[FieldOffset(Offset = "0x34")]
	public int unitySliceLeft;

	[Token(Token = "0x4000A32")]
	[FieldOffset(Offset = "0x38")]
	public int unitySliceRight;

	[Token(Token = "0x4000A33")]
	[FieldOffset(Offset = "0x3C")]
	public float unitySliceScale;

	[Token(Token = "0x4000A34")]
	[FieldOffset(Offset = "0x40")]
	public int unitySliceTop;

	[Token(Token = "0x4000A35")]
	[FieldOffset(Offset = "0x44")]
	public TextOverflowPosition unityTextOverflowPosition;

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x4D82C60", Offset = "0x4D82C60", VA = "0x4D82C60", Slot = "4")]
	public RareData Copy()
	{
		return default(RareData);
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x4D82C90", Offset = "0x4D82C90", VA = "0x4D82C90", Slot = "5")]
	public void CopyFrom(ref RareData other)
	{
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x4D82CC0", Offset = "0x4D82CC0", VA = "0x4D82CC0")]
	public static bool operator ==(RareData lhs, RareData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x4D82DC0", Offset = "0x4D82DC0", VA = "0x4D82DC0", Slot = "6")]
	public bool Equals(RareData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x4D82F70", Offset = "0x4D82F70", VA = "0x4D82F70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x4D831B0", Offset = "0x4D831B0", VA = "0x4D831B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
