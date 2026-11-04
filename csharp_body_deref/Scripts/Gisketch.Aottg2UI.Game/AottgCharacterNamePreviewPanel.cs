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

[Token(Token = "0x200028F")]
internal sealed class AottgCharacterNamePreviewPanel : AottgComponent
{
	[Token(Token = "0x4000D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _width;

	[Token(Token = "0x4000D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly bool _liveDialog;

	[Token(Token = "0x4000D26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _alignSelf;

	[Token(Token = "0x4000D27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _fullWidth;

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x1DF5A50", Offset = "0x1DF4050", VA = "0x181DF5A50")]
	public AottgCharacterNamePreviewPanel(string id, [Optional][DefaultParameterValue(420f)] float width, [Optional][DefaultParameterValue(false)] bool liveDialog, [Optional] string alignSelf, bool fullWidth = false)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x1DF5390", Offset = "0x1DF3990", VA = "0x181DF5390", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
