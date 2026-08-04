// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InheritedData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035B")]
internal struct InheritedData : IStyleDataGroup<InheritedData>, IEquatable<InheritedData>
{
	[Token(Token = "0x40009FD")]
	[FieldOffset(Offset = "0x0")]
	public Color color;

	[Token(Token = "0x40009FE")]
	[FieldOffset(Offset = "0x10")]
	public Length fontSize;

	[Token(Token = "0x40009FF")]
	[FieldOffset(Offset = "0x18")]
	public Length letterSpacing;

	[Token(Token = "0x4000A00")]
	[FieldOffset(Offset = "0x20")]
	public TextShadow textShadow;

	[Token(Token = "0x4000A01")]
	[FieldOffset(Offset = "0x40")]
	public Font unityFont;

	[Token(Token = "0x4000A02")]
	[FieldOffset(Offset = "0x48")]
	public FontDefinition unityFontDefinition;

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x58")]
	public FontStyle unityFontStyleAndWeight;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x5C")]
	public Length unityParagraphSpacing;

	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x64")]
	public TextAnchor unityTextAlign;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x68")]
	public Color unityTextOutlineColor;

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x78")]
	public float unityTextOutlineWidth;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x7C")]
	public Visibility visibility;

	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x80")]
	public WhiteSpace whiteSpace;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x84")]
	public Length wordSpacing;

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x50A9710", Offset = "0x50A9710", VA = "0x50A9710", Slot = "4")]
	public InheritedData Copy()
	{
		return default(InheritedData);
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x50A9730", Offset = "0x50A9730", VA = "0x50A9730", Slot = "5")]
	public void CopyFrom(ref InheritedData other)
	{
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x50A9750", Offset = "0x50A9750", VA = "0x50A9750")]
	public static bool operator ==(InheritedData lhs, InheritedData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x50A9A10", Offset = "0x50A9A10", VA = "0x50A9A10", Slot = "6")]
	public bool Equals(InheritedData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x50A9A50", Offset = "0x50A9A50", VA = "0x50A9A50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x50A9AE0", Offset = "0x50A9AE0", VA = "0x50A9AE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
