// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F5")]
internal struct VisualData : IStyleDataGroup<VisualData>, IEquatable<VisualData>
{
	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0x0")]
	public Color backgroundColor;

	[Token(Token = "0x4000CBB")]
	[FieldOffset(Offset = "0x10")]
	public Background backgroundImage;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0x30")]
	public BackgroundPosition backgroundPositionX;

	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0x3C")]
	public BackgroundPosition backgroundPositionY;

	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0x48")]
	public BackgroundRepeat backgroundRepeat;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0x50")]
	public BackgroundSize backgroundSize;

	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0x64")]
	public Color borderBottomColor;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0x74")]
	public Length borderBottomLeftRadius;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x7C")]
	public Length borderBottomRightRadius;

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x84")]
	public Color borderLeftColor;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x94")]
	public Color borderRightColor;

	[Token(Token = "0x4000CC5")]
	[FieldOffset(Offset = "0xA4")]
	public Color borderTopColor;

	[Token(Token = "0x4000CC6")]
	[FieldOffset(Offset = "0xB4")]
	public Length borderTopLeftRadius;

	[Token(Token = "0x4000CC7")]
	[FieldOffset(Offset = "0xBC")]
	public Length borderTopRightRadius;

	[Token(Token = "0x4000CC8")]
	[FieldOffset(Offset = "0xC8")]
	public List<FilterFunction> filter;

	[Token(Token = "0x4000CC9")]
	[FieldOffset(Offset = "0xD0")]
	public float opacity;

	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0xD4")]
	public OverflowInternal overflow;

	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x6AFA240", Offset = "0x6AF9240", VA = "0x6AFA240", Slot = "4")]
	public VisualData Copy()
	{
		return default(VisualData);
	}

	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x6AFA400", Offset = "0x6AF9400", VA = "0x6AFA400", Slot = "5")]
	public void CopyFrom(ref VisualData other)
	{
	}

	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x6AFA570", Offset = "0x6AF9570", VA = "0x6AFA570")]
	public static bool operator ==(VisualData lhs, VisualData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x6AFA900", Offset = "0x6AF9900", VA = "0x6AFA900", Slot = "6")]
	public bool Equals(VisualData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x6AFA940", Offset = "0x6AF9940", VA = "0x6AFA940", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x6AFA9D0", Offset = "0x6AF99D0", VA = "0x6AFA9D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
