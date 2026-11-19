// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.TextPreprocessor
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6A0BF10", Offset = "0x6A0AF10", VA = "0x6A0BF10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreProcessString(ref string text, PreProcessFlags flags, TextSettings? textSettings)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x6A0D2D0", Offset = "0x6A0C2D0", VA = "0x6A0D2D0")]
	private static int GetStyleHashCode(ReadOnlySpan<char> text)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x6A0D350", Offset = "0x6A0C350", VA = "0x6A0D350")]
	private static TextStyle GetStyle(TextSettings textSettings, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x6A0C6C0", Offset = "0x6A0B6C0", VA = "0x6A0C6C0")]
	internal static string ReplaceStyleTags(string text, TextSettings textSettings)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x6A0CE60", Offset = "0x6A0BE60", VA = "0x6A0CE60")]
	internal static string ReplaceNobrTags(string text)
	{
		return null;
	}
}
