// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameBackgroundMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InGameBackgroundMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameBackgroundMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000840")]
internal class InGameBackgroundMenu : BaseMenu
{
	[Token(Token = "0x4002963")]
	[FieldOffset(Offset = "0x98")]
	private BloodBackgroundPanel _bloodBackgroundPanel;

	[Token(Token = "0x6004EB8")]
	[Address(RVA = "0x5C281B0", Offset = "0x5C271B0", VA = "0x5C281B0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004EB9")]
	[Address(RVA = "0x5C28210", Offset = "0x5C27210", VA = "0x5C28210")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x6004EBA")]
	[Address(RVA = "0x5C28240", Offset = "0x5C27240", VA = "0x5C28240")]
	public void HideBlood()
	{
	}

	[Token(Token = "0x6004EBB")]
	[Address(RVA = "0x5C28270", Offset = "0x5C27270", VA = "0x5C28270")]
	public InGameBackgroundMenu()
	{
	}
}
