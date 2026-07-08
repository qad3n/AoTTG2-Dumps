using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200069A")]
internal class SettingsGeneralPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000CF4")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004264")]
		[Address(RVA = "0x402D710", Offset = "0x402D710", VA = "0x402D710", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004265")]
	[Address(RVA = "0x402D720", Offset = "0x402D720", VA = "0x402D720", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004266")]
	[Address(RVA = "0x402E950", Offset = "0x402E950", VA = "0x402E950")]
	public SettingsGeneralPanel()
	{
	}
}
