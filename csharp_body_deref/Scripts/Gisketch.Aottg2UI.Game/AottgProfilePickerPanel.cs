// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePickerPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePickerPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200031C")]
internal sealed class AottgProfilePickerPanel : AottgComponent
{
	[Token(Token = "0x4000FA9")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000FAA")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000FAB")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleIcon;

	[Token(Token = "0x4000FAC")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgComponent _picker;

	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _saveActionId;

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x57FC030", Offset = "0x57FB030", VA = "0x57FC030")]
	public AottgProfilePickerPanel(string id, string title, string titleIcon, AottgComponent picker, string saveActionId)
	{
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x5803C30", Offset = "0x5802C30", VA = "0x5803C30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
