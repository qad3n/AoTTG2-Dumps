using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000614")]
internal class ScoreboardPopup : BasePopup
{
	[Token(Token = "0x4001E04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001E05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ScoreboardProfilePopup _profilePopup;

	[Token(Token = "0x4001E06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public ConfirmPopup _kickPopup;

	[Token(Token = "0x4001E07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public ScoreboardMutePopup _mutePopup;

	[Token(Token = "0x17000BB0")]
	protected override string Title
	{
		[Token(Token = "0x6003DCB")]
		[Address(RVA = "0x3FD21B0", Offset = "0x3FD21B0", VA = "0x3FD21B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BB1")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003DCC")]
		[Address(RVA = "0x3FD21D0", Offset = "0x3FD21D0", VA = "0x3FD21D0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BB2")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6003DCD")]
		[Address(RVA = "0x3FD21E0", Offset = "0x3FD21E0", VA = "0x3FD21E0", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB3")]
	protected override float Width
	{
		[Token(Token = "0x6003DCE")]
		[Address(RVA = "0x3FD21F0", Offset = "0x3FD21F0", VA = "0x3FD21F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB4")]
	protected override float Height
	{
		[Token(Token = "0x6003DCF")]
		[Address(RVA = "0x3FD2200", Offset = "0x3FD2200", VA = "0x3FD2200", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB5")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003DD0")]
		[Address(RVA = "0x3FD2210", Offset = "0x3FD2210", VA = "0x3FD2210", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BB6")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003DD1")]
		[Address(RVA = "0x3FD2220", Offset = "0x3FD2220", VA = "0x3FD2220", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BB7")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003DD2")]
		[Address(RVA = "0x3FD2230", Offset = "0x3FD2230", VA = "0x3FD2230", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003DD3")]
	[Address(RVA = "0x3FD2260", Offset = "0x3FD2260", VA = "0x3FD2260", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003DD4")]
	[Address(RVA = "0x3FD23B0", Offset = "0x3FD23B0", VA = "0x3FD23B0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003DD5")]
	[Address(RVA = "0x3FD25E0", Offset = "0x3FD25E0", VA = "0x3FD25E0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003DD6")]
	[Address(RVA = "0x3FD2B50", Offset = "0x3FD2B50", VA = "0x3FD2B50", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003DD7")]
	[Address(RVA = "0x3FD2CD0", Offset = "0x3FD2CD0", VA = "0x3FD2CD0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6003DD8")]
	[Address(RVA = "0x3FD2990", Offset = "0x3FD2990", VA = "0x3FD2990")]
	private static bool ShouldShowModerationTab()
	{
		return default(bool);
	}

	[Token(Token = "0x6003DD9")]
	[Address(RVA = "0x3FD2D50", Offset = "0x3FD2D50", VA = "0x3FD2D50", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003DDA")]
	[Address(RVA = "0x3FD2280", Offset = "0x3FD2280", VA = "0x3FD2280")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003DDB")]
	[Address(RVA = "0x3FD2F80", Offset = "0x3FD2F80", VA = "0x3FD2F80")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003DDC")]
	[Address(RVA = "0x3FD3040", Offset = "0x3FD3040", VA = "0x3FD3040")]
	public ScoreboardPopup()
	{
	}
}
