using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200055B")]
internal class CharacterEditorHumanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4001A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private CharacterEditorHumanMenu _menu;

	[Token(Token = "0x4001A9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _emote;

	[Token(Token = "0x17000ABB")]
	protected override string Title
	{
		[Token(Token = "0x6003838")]
		[Address(RVA = "0x3F52D90", Offset = "0x3F52D90", VA = "0x3F52D90", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ABC")]
	protected override float Height
	{
		[Token(Token = "0x6003839")]
		[Address(RVA = "0x3F52DF0", Offset = "0x3F52DF0", VA = "0x3F52DF0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600383A")]
	[Address(RVA = "0x3F52E00", Offset = "0x3F52E00", VA = "0x3F52E00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600383B")]
	[Address(RVA = "0x3F53430", Offset = "0x3F53430", VA = "0x3F53430")]
	private void OnWeaponChanged()
	{
	}

	[Token(Token = "0x600383C")]
	[Address(RVA = "0x3F53550", Offset = "0x3F53550", VA = "0x3F53550")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x600383D")]
	[Address(RVA = "0x3F535B0", Offset = "0x3F535B0", VA = "0x3F535B0")]
	public CharacterEditorHumanCategoryPanel()
	{
	}
}
