// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InheritedData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F0")]
internal struct InheritedData : IStyleDataGroup<InheritedData>, IEquatable<InheritedData>
{
	[Token(Token = "0x4000C73")]
	[FieldOffset(Offset = "0x0")]
	public Color color;

	[Token(Token = "0x4000C74")]
	[FieldOffset(Offset = "0x10")]
	public Length fontSize;

	[Token(Token = "0x4000C75")]
	[FieldOffset(Offset = "0x18")]
	public Length letterSpacing;

	[Token(Token = "0x4000C76")]
	[FieldOffset(Offset = "0x20")]
	public TextShadow textShadow;

	[Token(Token = "0x4000C77")]
	[FieldOffset(Offset = "0x3C")]
	public EditorTextRenderingMode unityEditorTextRenderingMode;

	[Token(Token = "0x4000C78")]
	[FieldOffset(Offset = "0x40")]
	public Font unityFont;

	[Token(Token = "0x4000C79")]
	[FieldOffset(Offset = "0x48")]
	public FontDefinition unityFontDefinition;

	[Token(Token = "0x4000C7A")]
	[FieldOffset(Offset = "0x58")]
	public FontStyle unityFontStyleAndWeight;

	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x60")]
	public MaterialDefinition unityMaterial;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x70")]
	public Length unityParagraphSpacing;

	[Token(Token = "0x4000C7D")]
	[FieldOffset(Offset = "0x78")]
	public TextAnchor unityTextAlign;

	[Token(Token = "0x4000C7E")]
	[FieldOffset(Offset = "0x7C")]
	public TextAutoSize unityTextAutoSize;

	[Token(Token = "0x4000C7F")]
	[FieldOffset(Offset = "0x90")]
	public TextGeneratorType unityTextGenerator;

	[Token(Token = "0x4000C80")]
	[FieldOffset(Offset = "0x94")]
	public Color unityTextOutlineColor;

	[Token(Token = "0x4000C81")]
	[FieldOffset(Offset = "0xA4")]
	public float unityTextOutlineWidth;

	[Token(Token = "0x4000C82")]
	[FieldOffset(Offset = "0xA8")]
	public Visibility visibility;

	[Token(Token = "0x4000C83")]
	[FieldOffset(Offset = "0xAC")]
	public WhiteSpace whiteSpace;

	[Token(Token = "0x4000C84")]
	[FieldOffset(Offset = "0xB0")]
	public Length wordSpacing;

	[Token(Token = "0x6001D74")]
	[Address(RVA = "0x30EE4A0", Offset = "0x30ECAA0", VA = "0x1830EE4A0", Slot = "4")]
	public InheritedData Copy()
	{
		return default(InheritedData);
	}

	[Token(Token = "0x6001D75")]
	[Address(RVA = "0x30EE3D0", Offset = "0x30EC9D0", VA = "0x1830EE3D0", Slot = "5")]
	public void CopyFrom(ref InheritedData other)
	{
	}

	[Token(Token = "0x6001D76")]
	[Address(RVA = "0x30EEA10", Offset = "0x30ED010", VA = "0x1830EEA10")]
	public static bool operator ==(InheritedData lhs, InheritedData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D77")]
	[Address(RVA = "0x30EE520", Offset = "0x30ECB20", VA = "0x1830EE520", Slot = "6")]
	public bool Equals(InheritedData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D78")]
	[Address(RVA = "0x30EE630", Offset = "0x30ECC30", VA = "0x1830EE630", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D79")]
	[Address(RVA = "0x30EE760", Offset = "0x30ECD60", VA = "0x1830EE760", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
