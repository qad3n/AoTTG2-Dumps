// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RareData
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x30F2200", Offset = "0x30F0800", VA = "0x1830F2200", Slot = "4")]
	public RareData Copy()
	{
		return default(RareData);
	}

	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x30F21D0", Offset = "0x30F07D0", VA = "0x1830F21D0", Slot = "5")]
	public void CopyFrom(ref RareData other)
	{
	}

	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x30F2580", Offset = "0x30F0B80", VA = "0x1830F2580")]
	public static bool operator ==(RareData lhs, RareData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x30F22F0", Offset = "0x30F08F0", VA = "0x1830F22F0", Slot = "6")]
	public bool Equals(RareData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x30F2230", Offset = "0x30F0830", VA = "0x1830F2230", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x30F24B0", Offset = "0x30F0AB0", VA = "0x1830F24B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
