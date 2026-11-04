// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000627")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class StylePropertyCache
{
	[Token(Token = "0x4001712")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Dictionary<string, string> s_PropertySyntaxCache;

	[Token(Token = "0x4001713")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Dictionary<string, string> s_NonTerminalValues;

	[Token(Token = "0x6002D31")]
	[Address(RVA = "0x31C63D0", Offset = "0x31C49D0", VA = "0x1831C63D0")]
	public static bool TryGetSyntax(string name, out string syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D32")]
	[Address(RVA = "0x31C6340", Offset = "0x31C4940", VA = "0x1831C6340")]
	public static bool TryGetNonTerminalValue(string name, out string syntax)
	{
		return default(bool);
	}
}
