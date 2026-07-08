using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200063B")]
internal class EditProfilePopup : BasePopup
{
	[Token(Token = "0x17000C0E")]
	protected override string Title
	{
		[Token(Token = "0x6003F05")]
		[Address(RVA = "0x3FE7C10", Offset = "0x3FE7C10", VA = "0x3FE7C10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C0F")]
	protected override float Width
	{
		[Token(Token = "0x6003F06")]
		[Address(RVA = "0x3FE7C30", Offset = "0x3FE7C30", VA = "0x3FE7C30", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C10")]
	protected override float Height
	{
		[Token(Token = "0x6003F07")]
		[Address(RVA = "0x3FE7C40", Offset = "0x3FE7C40", VA = "0x3FE7C40", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C11")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003F08")]
		[Address(RVA = "0x3FE7C50", Offset = "0x3FE7C50", VA = "0x3FE7C50", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C12")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003F09")]
		[Address(RVA = "0x3FE7C60", Offset = "0x3FE7C60", VA = "0x3FE7C60", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C13")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003F0A")]
		[Address(RVA = "0x3FE7C70", Offset = "0x3FE7C70", VA = "0x3FE7C70", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C14")]
	protected override bool UseSound
	{
		[Token(Token = "0x6003F0B")]
		[Address(RVA = "0x3FE7CA0", Offset = "0x3FE7CA0", VA = "0x3FE7CA0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003F0C")]
	[Address(RVA = "0x3FE7CB0", Offset = "0x3FE7CB0", VA = "0x3FE7CB0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F0D")]
	[Address(RVA = "0x3FE7F10", Offset = "0x3FE7F10", VA = "0x3FE7F10", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003F0E")]
	[Address(RVA = "0x3FE81F0", Offset = "0x3FE81F0", VA = "0x3FE81F0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003F0F")]
	[Address(RVA = "0x3FE8330", Offset = "0x3FE8330", VA = "0x3FE8330", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003F10")]
	[Address(RVA = "0x3FE8340", Offset = "0x3FE8340", VA = "0x3FE8340", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003F11")]
	[Address(RVA = "0x3FE7CD0", Offset = "0x3FE7CD0", VA = "0x3FE7CD0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003F12")]
	[Address(RVA = "0x3FE8370", Offset = "0x3FE8370", VA = "0x3FE8370")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F13")]
	[Address(RVA = "0x3FE8440", Offset = "0x3FE8440", VA = "0x3FE8440")]
	public EditProfilePopup()
	{
	}
}
