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

[Token(Token = "0x20001B9")]
internal sealed class AottgProfilePickerPanel : AottgComponent
{
	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleIcon;

	[Token(Token = "0x4000970")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgComponent _picker;

	[Token(Token = "0x4000971")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _saveActionId;

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x441F570", Offset = "0x441F570", VA = "0x441F570")]
	public AottgProfilePickerPanel(string id, string title, string titleIcon, AottgComponent picker, string saveActionId)
	{
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x4427CB0", Offset = "0x4427CB0", VA = "0x4427CB0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
