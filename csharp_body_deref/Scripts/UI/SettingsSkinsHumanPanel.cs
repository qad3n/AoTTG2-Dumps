using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006A5")]
internal class SettingsSkinsHumanPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D06")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004299")]
		[Address(RVA = "0x4036300", Offset = "0x4036300", VA = "0x4036300", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D07")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600429A")]
		[Address(RVA = "0x4036310", Offset = "0x4036310", VA = "0x4036310", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600429B")]
	[Address(RVA = "0x4036320", Offset = "0x4036320", VA = "0x4036320", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600429C")]
	[Address(RVA = "0x4036680", Offset = "0x4036680", VA = "0x4036680")]
	public SettingsSkinsHumanPanel()
	{
	}
}
