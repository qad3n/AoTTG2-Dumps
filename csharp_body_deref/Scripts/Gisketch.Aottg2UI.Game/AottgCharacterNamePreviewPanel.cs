// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000189")]
internal sealed class AottgCharacterNamePreviewPanel : AottgComponent
{
	[Token(Token = "0x4000882")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000883")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _width;

	[Token(Token = "0x4000884")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly bool _liveDialog;

	[Token(Token = "0x4000885")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _alignSelf;

	[Token(Token = "0x4000886")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _fullWidth;

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x44015D0", Offset = "0x44015D0", VA = "0x44015D0")]
	public AottgCharacterNamePreviewPanel(string id, [Optional][DefaultParameterValue(420f)] float width, [Optional][DefaultParameterValue(false)] bool liveDialog, [Optional] string alignSelf, bool fullWidth = false)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x4401640", Offset = "0x4401640", VA = "0x4401640", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
