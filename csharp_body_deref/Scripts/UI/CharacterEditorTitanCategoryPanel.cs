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

[Token(Token = "0x20005A9")]
internal class CharacterEditorTitanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4001BD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _emote;

	[Token(Token = "0x17000B3B")]
	protected override float Height
	{
		[Token(Token = "0x6003A9C")]
		[Address(RVA = "0x4265C60", Offset = "0x4265C60", VA = "0x4265C60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003A9D")]
	[Address(RVA = "0x4265C70", Offset = "0x4265C70", VA = "0x4265C70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003A9E")]
	[Address(RVA = "0x4265F20", Offset = "0x4265F20", VA = "0x4265F20")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x6003A9F")]
	[Address(RVA = "0x4265F80", Offset = "0x4265F80", VA = "0x4265F80")]
	public CharacterEditorTitanCategoryPanel()
	{
	}
}
