// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.CSSSpec
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6BEE720", Offset = "0x6BED720", VA = "0x6BEE720")]
	public static int GetSelectorSpecificity(string selector)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x6BEED70", Offset = "0x6BEDD70", VA = "0x6BEED70")]
	public static int GetSelectorSpecificity(StyleSelectorPart[] parts)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x6BEE7A0", Offset = "0x6BED7A0", VA = "0x6BEE7A0")]
	public static bool ParseSelector(string selector, out StyleSelectorPart[] parts)
	{
		return default(bool);
	}
}
