using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000541")]
internal static class StyleSheetColor
{
	[Token(Token = "0x400121D")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Color32> s_NameToColor;

	[Token(Token = "0x6002031")]
	[Address(RVA = "0x4CA1550", Offset = "0x4CA1550", VA = "0x4CA1550")]
	public static bool TryGetColor(string name, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6002032")]
	[Address(RVA = "0x4CA5780", Offset = "0x4CA5780", VA = "0x4CA5780")]
	private static Color32 HexToColor32(uint color)
	{
		return default(Color32);
	}
}
