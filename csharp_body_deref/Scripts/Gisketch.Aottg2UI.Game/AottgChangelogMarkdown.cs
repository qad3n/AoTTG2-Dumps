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

[Token(Token = "0x20001D3")]
public static class AottgChangelogMarkdown
{
	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex InlinePattern;

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x23A5E40", Offset = "0x23A4440", VA = "0x1823A5E40")]
	public static IReadOnlyList<AottgChangelogMarkdownBlock> Parse(string markdown)
	{
		return null;
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x23A64E0", Offset = "0x23A4AE0", VA = "0x1823A64E0")]
	public static string RenderInline(string text)
	{
		return null;
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x23A6B60", Offset = "0x23A5160", VA = "0x1823A6B60")]
	private static bool TryReadHeader(string line, out string header)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x23A5DE0", Offset = "0x23A43E0", VA = "0x1823A5DE0")]
	private static bool IsBullet(string line)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x23A5CF0", Offset = "0x23A42F0", VA = "0x1823A5CF0")]
	private static string Escape(string value)
	{
		return null;
	}
}
