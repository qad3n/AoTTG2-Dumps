using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200058C")]
internal class CreateGameTitansPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000B09")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600398F")]
		[Address(RVA = "0x3F72BF0", Offset = "0x3F72BF0", VA = "0x3F72BF0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B0A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003990")]
		[Address(RVA = "0x3F72C00", Offset = "0x3F72C00", VA = "0x3F72C00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003991")]
	[Address(RVA = "0x3F72C10", Offset = "0x3F72C10", VA = "0x3F72C10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003992")]
	[Address(RVA = "0x3F73730", Offset = "0x3F73730", VA = "0x3F73730")]
	public CreateGameTitansPanel()
	{
	}
}
