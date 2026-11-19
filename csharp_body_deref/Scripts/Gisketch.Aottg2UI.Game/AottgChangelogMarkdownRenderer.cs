// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EB")]
public sealed class AottgChangelogMarkdownRenderer : AottgComponent
{
	[Token(Token = "0x4000A55")]
	private const float SpacerHeight = 12f;

	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _markdown;

	[Token(Token = "0x4000A57")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _id;

	[Token(Token = "0x4000A58")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxLines;

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x5D78410", Offset = "0x5D77410", VA = "0x5D78410")]
	public AottgChangelogMarkdownRenderer(string markdown, string id = "changelog-markdown", int maxLines = 0)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x5D78490", Offset = "0x5D77490", VA = "0x5D78490", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x5D787A0", Offset = "0x5D777A0", VA = "0x5D787A0")]
	private int BuildBlock(AottgUi ui, AottgChangelogMarkdownBlock block, int index, int remainingLines)
	{
		return default(int);
	}
}
