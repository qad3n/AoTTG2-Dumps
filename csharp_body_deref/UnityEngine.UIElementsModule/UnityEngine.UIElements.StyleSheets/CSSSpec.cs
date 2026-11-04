// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.CSSSpec
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200062B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class CSSSpec
{
	[Token(Token = "0x400179C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex rgx;

	[Token(Token = "0x6002D3A")]
	[Address(RVA = "0x31EB890", Offset = "0x31E9E90", VA = "0x1831EB890")]
	public static int GetSelectorSpecificity(string selector)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x31EB9E0", Offset = "0x31E9FE0", VA = "0x1831EB9E0")]
	public static int GetSelectorSpecificity(StyleSelectorPart[] parts)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x31EBAC0", Offset = "0x31EA0C0", VA = "0x1831EBAC0")]
	public static bool ParseSelector(string selector, out StyleSelectorPart[] parts)
	{
		return default(bool);
	}
}
