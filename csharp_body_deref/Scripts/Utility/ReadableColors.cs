// ==================== AoTTG2 cross-reference ====================
// Type: Utility.ReadableColors
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/ReadableColors.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20008C9")]
internal static class ReadableColors
{
	[Token(Token = "0x4002B9D")]
	private const float MinContrast = 4.5f;

	[Token(Token = "0x4002B9E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex ColorRegex;

	[Token(Token = "0x600535F")]
	[Address(RVA = "0x233ECD0", Offset = "0x233D2D0", VA = "0x18233ECD0")]
	public static string Darken(string richText, Color background)
	{
		return null;
	}

	[Token(Token = "0x6005360")]
	[Address(RVA = "0x233EE80", Offset = "0x233D480", VA = "0x18233EE80")]
	private static float Luminance(Color color)
	{
		return default(float);
	}
}
