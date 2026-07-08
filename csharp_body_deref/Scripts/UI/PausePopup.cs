using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005FF")]
internal class PausePopup : BasePopup
{
	[Token(Token = "0x17000B97")]
	protected override string Title
	{
		[Token(Token = "0x6003D29")]
		[Address(RVA = "0x3FC5400", Offset = "0x3FC5400", VA = "0x3FC5400", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B98")]
	protected override float Width
	{
		[Token(Token = "0x6003D2A")]
		[Address(RVA = "0x3FC54A0", Offset = "0x3FC54A0", VA = "0x3FC54A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B99")]
	protected override float Height
	{
		[Token(Token = "0x6003D2B")]
		[Address(RVA = "0x3FC54B0", Offset = "0x3FC54B0", VA = "0x3FC54B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003D2C")]
		[Address(RVA = "0x3FC54C0", Offset = "0x3FC54C0", VA = "0x3FC54C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9B")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003D2D")]
		[Address(RVA = "0x3FC54D0", Offset = "0x3FC54D0", VA = "0x3FC54D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003D2E")]
	[Address(RVA = "0x3FC54E0", Offset = "0x3FC54E0", VA = "0x3FC54E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D2F")]
	[Address(RVA = "0x3FC5780", Offset = "0x3FC5780", VA = "0x3FC5780")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003D30")]
	[Address(RVA = "0x3FC5990", Offset = "0x3FC5990", VA = "0x3FC5990")]
	public PausePopup()
	{
	}
}
