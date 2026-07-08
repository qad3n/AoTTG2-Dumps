using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000699")]
internal class SettingsCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000CF2")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004261")]
		[Address(RVA = "0x402D6F0", Offset = "0x402D6F0", VA = "0x402D6F0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CF3")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6004262")]
		[Address(RVA = "0x402D700", Offset = "0x402D700", VA = "0x402D700", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004263")]
	[Address(RVA = "0x402D560", Offset = "0x402D560", VA = "0x402D560")]
	public SettingsCategoryPanel()
	{
	}
}
