// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameBackgroundMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InGameBackgroundMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameBackgroundMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/UI/InGameBackgroundMenu.c (UI.InGameBackgroundMenu$$Setup): clean
		Transform parent;
		BloodBackgroundPanel pUVar1;

		parent = this.transform;
		pUVar1 = ElementFactory.CreateDefaultPopup<BloodBackgroundPanel>(parent, false);
		this._bloodBackgroundPanel = pUVar1;
		return;
	}

	[Token(Token = "0x6004EB9")]
	[Address(RVA = "0x5C28210", Offset = "0x5C27210", VA = "0x5C28210")]
	public void ShowBlood()
	{
		// Lifted from source/cpp/UI/InGameBackgroundMenu.c (UI.InGameBackgroundMenu$$ShowBlood): clean
		BloodBackgroundPanel pUVar1;

		pUVar1 = this._bloodBackgroundPanel;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Show();
		return;
	}

	[Token(Token = "0x6004EBA")]
	[Address(RVA = "0x5C28240", Offset = "0x5C27240", VA = "0x5C28240")]
	public void HideBlood()
	{
		// Lifted from source/cpp/UI/InGameBackgroundMenu.c (UI.InGameBackgroundMenu$$HideBlood): clean
		BloodBackgroundPanel pUVar1;

		pUVar1 = this._bloodBackgroundPanel;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Hide();
		return;
	}

	[Token(Token = "0x6004EBB")]
	[Address(RVA = "0x5C28270", Offset = "0x5C27270", VA = "0x5C28270")]
	public InGameBackgroundMenu()
	{
		// Lifted from source/cpp/UI/InGameBackgroundMenu.c (UI.InGameBackgroundMenu$$.ctor): clean
		base();
		return;
	}
}
