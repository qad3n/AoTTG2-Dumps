using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000666")]
internal class ToolsPopup : BasePopup
{
	[Token(Token = "0x17000C72")]
	protected override string Title
	{
		[Token(Token = "0x600404D")]
		[Address(RVA = "0x3FFF6E0", Offset = "0x3FFF6E0", VA = "0x3FFF6E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C73")]
	protected override float Width
	{
		[Token(Token = "0x600404E")]
		[Address(RVA = "0x3FFF780", Offset = "0x3FFF780", VA = "0x3FFF780", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C74")]
	protected override float Height
	{
		[Token(Token = "0x600404F")]
		[Address(RVA = "0x3FFF790", Offset = "0x3FFF790", VA = "0x3FFF790", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C75")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004050")]
		[Address(RVA = "0x3FFF7A0", Offset = "0x3FFF7A0", VA = "0x3FFF7A0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C76")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004051")]
		[Address(RVA = "0x3FFF7B0", Offset = "0x3FFF7B0", VA = "0x3FFF7B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C77")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004052")]
		[Address(RVA = "0x3FFF7C0", Offset = "0x3FFF7C0", VA = "0x3FFF7C0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004053")]
	[Address(RVA = "0x3FFF7D0", Offset = "0x3FFF7D0", VA = "0x3FFF7D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004054")]
	[Address(RVA = "0x3FFFBB0", Offset = "0x3FFFBB0", VA = "0x3FFFBB0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004055")]
	[Address(RVA = "0x3FFFCD0", Offset = "0x3FFFCD0", VA = "0x3FFFCD0")]
	public ToolsPopup()
	{
	}
}
