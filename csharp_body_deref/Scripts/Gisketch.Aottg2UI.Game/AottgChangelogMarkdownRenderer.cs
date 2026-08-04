// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200014C")]
public sealed class AottgChangelogMarkdownRenderer : AottgComponent
{
	[Token(Token = "0x4000769")]
	private const float SpacerHeight = 12f;

	[Token(Token = "0x400076A")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _markdown;

	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _id;

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxLines;

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x43E17A0", Offset = "0x43E17A0", VA = "0x43E17A0")]
	public AottgChangelogMarkdownRenderer(string markdown, string id = "changelog-markdown", int maxLines = 0)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x43E1830", Offset = "0x43E1830", VA = "0x43E1830", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x43E1C10", Offset = "0x43E1C10", VA = "0x43E1C10")]
	private int BuildBlock(AottgUi ui, AottgChangelogMarkdownBlock block, int index, int remainingLines)
	{
		return default(int);
	}
}
