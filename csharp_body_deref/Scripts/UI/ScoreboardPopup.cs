// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200065F")]
internal class ScoreboardPopup : BasePopup
{
	[Token(Token = "0x4001F4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001F4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ScoreboardProfilePopup _profilePopup;

	[Token(Token = "0x4001F4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public ConfirmPopup _kickPopup;

	[Token(Token = "0x4001F4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public ScoreboardMutePopup _mutePopup;

	[Token(Token = "0x17000C28")]
	protected override string Title
	{
		[Token(Token = "0x6004018")]
		[Address(RVA = "0x42E4BB0", Offset = "0x42E4BB0", VA = "0x42E4BB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C29")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004019")]
		[Address(RVA = "0x42E4BD0", Offset = "0x42E4BD0", VA = "0x42E4BD0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C2A")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x600401A")]
		[Address(RVA = "0x42E4BE0", Offset = "0x42E4BE0", VA = "0x42E4BE0", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C2B")]
	protected override float Width
	{
		[Token(Token = "0x600401B")]
		[Address(RVA = "0x42E4BF0", Offset = "0x42E4BF0", VA = "0x42E4BF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C2C")]
	protected override float Height
	{
		[Token(Token = "0x600401C")]
		[Address(RVA = "0x42E4C00", Offset = "0x42E4C00", VA = "0x42E4C00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C2D")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600401D")]
		[Address(RVA = "0x42E4C10", Offset = "0x42E4C10", VA = "0x42E4C10", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C2E")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600401E")]
		[Address(RVA = "0x42E4C20", Offset = "0x42E4C20", VA = "0x42E4C20", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C2F")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600401F")]
		[Address(RVA = "0x42E4C30", Offset = "0x42E4C30", VA = "0x42E4C30", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004020")]
	[Address(RVA = "0x42E4C60", Offset = "0x42E4C60", VA = "0x42E4C60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004021")]
	[Address(RVA = "0x42E4DB0", Offset = "0x42E4DB0", VA = "0x42E4DB0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004022")]
	[Address(RVA = "0x42E4E50", Offset = "0x42E4E50", VA = "0x42E4E50", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004023")]
	[Address(RVA = "0x42E53C0", Offset = "0x42E53C0", VA = "0x42E53C0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004024")]
	[Address(RVA = "0x42E5540", Offset = "0x42E5540", VA = "0x42E5540", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6004025")]
	[Address(RVA = "0x42E5200", Offset = "0x42E5200", VA = "0x42E5200")]
	private static bool ShouldShowModerationTab()
	{
		return default(bool);
	}

	[Token(Token = "0x6004026")]
	[Address(RVA = "0x42E55C0", Offset = "0x42E55C0", VA = "0x42E55C0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004027")]
	[Address(RVA = "0x42E4C80", Offset = "0x42E4C80", VA = "0x42E4C80")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004028")]
	[Address(RVA = "0x42E57F0", Offset = "0x42E57F0", VA = "0x42E57F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004029")]
	[Address(RVA = "0x42E58B0", Offset = "0x42E58B0", VA = "0x42E58B0")]
	public ScoreboardPopup()
	{
	}
}
