// ==================== AoTTG2 cross-reference ====================
// Type: UI.LeaderboardDefaultPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/LeaderboardDefaultPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return default(bool);
		}
	}

	[Token(Token = "0x17000E24")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60050F5")]
		[Address(RVA = "0x5C56BF0", Offset = "0x5C55BF0", VA = "0x5C56BF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E25")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60050F6")]
		[Address(RVA = "0x5C56C00", Offset = "0x5C55C00", VA = "0x5C56C00", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E26")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60050F7")]
		[Address(RVA = "0x5C56C10", Offset = "0x5C55C10", VA = "0x5C56C10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60050F8")]
	[Address(RVA = "0x5C56C40", Offset = "0x5C55C40", VA = "0x5C56C40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050F9")]
	[Address(RVA = "0x5C56D70", Offset = "0x5C55D70", VA = "0x5C56D70")]
	public LeaderboardDefaultPanel()
	{
	}
}
