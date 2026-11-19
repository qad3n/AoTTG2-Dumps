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

[Token(Token = "0x20007C6")]
internal class CharacterEditorTitanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4002715")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _emote;

	[Token(Token = "0x17000D18")]
	protected override float Height
	{
		[Token(Token = "0x6004AFA")]
		[Address(RVA = "0x5BD9D00", Offset = "0x5BD8D00", VA = "0x5BD9D00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004AFB")]
	[Address(RVA = "0x5BD9D10", Offset = "0x5BD8D10", VA = "0x5BD9D10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004AFC")]
	[Address(RVA = "0x5BD9FD0", Offset = "0x5BD8FD0", VA = "0x5BD9FD0")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x6004AFD")]
	[Address(RVA = "0x5BDA030", Offset = "0x5BD9030", VA = "0x5BDA030")]
	public CharacterEditorTitanCategoryPanel()
	{
	}
}
