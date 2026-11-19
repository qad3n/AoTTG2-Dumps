// ==================== AoTTG2 cross-reference ====================
// Type: UI.LeaderboardDefaultPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/LeaderboardDefaultPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200087E")]
internal class LeaderboardDefaultPanel : CategoryPanel
{
	[Token(Token = "0x17000E23")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60050F4")]
		[Address(RVA = "0x5C56BE0", Offset = "0x5C55BE0", VA = "0x5C56BE0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardDefaultPanel.c (UI.LeaderboardDefaultPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000E24")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60050F5")]
		[Address(RVA = "0x5C56BF0", Offset = "0x5C55BF0", VA = "0x5C56BF0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardDefaultPanel.c (UI.LeaderboardDefaultPanel$$get_VerticalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x17000E25")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60050F6")]
		[Address(RVA = "0x5C56C00", Offset = "0x5C55C00", VA = "0x5C56C00", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardDefaultPanel.c (UI.LeaderboardDefaultPanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000E26")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60050F7")]
		[Address(RVA = "0x5C56C10", Offset = "0x5C55C10", VA = "0x5C56C10", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardDefaultPanel.c (UI.LeaderboardDefaultPanel$$get_ThemePanel): clean
			return "LeaderboardPopup";
		}
	}

	[Token(Token = "0x60050F8")]
	[Address(RVA = "0x5C56C40", Offset = "0x5C55C40", VA = "0x5C56C40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/LeaderboardDefaultPanel.c (UI.LeaderboardDefaultPanel$$Setup): clean
		Transform parent_00;
		String pSVar1;
		ElementStyle __this_00;

		this.Setup(parent);
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar1);
		parent_00 = this.SinglePanel;
		pSVar1 = UIManager.GetLocale("MainMenu", "LeaderboardPopup", "NotAvailable", "", "");
		ElementFactory.CreateDefaultLabel(parent_00, __this_00, pSVar1, 0, 4);
		return;
	}

	[Token(Token = "0x60050F9")]
	[Address(RVA = "0x5C56D70", Offset = "0x5C55D70", VA = "0x5C56D70")]
	public LeaderboardDefaultPanel()
	{
		// Lifted from source/cpp/UI/LeaderboardDefaultPanel.c (UI.LeaderboardDefaultPanel$$.ctor): clean
		base();
		return;
	}
}
