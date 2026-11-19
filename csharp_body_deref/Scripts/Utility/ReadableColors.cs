// ==================== AoTTG2 cross-reference ====================
// Type: Utility.ReadableColors
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/ReadableColors.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000934")]
internal static class ReadableColors
{
	[Token(Token = "0x4002E56")]
	private const float MinContrast = 4.5f;

	[Token(Token = "0x4002E57")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex ColorRegex;

	[Token(Token = "0x60056BA")]
	[Address(RVA = "0x5CF08A0", Offset = "0x5CEF8A0", VA = "0x5CF08A0")]
	public static string Darken(string richText, Color background)
	{
		return null;
	}

	[Token(Token = "0x60056BB")]
	[Address(RVA = "0x5CF0A60", Offset = "0x5CEFA60", VA = "0x5CF0A60")]
	private static float Luminance(Color color)
	{
		return default(float);
	}
}
