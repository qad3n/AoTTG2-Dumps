using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006A3")]
internal class SettingsSkinsDefaultPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D02")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004291")]
		[Address(RVA = "0x40338A0", Offset = "0x40338A0", VA = "0x40338A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D03")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004292")]
		[Address(RVA = "0x40338B0", Offset = "0x40338B0", VA = "0x40338B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004293")]
	[Address(RVA = "0x40338C0", Offset = "0x40338C0", VA = "0x40338C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004294")]
	[Address(RVA = "0x40362B0", Offset = "0x40362B0", VA = "0x40362B0")]
	public SettingsSkinsDefaultPanel()
	{
	}
}
