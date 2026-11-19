// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000869")]
internal class ScoreboardPopup : BasePopup
{
	[Token(Token = "0x4002A98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002A99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ScoreboardProfilePopup _profilePopup;

	[Token(Token = "0x4002A9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public ScoreboardKickPopup _kickPopup;

	[Token(Token = "0x4002A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public ScoreboardMutePopup _mutePopup;

	[Token(Token = "0x4002A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private AottgInGameView _view;

	[Token(Token = "0x17000DE5")]
	protected override string Title
	{
		[Token(Token = "0x6005037")]
		[Address(RVA = "0x5C49350", Offset = "0x5C48350", VA = "0x5C49350", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DE6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6005038")]
		[Address(RVA = "0x5C49370", Offset = "0x5C48370", VA = "0x5C49370", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DE7")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6005039")]
		[Address(RVA = "0x5C49380", Offset = "0x5C48380", VA = "0x5C49380", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DE8")]
	protected override float Width
	{
		[Token(Token = "0x600503A")]
		[Address(RVA = "0x5C49390", Offset = "0x5C48390", VA = "0x5C49390", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DE9")]
	protected override float Height
	{
		[Token(Token = "0x600503B")]
		[Address(RVA = "0x5C493A0", Offset = "0x5C483A0", VA = "0x5C493A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DEA")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600503C")]
		[Address(RVA = "0x5C493B0", Offset = "0x5C483B0", VA = "0x5C493B0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DEB")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600503D")]
		[Address(RVA = "0x5C493C0", Offset = "0x5C483C0", VA = "0x5C493C0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DEC")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600503E")]
		[Address(RVA = "0x5C493D0", Offset = "0x5C483D0", VA = "0x5C493D0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600503F")]
	[Address(RVA = "0x5C49400", Offset = "0x5C48400", VA = "0x5C49400", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005040")]
	[Address(RVA = "0x5C49680", Offset = "0x5C48680", VA = "0x5C49680", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6005041")]
	[Address(RVA = "0x5C49B30", Offset = "0x5C48B30", VA = "0x5C49B30", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6005042")]
	[Address(RVA = "0x5C49DD0", Offset = "0x5C48DD0", VA = "0x5C49DD0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005043")]
	[Address(RVA = "0x5C49F10", Offset = "0x5C48F10", VA = "0x5C49F10", Slot = "43")]
	protected override void SetTopButton(string name)
	{
	}

	[Token(Token = "0x6005044")]
	[Address(RVA = "0x5C4A0C0", Offset = "0x5C490C0", VA = "0x5C4A0C0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6005045")]
	[Address(RVA = "0x5C497E0", Offset = "0x5C487E0", VA = "0x5C497E0")]
	private static bool ShouldShowModerationTab()
	{
		return default(bool);
	}

	[Token(Token = "0x6005046")]
	[Address(RVA = "0x5C4A190", Offset = "0x5C49190", VA = "0x5C4A190", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6005047")]
	[Address(RVA = "0x5C4A3B0", Offset = "0x5C493B0", VA = "0x5C4A3B0")]
	public ScoreboardPopup()
	{
	}
}
