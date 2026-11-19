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
	[Address(RVA = "0x6AF7FA0", Offset = "0x6AF6FA0", VA = "0x6AF7FA0", Slot = "4")]
	public InheritedData Copy()
	{
		return default(InheritedData);
	}

	[Token(Token = "0x6001D75")]
	[Address(RVA = "0x6AF7FC0", Offset = "0x6AF6FC0", VA = "0x6AF7FC0", Slot = "5")]
	public void CopyFrom(ref InheritedData other)
	{
	}

	[Token(Token = "0x6001D76")]
	[Address(RVA = "0x6AF7FE0", Offset = "0x6AF6FE0", VA = "0x6AF7FE0")]
	public static bool operator ==(InheritedData lhs, InheritedData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D77")]
	[Address(RVA = "0x6AF8300", Offset = "0x6AF7300", VA = "0x6AF8300", Slot = "6")]
	public bool Equals(InheritedData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D78")]
	[Address(RVA = "0x6AF8340", Offset = "0x6AF7340", VA = "0x6AF8340", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D79")]
	[Address(RVA = "0x6AF83D0", Offset = "0x6AF73D0", VA = "0x6AF83D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
