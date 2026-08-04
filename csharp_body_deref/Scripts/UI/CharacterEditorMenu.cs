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

[Token(Token = "0x20005A2")]
internal class CharacterEditorMenu : BaseMenu
{
	[Token(Token = "0x4001BBA")]
	[FieldOffset(Offset = "0x98")]
	public CharacterEditorGameManager _gameManager;

	[Token(Token = "0x6003A58")]
	[Address(RVA = "0x4261540", Offset = "0x4261540", VA = "0x4261540", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003A59")]
	[Address(RVA = "0x4261800", Offset = "0x4261800", VA = "0x4261800", Slot = "7")]
	public virtual bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A5A")]
	[Address(RVA = "0x4262070", Offset = "0x4262070", VA = "0x4262070", Slot = "8")]
	public virtual void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6003A5B")]
	[Address(RVA = "0x4262080", Offset = "0x4262080", VA = "0x4262080", Slot = "9")]
	public virtual void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6003A5C")]
	[Address(RVA = "0x4262090", Offset = "0x4262090", VA = "0x4262090", Slot = "10")]
	public virtual float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003A5D")]
	[Address(RVA = "0x42620A0", Offset = "0x42620A0", VA = "0x42620A0", Slot = "11")]
	public virtual float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003A5E")]
	[Address(RVA = "0x4262060", Offset = "0x4262060", VA = "0x4262060")]
	public CharacterEditorMenu()
	{
	}
}
