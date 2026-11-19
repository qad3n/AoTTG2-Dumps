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

[Token(Token = "0x20002EB")]
internal sealed class AottgCharacterNamePreviewPanel : AottgComponent
{
	[Token(Token = "0x4000EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _width;

	[Token(Token = "0x4000EBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly bool _liveDialog;

	[Token(Token = "0x4000EBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _alignSelf;

	[Token(Token = "0x4000EC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _fullWidth;

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x57DCFF0", Offset = "0x57DBFF0", VA = "0x57DCFF0")]
	public AottgCharacterNamePreviewPanel(string id, [Optional][DefaultParameterValue(420f)] float width, [Optional][DefaultParameterValue(false)] bool liveDialog, [Optional] string alignSelf, bool fullWidth = false)
	{
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x57DD060", Offset = "0x57DC060", VA = "0x57DD060", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
