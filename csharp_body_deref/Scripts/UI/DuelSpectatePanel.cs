using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000639")]
internal class DuelSpectatePanel : DuelCategoryPanel
{
	[Token(Token = "0x17000C09")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003EFA")]
		[Address(RVA = "0x3FE70B0", Offset = "0x3FE70B0", VA = "0x3FE70B0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C0A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003EFB")]
		[Address(RVA = "0x3FE70C0", Offset = "0x3FE70C0", VA = "0x3FE70C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C0B")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003EFC")]
		[Address(RVA = "0x3FE70D0", Offset = "0x3FE70D0", VA = "0x3FE70D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003EFD")]
	[Address(RVA = "0x3FE70E0", Offset = "0x3FE70E0", VA = "0x3FE70E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003EFE")]
	[Address(RVA = "0x3FE70F0", Offset = "0x3FE70F0", VA = "0x3FE70F0")]
	public DuelSpectatePanel()
	{
	}
}
