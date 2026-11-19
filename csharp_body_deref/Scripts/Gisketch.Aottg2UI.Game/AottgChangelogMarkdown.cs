// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdown
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EA")]
public static class AottgChangelogMarkdown
{
	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex InlinePattern;

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x5D77370", Offset = "0x5D76370", VA = "0x5D77370")]
	public static IReadOnlyList<AottgChangelogMarkdownBlock> Parse(string markdown)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x5D77B50", Offset = "0x5D76B50", VA = "0x5D77B50")]
	public static string RenderInline(string text)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x5D779F0", Offset = "0x5D769F0", VA = "0x5D779F0")]
	private static bool TryReadHeader(string line, out string header)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x5D77AF0", Offset = "0x5D76AF0", VA = "0x5D77AF0")]
	private static bool IsBullet(string line)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x5D78280", Offset = "0x5D77280", VA = "0x5D78280")]
	private static string Escape(string value)
	{
		return null;
	}
}
