// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyUtil
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000533")]
internal static class StylePropertyUtil
{
	[Token(Token = "0x40011EE")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Dictionary<string, StylePropertyId> s_NameToId;

	[Token(Token = "0x40011EF")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Dictionary<StylePropertyId, string> s_IdToName;

	[Token(Token = "0x40011F0")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly HashSet<StylePropertyId> s_AnimatableProperties;

	[Token(Token = "0x40011F1")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly Dictionary<StylePropertyId, UsageHints> s_AnimatableWithUsageHintProperties;

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x4FC2170", Offset = "0x4FC2170", VA = "0x4FC2170")]
	public static bool TryGetEnumIntValue(StyleEnumType enumType, string value, out int intValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x4FC46C0", Offset = "0x4FC46C0", VA = "0x4FC46C0")]
	public static bool IsMatchingShorthand(StylePropertyId shorthand, StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x4FC47B0", Offset = "0x4FC47B0", VA = "0x4FC47B0")]
	public static bool IsAnimatable(StylePropertyId id)
	{
		return default(bool);
	}
}
