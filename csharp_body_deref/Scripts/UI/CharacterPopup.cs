using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005CA")]
internal class CharacterPopup : BasePopup
{
	[Token(Token = "0x4001C04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001C05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<string> _allowedCategories;

	[Token(Token = "0x17000B39")]
	protected override string Title
	{
		[Token(Token = "0x6003B29")]
		[Address(RVA = "0x3F95DF0", Offset = "0x3F95DF0", VA = "0x3F95DF0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B3A")]
	protected override float Width
	{
		[Token(Token = "0x6003B2A")]
		[Address(RVA = "0x3F95E10", Offset = "0x3F95E10", VA = "0x3F95E10", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3B")]
	protected override float Height
	{
		[Token(Token = "0x6003B2B")]
		[Address(RVA = "0x3F95E20", Offset = "0x3F95E20", VA = "0x3F95E20", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3C")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003B2C")]
		[Address(RVA = "0x3F95E30", Offset = "0x3F95E30", VA = "0x3F95E30", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B3D")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003B2D")]
		[Address(RVA = "0x3F95E40", Offset = "0x3F95E40", VA = "0x3F95E40", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B3E")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003B2E")]
		[Address(RVA = "0x3F95E50", Offset = "0x3F95E50", VA = "0x3F95E50", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003B2F")]
	[Address(RVA = "0x3F95E80", Offset = "0x3F95E80", VA = "0x3F95E80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B30")]
	[Address(RVA = "0x3F95FB0", Offset = "0x3F95FB0", VA = "0x3F95FB0", Slot = "59")]
	protected virtual void SetAllowedCategories()
	{
	}

	[Token(Token = "0x6003B31")]
	[Address(RVA = "0x3F962B0", Offset = "0x3F962B0", VA = "0x3F962B0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003B32")]
	[Address(RVA = "0x3F96670", Offset = "0x3F96670", VA = "0x3F96670", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003B33")]
	[Address(RVA = "0x3F967B0", Offset = "0x3F967B0", VA = "0x3F967B0", Slot = "60")]
	protected virtual void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003B34")]
	[Address(RVA = "0x3F96990", Offset = "0x3F96990", VA = "0x3F96990")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003B35")]
	[Address(RVA = "0x3F8E040", Offset = "0x3F8E040", VA = "0x3F8E040")]
	protected void SaveLastCharacter()
	{
	}

	[Token(Token = "0x6003B36")]
	[Address(RVA = "0x3F8E330", Offset = "0x3F8E330", VA = "0x3F8E330")]
	public CharacterPopup()
	{
	}
}
