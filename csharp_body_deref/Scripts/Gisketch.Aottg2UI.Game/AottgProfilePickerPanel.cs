using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000186")]
internal sealed class AottgProfilePickerPanel : AottgComponent
{
	[Token(Token = "0x40008A7")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008A8")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleIcon;

	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgComponent _picker;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _saveActionId;

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x40EE2B0", Offset = "0x40EE2B0", VA = "0x40EE2B0")]
	public AottgProfilePickerPanel(string id, string title, string titleIcon, AottgComponent picker, string saveActionId)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x40F5800", Offset = "0x40F5800", VA = "0x40F5800", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
