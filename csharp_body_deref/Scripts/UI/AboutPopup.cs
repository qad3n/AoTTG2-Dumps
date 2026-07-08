using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200062D")]
internal class AboutPopup : BasePopup
{
	[Token(Token = "0x17000BF6")]
	protected override string Title
	{
		[Token(Token = "0x6003E8F")]
		[Address(RVA = "0x3FDE010", Offset = "0x3FDE010", VA = "0x3FDE010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BF7")]
	protected override float Width
	{
		[Token(Token = "0x6003E90")]
		[Address(RVA = "0x3FDE030", Offset = "0x3FDE030", VA = "0x3FDE030", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF8")]
	protected override float Height
	{
		[Token(Token = "0x6003E91")]
		[Address(RVA = "0x3FDE040", Offset = "0x3FDE040", VA = "0x3FDE040", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF9")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003E92")]
		[Address(RVA = "0x3FDE050", Offset = "0x3FDE050", VA = "0x3FDE050", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BFA")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003E93")]
		[Address(RVA = "0x3FDE060", Offset = "0x3FDE060", VA = "0x3FDE060", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BFB")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003E94")]
		[Address(RVA = "0x3FDE070", Offset = "0x3FDE070", VA = "0x3FDE070", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BFC")]
	protected override bool UseSound
	{
		[Token(Token = "0x6003E95")]
		[Address(RVA = "0x3FDE0A0", Offset = "0x3FDE0A0", VA = "0x3FDE0A0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003E96")]
	[Address(RVA = "0x3FDE0B0", Offset = "0x3FDE0B0", VA = "0x3FDE0B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E97")]
	[Address(RVA = "0x3FDE310", Offset = "0x3FDE310", VA = "0x3FDE310", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003E98")]
	[Address(RVA = "0x3FDE660", Offset = "0x3FDE660", VA = "0x3FDE660", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003E99")]
	[Address(RVA = "0x3FDE0D0", Offset = "0x3FDE0D0", VA = "0x3FDE0D0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003E9A")]
	[Address(RVA = "0x3FDE7B0", Offset = "0x3FDE7B0", VA = "0x3FDE7B0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003E9B")]
	[Address(RVA = "0x3FDE820", Offset = "0x3FDE820", VA = "0x3FDE820")]
	public AboutPopup()
	{
	}
}
