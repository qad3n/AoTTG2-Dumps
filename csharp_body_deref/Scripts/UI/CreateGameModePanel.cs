using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200057E")]
internal class CreateGameModePanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000AF6")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003934")]
		[Address(RVA = "0x3F67740", Offset = "0x3F67740", VA = "0x3F67740", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003935")]
	[Address(RVA = "0x3F67750", Offset = "0x3F67750", VA = "0x3F67750", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003936")]
	[Address(RVA = "0x3F6BD90", Offset = "0x3F6BD90", VA = "0x3F6BD90")]
	public CreateGameModePanel()
	{
	}
}
