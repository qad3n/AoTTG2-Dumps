// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyUtil
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200062A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class StylePropertyUtil
{
	[Token(Token = "0x4001796")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Dictionary<string, StylePropertyId> s_NameToId;

	[Token(Token = "0x4001797")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Dictionary<StylePropertyId, string> s_IdToName;

	[Token(Token = "0x4001798")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Dictionary<string, string> s_UssNameToCSharpName;

	[Token(Token = "0x4001799")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly Dictionary<string, string> s_CSharpNameToUssName;

	[Token(Token = "0x400179A")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly HashSet<StylePropertyId> s_AnimatableProperties;

	[Token(Token = "0x400179B")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly Dictionary<StylePropertyId, UsageHints> s_AnimatableWithUsageHintProperties;

	[Token(Token = "0x17000B67")]
	internal static Dictionary<string, StylePropertyId> propertyNameToStylePropertyId
	{
		[Token(Token = "0x6002D36")]
		[Address(RVA = "0x31CCBC0", Offset = "0x31CB1C0", VA = "0x1831CCBC0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B68")]
	internal static Dictionary<StylePropertyId, string> stylePropertyIdToPropertyName
	{
		[Token(Token = "0x6002D37")]
		[Address(RVA = "0x31CCC10", Offset = "0x31CB210", VA = "0x1831CCC10")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002D34")]
	[Address(RVA = "0x31C7AF0", Offset = "0x31C60F0", VA = "0x1831C7AF0")]
	public static bool TryGetEnumIntValue(StyleEnumType enumType, string value, out int intValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D35")]
	[Address(RVA = "0x31C7980", Offset = "0x31C5F80", VA = "0x1831C7980")]
	public static bool IsMatchingShorthand(StylePropertyId shorthand, StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D38")]
	[Address(RVA = "0x31C7900", Offset = "0x31C5F00", VA = "0x1831C7900")]
	public static bool IsAnimatable(StylePropertyId id)
	{
		return default(bool);
	}
}
