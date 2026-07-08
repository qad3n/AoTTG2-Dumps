using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000530")]
internal static class StylePropertyCache
{
	[Token(Token = "0x4001176")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Dictionary<string, string> s_PropertySyntaxCache;

	[Token(Token = "0x4001177")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Dictionary<string, string> s_NonTerminalValues;

	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x4C9B980", Offset = "0x4C9B980", VA = "0x4C9B980")]
	public static bool TryGetSyntax(string name, out string syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x4C9BA20", Offset = "0x4C9BA20", VA = "0x4C9BA20")]
	public static bool TryGetNonTerminalValue(string name, out string syntax)
	{
		return default(bool);
	}
}
