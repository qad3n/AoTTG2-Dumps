using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200057D")]
internal class CreateGameMiscPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000AF4")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003930")]
		[Address(RVA = "0x3F66270", Offset = "0x3F66270", VA = "0x3F66270", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AF5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003931")]
		[Address(RVA = "0x3F66280", Offset = "0x3F66280", VA = "0x3F66280", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003932")]
	[Address(RVA = "0x3F66290", Offset = "0x3F66290", VA = "0x3F66290", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003933")]
	[Address(RVA = "0x3F67730", Offset = "0x3F67730", VA = "0x3F67730")]
	public CreateGameMiscPanel()
	{
	}
}
