// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using GameManagers;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007BF")]
internal class CharacterEditorMenu : BaseMenu
{
	[Token(Token = "0x40026F7")]
	[FieldOffset(Offset = "0x98")]
	public CharacterEditorGameManager _gameManager;

	[Token(Token = "0x6004AB5")]
	[Address(RVA = "0x5BD4F30", Offset = "0x5BD3F30", VA = "0x5BD4F30", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$Setup): 2 lines keep C-only constructs
		byte bVar1;
		CharacterEditorGameManager pGVar2;
		CharacterEditorGameManager pGVar3;

		this.Setup();
		pGVar3 = typeof(CharacterEditorGameManager);
		pGVar2 = (CharacterEditorGameManager)SceneLoader.CurrentGameManager;
		if (pGVar2 == null) {
			this._gameManager = null;
	label_05cd4fe5: ;
			this.RebuildPanels(true);
			this.ResetCharacter(false);
			return;
		}
		bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
		if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorGameManager))) {
			this._gameManager = pGVar2;
			if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pGVar3)) goto label_05cd4fe5;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004AB6")]
	[Address(RVA = "0x5BD51F0", Offset = "0x5BD41F0", VA = "0x5BD51F0", Slot = "8")]
	public virtual bool IsPopupActive()
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$IsPopupActive): clean
		SelectListPopup pUVar1;
		IconPickPopup pUVar2;

		pUVar1 = this.SelectListPopup;
		if (pUVar1 != null) {
			if (pUVar1.IsActive != false) {
				return true;
			}
			pUVar2 = this.IconPickPopup;
			if (pUVar2 != null) {
				return pUVar2.IsActive != false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AB7")]
	[Address(RVA = "0x5BD5BE0", Offset = "0x5BD4BE0", VA = "0x5BD5BE0", Slot = "9")]
	public virtual void RebuildPanels(bool costumePopup)
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$RebuildPanels): clean
		return;
	}

	[Token(Token = "0x6004AB8")]
	[Address(RVA = "0x5BD5BF0", Offset = "0x5BD4BF0", VA = "0x5BD5BF0", Slot = "10")]
	public virtual void ResetCharacter(bool fullReset = false)
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$ResetCharacter): clean
		return;
	}

	[Token(Token = "0x6004AB9")]
	[Address(RVA = "0x5BD5C00", Offset = "0x5BD4C00", VA = "0x5BD5C00", Slot = "11")]
	public virtual float GetMinMouseX()
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$GetMinMouseX): clean
		return 0.0;
	}

	[Token(Token = "0x6004ABA")]
	[Address(RVA = "0x5BD5C10", Offset = "0x5BD4C10", VA = "0x5BD5C10", Slot = "12")]
	public virtual float GetMaxMouseX()
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$GetMaxMouseX): clean
		int iVar1;

		iVar1 = Screen.width;
		return (float)iVar1;
	}

	[Token(Token = "0x6004ABB")]
	[Address(RVA = "0x5BD5BD0", Offset = "0x5BD4BD0", VA = "0x5BD5BD0")]
	public CharacterEditorMenu()
	{
		// Lifted from source/cpp/UI/CharacterEditorMenu.c (UI.CharacterEditorMenu$$.ctor): clean
		base();
		return;
	}
}
