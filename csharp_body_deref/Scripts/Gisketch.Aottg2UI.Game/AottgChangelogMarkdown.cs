// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdown
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200014B")]
public static class AottgChangelogMarkdown
{
	[Token(Token = "0x4000768")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex InlinePattern;

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x43E0450", Offset = "0x43E0450", VA = "0x43E0450")]
	public static IReadOnlyList<AottgChangelogMarkdownBlock> Parse(string markdown)
	{
		return null;
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x43E0C50", Offset = "0x43E0C50", VA = "0x43E0C50")]
	public static string RenderInline(string text)
	{
		return null;
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x43E0AF0", Offset = "0x43E0AF0", VA = "0x43E0AF0")]
	private static bool TryReadHeader(string line, out string header)
	{
		return default(bool);
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x43E0BF0", Offset = "0x43E0BF0", VA = "0x43E0BF0")]
	private static bool IsBullet(string line)
	{
		return default(bool);
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x43E1610", Offset = "0x43E1610", VA = "0x43E1610")]
	private static string Escape(string value)
	{
		return null;
	}
}
