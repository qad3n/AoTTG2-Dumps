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

[Token(Token = "0x20003F2")]
internal struct RareData : IStyleDataGroup<RareData>, IEquatable<RareData>
{
	[Token(Token = "0x4000CA7")]
	[FieldOffset(Offset = "0x0")]
	public Cursor cursor;

	[Token(Token = "0x4000CA8")]
	[FieldOffset(Offset = "0x18")]
	public TextOverflow textOverflow;

	[Token(Token = "0x4000CA9")]
	[FieldOffset(Offset = "0x1C")]
	public Color unityBackgroundImageTintColor;

	[Token(Token = "0x4000CAA")]
	[FieldOffset(Offset = "0x2C")]
	public OverflowClipBox unityOverflowClipBox;

	[Token(Token = "0x4000CAB")]
	[FieldOffset(Offset = "0x30")]
	public int unitySliceBottom;

	[Token(Token = "0x4000CAC")]
	[FieldOffset(Offset = "0x34")]
	public int unitySliceLeft;

	[Token(Token = "0x4000CAD")]
	[FieldOffset(Offset = "0x38")]
	public int unitySliceRight;

	[Token(Token = "0x4000CAE")]
	[FieldOffset(Offset = "0x3C")]
	public float unitySliceScale;

	[Token(Token = "0x4000CAF")]
	[FieldOffset(Offset = "0x40")]
	public int unitySliceTop;

	[Token(Token = "0x4000CB0")]
	[FieldOffset(Offset = "0x44")]
	public SliceType unitySliceType;

	[Token(Token = "0x4000CB1")]
	[FieldOffset(Offset = "0x48")]
	public TextOverflowPosition unityTextOverflowPosition;

	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x6AF8D50", Offset = "0x6AF7D50", VA = "0x6AF8D50", Slot = "4")]
	public RareData Copy()
	{
		return default(RareData);
	}

	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x6AF8D80", Offset = "0x6AF7D80", VA = "0x6AF8D80", Slot = "5")]
	public void CopyFrom(ref RareData other)
	{
	}

	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x6AF8DB0", Offset = "0x6AF7DB0", VA = "0x6AF8DB0")]
	public static bool operator ==(RareData lhs, RareData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x6AF8EC0", Offset = "0x6AF7EC0", VA = "0x6AF8EC0", Slot = "6")]
	public bool Equals(RareData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x6AF9080", Offset = "0x6AF8080", VA = "0x6AF9080", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x6AF92B0", Offset = "0x6AF82B0", VA = "0x6AF92B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
