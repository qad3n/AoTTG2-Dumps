// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x6004AB6")]
	[Address(RVA = "0x5BD51F0", Offset = "0x5BD41F0", VA = "0x5BD51F0", Slot = "8")]
	public virtual bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004AB7")]
	[Address(RVA = "0x5BD5BE0", Offset = "0x5BD4BE0", VA = "0x5BD5BE0", Slot = "9")]
	public virtual void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6004AB8")]
	[Address(RVA = "0x5BD5BF0", Offset = "0x5BD4BF0", VA = "0x5BD5BF0", Slot = "10")]
	public virtual void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6004AB9")]
	[Address(RVA = "0x5BD5C00", Offset = "0x5BD4C00", VA = "0x5BD5C00", Slot = "11")]
	public virtual float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004ABA")]
	[Address(RVA = "0x5BD5C10", Offset = "0x5BD4C10", VA = "0x5BD5C10", Slot = "12")]
	public virtual float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004ABB")]
	[Address(RVA = "0x5BD5BD0", Offset = "0x5BD4BD0", VA = "0x5BD5BD0")]
	public CharacterEditorMenu()
	{
	}
}
