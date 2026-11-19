// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorHumanCategoryPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorHumanCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007BC")]
internal class CharacterEditorHumanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x40026EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private CharacterEditorHumanMenu _menu;

	[Token(Token = "0x40026EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _emote;

	[Token(Token = "0x17000D02")]
	protected override string Title
	{
		[Token(Token = "0x6004AA1")]
		[Address(RVA = "0x5BD4260", Offset = "0x5BD3260", VA = "0x5BD4260", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D03")]
	protected override float Height
	{
		[Token(Token = "0x6004AA2")]
		[Address(RVA = "0x5BD42C0", Offset = "0x5BD32C0", VA = "0x5BD42C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004AA3")]
	[Address(RVA = "0x5BD42D0", Offset = "0x5BD32D0", VA = "0x5BD42D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004AA4")]
	[Address(RVA = "0x5BD4B90", Offset = "0x5BD3B90", VA = "0x5BD4B90")]
	private void OnWeaponChanged()
	{
	}

	[Token(Token = "0x6004AA5")]
	[Address(RVA = "0x5BD4CB0", Offset = "0x5BD3CB0", VA = "0x5BD4CB0")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x6004AA6")]
	[Address(RVA = "0x5BD4D10", Offset = "0x5BD3D10", VA = "0x5BD4D10")]
	public CharacterEditorHumanCategoryPanel()
	{
	}
}
