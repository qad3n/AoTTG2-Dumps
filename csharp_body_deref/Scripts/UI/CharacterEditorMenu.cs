using GameManagers;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200055D")]
internal class CharacterEditorMenu : BaseMenu
{
	[Token(Token = "0x4001AA7")]
	[FieldOffset(Offset = "0x98")]
	public CharacterEditorGameManager _gameManager;

	[Token(Token = "0x6003849")]
	[Address(RVA = "0x3F536C0", Offset = "0x3F536C0", VA = "0x3F536C0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x600384A")]
	[Address(RVA = "0x3F53980", Offset = "0x3F53980", VA = "0x3F53980", Slot = "7")]
	public virtual bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600384B")]
	[Address(RVA = "0x3F541F0", Offset = "0x3F541F0", VA = "0x3F541F0", Slot = "8")]
	public virtual void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x600384C")]
	[Address(RVA = "0x3F54200", Offset = "0x3F54200", VA = "0x3F54200", Slot = "9")]
	public virtual void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x600384D")]
	[Address(RVA = "0x3F54210", Offset = "0x3F54210", VA = "0x3F54210", Slot = "10")]
	public virtual float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x600384E")]
	[Address(RVA = "0x3F54220", Offset = "0x3F54220", VA = "0x3F54220", Slot = "11")]
	public virtual float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x600384F")]
	[Address(RVA = "0x3F541E0", Offset = "0x3F541E0", VA = "0x3F541E0")]
	public CharacterEditorMenu()
	{
	}
}
