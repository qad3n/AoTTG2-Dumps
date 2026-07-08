using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200064C")]
internal class LeaderboardPopup : BasePopup
{
	[Token(Token = "0x4001EF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting CurrentCategory;

	[Token(Token = "0x4001EF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CurrentSubcategory;

	[Token(Token = "0x17000C22")]
	protected override string Title
	{
		[Token(Token = "0x6003F74")]
		[Address(RVA = "0x3FF1360", Offset = "0x3FF1360", VA = "0x3FF1360", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C23")]
	protected override float Width
	{
		[Token(Token = "0x6003F75")]
		[Address(RVA = "0x3FF1400", Offset = "0x3FF1400", VA = "0x3FF1400", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C24")]
	protected override float Height
	{
		[Token(Token = "0x6003F76")]
		[Address(RVA = "0x3FF1410", Offset = "0x3FF1410", VA = "0x3FF1410", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C25")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003F77")]
		[Address(RVA = "0x3FF1420", Offset = "0x3FF1420", VA = "0x3FF1420", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C26")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003F78")]
		[Address(RVA = "0x3FF1430", Offset = "0x3FF1430", VA = "0x3FF1430", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C27")]
	protected override bool UseSound
	{
		[Token(Token = "0x6003F79")]
		[Address(RVA = "0x3FF1460", Offset = "0x3FF1460", VA = "0x3FF1460", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003F7A")]
	[Address(RVA = "0x3FF1470", Offset = "0x3FF1470", VA = "0x3FF1470", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F7B")]
	[Address(RVA = "0x3FF15F0", Offset = "0x3FF15F0", VA = "0x3FF15F0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003F7C")]
	[Address(RVA = "0x3FF1690", Offset = "0x3FF1690", VA = "0x3FF1690")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F7D")]
	[Address(RVA = "0x3FF1700", Offset = "0x3FF1700", VA = "0x3FF1700")]
	public LeaderboardPopup()
	{
	}
}
