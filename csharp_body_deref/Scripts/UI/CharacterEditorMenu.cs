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

[Token(Token = "0x2000715")]
internal class CharacterEditorMenu : BaseMenu
{
	[Token(Token = "0x4002377")]
	[FieldOffset(Offset = "0x98")]
	public CharacterEditorGameManager _gameManager;

	[Token(Token = "0x6004589")]
	[Address(RVA = "0x21DA6D0", Offset = "0x21D8CD0", VA = "0x1821DA6D0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x600458A")]
	[Address(RVA = "0x21DA690", Offset = "0x21D8C90", VA = "0x1821DA690", Slot = "7")]
	public virtual bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600458B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x600458C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public virtual void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x600458D")]
	[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "10")]
	public virtual float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x600458E")]
	[Address(RVA = "0x21DA670", Offset = "0x21D8C70", VA = "0x1821DA670", Slot = "11")]
	public virtual float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x600458F")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public CharacterEditorMenu()
	{
	}
}
