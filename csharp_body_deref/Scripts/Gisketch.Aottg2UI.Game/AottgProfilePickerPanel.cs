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

[Token(Token = "0x20002BF")]
internal sealed class AottgProfilePickerPanel : AottgComponent
{
	[Token(Token = "0x4000E18")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000E19")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000E1A")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleIcon;

	[Token(Token = "0x4000E1B")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgComponent _picker;

	[Token(Token = "0x4000E1C")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _saveActionId;

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x1E19AF0", Offset = "0x1E180F0", VA = "0x181E19AF0")]
	public AottgProfilePickerPanel(string id, string title, string titleIcon, AottgComponent picker, string saveActionId)
	{
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x1E19270", Offset = "0x1E17870", VA = "0x181E19270", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
