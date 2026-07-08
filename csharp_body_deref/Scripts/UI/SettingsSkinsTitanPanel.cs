using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006AD")]
internal class SettingsSkinsTitanPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D0A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60042BC")]
		[Address(RVA = "0x40386F0", Offset = "0x40386F0", VA = "0x40386F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D0B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60042BD")]
		[Address(RVA = "0x4038700", Offset = "0x4038700", VA = "0x4038700", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042BE")]
	[Address(RVA = "0x4038710", Offset = "0x4038710", VA = "0x4038710", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042BF")]
	[Address(RVA = "0x4038720", Offset = "0x4038720", VA = "0x4038720")]
	public SettingsSkinsTitanPanel()
	{
	}
}
