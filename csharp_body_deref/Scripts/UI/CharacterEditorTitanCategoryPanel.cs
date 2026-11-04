// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200071C")]
internal class CharacterEditorTitanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4002395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _emote;

	[Token(Token = "0x17000C93")]
	protected override float Height
	{
		[Token(Token = "0x60045CD")]
		[Address(RVA = "0x21DDA70", Offset = "0x21DC070", VA = "0x1821DDA70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60045CE")]
	[Address(RVA = "0x21DD6C0", Offset = "0x21DBCC0", VA = "0x1821DD6C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60045CF")]
	[Address(RVA = "0x21DD660", Offset = "0x21DBC60", VA = "0x1821DD660")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x60045D0")]
	[Address(RVA = "0x21DD990", Offset = "0x21DBF90", VA = "0x1821DD990")]
	public CharacterEditorTitanCategoryPanel()
	{
	}
}
