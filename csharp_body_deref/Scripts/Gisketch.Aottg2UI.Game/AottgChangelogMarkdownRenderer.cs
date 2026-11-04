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

[Token(Token = "0x20001D4")]
public sealed class AottgChangelogMarkdownRenderer : AottgComponent
{
	[Token(Token = "0x40009E1")]
	private const float SpacerHeight = 12f;

	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _markdown;

	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _id;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxLines;

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x23A5C70", Offset = "0x23A4270", VA = "0x1823A5C70")]
	public AottgChangelogMarkdownRenderer(string markdown, string id = "changelog-markdown", int maxLines = 0)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x23A5A50", Offset = "0x23A4050", VA = "0x1823A5A50", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x23A5610", Offset = "0x23A3C10", VA = "0x1823A5610")]
	private int BuildBlock(AottgUi ui, AottgChangelogMarkdownBlock block, int index, int remainingLines)
	{
		return default(int);
	}
}
