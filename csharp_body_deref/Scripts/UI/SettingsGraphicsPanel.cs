using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200069C")]
internal class SettingsGraphicsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000CF5")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004269")]
		[Address(RVA = "0x402E980", Offset = "0x402E980", VA = "0x402E980", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600426A")]
	[Address(RVA = "0x402E990", Offset = "0x402E990", VA = "0x402E990", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600426B")]
	[Address(RVA = "0x4030720", Offset = "0x4030720", VA = "0x4030720")]
	protected void OnSelectPreset()
	{
	}

	[Token(Token = "0x600426C")]
	[Address(RVA = "0x4030780", Offset = "0x4030780", VA = "0x4030780")]
	public SettingsGraphicsPanel()
	{
	}
}
