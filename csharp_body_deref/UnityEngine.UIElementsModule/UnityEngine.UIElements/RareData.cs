// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RareData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50AA590", Offset = "0x50AA590", VA = "0x50AA590", Slot = "4")]
	public RareData Copy()
	{
		return default(RareData);
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x50AA5C0", Offset = "0x50AA5C0", VA = "0x50AA5C0", Slot = "5")]
	public void CopyFrom(ref RareData other)
	{
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x50AA5F0", Offset = "0x50AA5F0", VA = "0x50AA5F0")]
	public static bool operator ==(RareData lhs, RareData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x50AA6F0", Offset = "0x50AA6F0", VA = "0x50AA6F0", Slot = "6")]
	public bool Equals(RareData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x50AA8A0", Offset = "0x50AA8A0", VA = "0x50AA8A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x50AAAE0", Offset = "0x50AAAE0", VA = "0x50AAAE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
