// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007BD")]
internal class ScoreboardPopup : BasePopup
{
	[Token(Token = "0x4002718")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002719")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ScoreboardProfilePopup _profilePopup;

	[Token(Token = "0x400271A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public ScoreboardKickPopup _kickPopup;

	[Token(Token = "0x400271B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public ScoreboardMutePopup _mutePopup;

	[Token(Token = "0x400271C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private AottgInGameView _view;

	[Token(Token = "0x17000D74")]
	protected override string Title
	{
		[Token(Token = "0x6004B18")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D75")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004B19")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D76")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6004B1A")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D77")]
	protected override float Width
	{
		[Token(Token = "0x6004B1B")]
		[Address(RVA = "0x226B2E0", Offset = "0x22698E0", VA = "0x18226B2E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D78")]
	protected override float Height
	{
		[Token(Token = "0x6004B1C")]
		[Address(RVA = "0x21BB440", Offset = "0x21B9A40", VA = "0x1821BB440", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D79")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004B1D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D7A")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004B1E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D7B")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004B1F")]
		[Address(RVA = "0x226B2B0", Offset = "0x22698B0", VA = "0x18226B2B0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004B20")]
	[Address(RVA = "0x226ACE0", Offset = "0x22692E0", VA = "0x18226ACE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B21")]
	[Address(RVA = "0x226B0F0", Offset = "0x22696F0", VA = "0x18226B0F0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004B22")]
	[Address(RVA = "0x226AA00", Offset = "0x2269000", VA = "0x18226AA00", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004B23")]
	[Address(RVA = "0x226A400", Offset = "0x2268A00", VA = "0x18226A400", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004B24")]
	[Address(RVA = "0x226A620", Offset = "0x2268C20", VA = "0x18226A620", Slot = "43")]
	protected override void SetTopButton(string name)
	{
	}

	[Token(Token = "0x6004B25")]
	[Address(RVA = "0x226A540", Offset = "0x2268B40", VA = "0x18226A540", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6004B26")]
	[Address(RVA = "0x226AFA0", Offset = "0x22695A0", VA = "0x18226AFA0")]
	private static bool ShouldShowModerationTab()
	{
		return default(bool);
	}

	[Token(Token = "0x6004B27")]
	[Address(RVA = "0x226A7C0", Offset = "0x2268DC0", VA = "0x18226A7C0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004B28")]
	[Address(RVA = "0x226B250", Offset = "0x2269850", VA = "0x18226B250")]
	public ScoreboardPopup()
	{
	}
}
