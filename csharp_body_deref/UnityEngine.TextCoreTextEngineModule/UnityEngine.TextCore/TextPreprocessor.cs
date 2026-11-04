// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.TextPreprocessor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine.TextCore;

[Token(Token = "0x2000018")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal static class TextPreprocessor
{
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3022350", Offset = "0x3020950", VA = "0x183022350")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreProcessString(ref string text, PreProcessFlags flags, TextSettings? textSettings)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3022230", Offset = "0x3020830", VA = "0x183022230")]
	private static int GetStyleHashCode(ReadOnlySpan<char> text)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x30222C0", Offset = "0x30208C0", VA = "0x1830222C0")]
	private static TextStyle GetStyle(TextSettings textSettings, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3023130", Offset = "0x3021730", VA = "0x183023130")]
	internal static string ReplaceStyleTags(string text, TextSettings textSettings)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3022BF0", Offset = "0x30211F0", VA = "0x183022BF0")]
	internal static string ReplaceNobrTags(string text)
	{
		return null;
	}
}
