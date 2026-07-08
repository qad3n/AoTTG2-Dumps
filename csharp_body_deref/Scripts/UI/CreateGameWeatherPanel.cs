using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200058D")]
internal class CreateGameWeatherPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000B0B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003993")]
		[Address(RVA = "0x3F73740", Offset = "0x3F73740", VA = "0x3F73740", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003994")]
	[Address(RVA = "0x3F73750", Offset = "0x3F73750", VA = "0x3F73750", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003995")]
	[Address(RVA = "0x3F74EB0", Offset = "0x3F74EB0", VA = "0x3F74EB0")]
	private void OnWeatherSetSelected()
	{
	}

	[Token(Token = "0x6003996")]
	[Address(RVA = "0x3F74F50", Offset = "0x3F74F50", VA = "0x3F74F50")]
	private void OnWeatherPanelButtonClick(string name)
	{
	}

	[Token(Token = "0x6003997")]
	[Address(RVA = "0x3F75860", Offset = "0x3F75860", VA = "0x3F75860")]
	private void OnWeatherSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6003998")]
	[Address(RVA = "0x3F76070", Offset = "0x3F76070", VA = "0x3F76070")]
	public CreateGameWeatherPanel()
	{
	}
}
