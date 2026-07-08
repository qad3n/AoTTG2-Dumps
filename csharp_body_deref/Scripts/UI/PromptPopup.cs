using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200053D")]
internal class PromptPopup : BasePopup
{
	[Token(Token = "0x17000A73")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003738")]
		[Address(RVA = "0x3F26C70", Offset = "0x3F26C70", VA = "0x3F26C70", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A74")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003739")]
		[Address(RVA = "0x3F26C80", Offset = "0x3F26C80", VA = "0x3F26C80", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A75")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x600373A")]
		[Address(RVA = "0x3F26C90", Offset = "0x3F26C90", VA = "0x3F26C90", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A76")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x600373B")]
		[Address(RVA = "0x3F26CA0", Offset = "0x3F26CA0", VA = "0x3F26CA0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600373C")]
	[Address(RVA = "0x3F1D770", Offset = "0x3F1D770", VA = "0x3F1D770", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600373D")]
	[Address(RVA = "0x3F26CB0", Offset = "0x3F26CB0", VA = "0x3F26CB0")]
	public void Update()
	{
	}

	[Token(Token = "0x600373E")]
	[Address(RVA = "0x3F21460", Offset = "0x3F21460", VA = "0x3F21460")]
	public PromptPopup()
	{
	}
}
