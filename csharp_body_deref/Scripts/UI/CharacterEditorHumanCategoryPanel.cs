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

[Token(Token = "0x20005A0")]
internal class CharacterEditorHumanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4001BAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private CharacterEditorHumanMenu _menu;

	[Token(Token = "0x4001BB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _emote;

	[Token(Token = "0x17000B25")]
	protected override string Title
	{
		[Token(Token = "0x6003A47")]
		[Address(RVA = "0x4260C10", Offset = "0x4260C10", VA = "0x4260C10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B26")]
	protected override float Height
	{
		[Token(Token = "0x6003A48")]
		[Address(RVA = "0x4260C70", Offset = "0x4260C70", VA = "0x4260C70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003A49")]
	[Address(RVA = "0x4260C80", Offset = "0x4260C80", VA = "0x4260C80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003A4A")]
	[Address(RVA = "0x42612B0", Offset = "0x42612B0", VA = "0x42612B0")]
	private void OnWeaponChanged()
	{
	}

	[Token(Token = "0x6003A4B")]
	[Address(RVA = "0x42613D0", Offset = "0x42613D0", VA = "0x42613D0")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x6003A4C")]
	[Address(RVA = "0x4261430", Offset = "0x4261430", VA = "0x4261430")]
	public CharacterEditorHumanCategoryPanel()
	{
	}
}
