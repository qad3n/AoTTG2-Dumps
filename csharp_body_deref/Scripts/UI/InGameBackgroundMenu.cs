// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameBackgroundMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InGameBackgroundMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameBackgroundMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000795")]
internal class InGameBackgroundMenu : BaseMenu
{
	[Token(Token = "0x40025F0")]
	[FieldOffset(Offset = "0x98")]
	private BloodBackgroundPanel _bloodBackgroundPanel;

	[Token(Token = "0x6004991")]
	[Address(RVA = "0x224B970", Offset = "0x2249F70", VA = "0x18224B970", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004992")]
	[Address(RVA = "0x224B9D0", Offset = "0x2249FD0", VA = "0x18224B9D0")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x6004993")]
	[Address(RVA = "0x224B940", Offset = "0x2249F40", VA = "0x18224B940")]
	public void HideBlood()
	{
	}

	[Token(Token = "0x6004994")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public InGameBackgroundMenu()
	{
	}
}
