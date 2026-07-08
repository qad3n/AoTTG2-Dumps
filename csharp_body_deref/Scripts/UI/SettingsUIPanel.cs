using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006AF")]
internal class SettingsUIPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D0D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60042C8")]
		[Address(RVA = "0x4039EF0", Offset = "0x4039EF0", VA = "0x4039EF0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042C9")]
	[Address(RVA = "0x4039F00", Offset = "0x4039F00", VA = "0x4039F00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042CA")]
	[Address(RVA = "0x403C220", Offset = "0x403C220", VA = "0x403C220")]
	public SettingsUIPanel()
	{
	}
}
