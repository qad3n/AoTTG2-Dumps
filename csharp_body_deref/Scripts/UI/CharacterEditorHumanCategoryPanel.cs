// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorHumanCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorHumanCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000713")]
internal class CharacterEditorHumanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x400236C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private CharacterEditorHumanMenu _menu;

	[Token(Token = "0x400236D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _emote;

	[Token(Token = "0x17000C7D")]
	protected override string Title
	{
		[Token(Token = "0x6004578")]
		[Address(RVA = "0x21D9B70", Offset = "0x21D8170", VA = "0x1821D9B70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C7E")]
	protected override float Height
	{
		[Token(Token = "0x6004579")]
		[Address(RVA = "0x21D9B60", Offset = "0x21D8160", VA = "0x1821D9B60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600457A")]
	[Address(RVA = "0x21D9400", Offset = "0x21D7A00", VA = "0x1821D9400", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600457B")]
	[Address(RVA = "0x21D92B0", Offset = "0x21D78B0", VA = "0x1821D92B0")]
	private void OnWeaponChanged()
	{
	}

	[Token(Token = "0x600457C")]
	[Address(RVA = "0x21D9250", Offset = "0x21D7850", VA = "0x1821D9250")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x600457D")]
	[Address(RVA = "0x21D9A80", Offset = "0x21D8080", VA = "0x1821D9A80")]
	public CharacterEditorHumanCategoryPanel()
	{
	}
}
