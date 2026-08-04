// ==================== AoTTG2 cross-reference ====================
// Type: UI.KeybindSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KeybindSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/KeybindSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005F9")]
internal class KeybindSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CB2")]
	[FieldOffset(Offset = "0x38")]
	private List<Text> _buttonLabels;

	[Token(Token = "0x4001CB3")]
	[FieldOffset(Offset = "0x40")]
	private KeybindPopup _keybindPopup;

	[Token(Token = "0x17000B86")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C95")]
		[Address(RVA = "0x4293C90", Offset = "0x4293C90", VA = "0x4293C90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C96")]
	[Address(RVA = "0x4293D10", Offset = "0x4293D10", VA = "0x4293D10")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, KeybindPopup keybindPopup, string tooltip, float elementWidth, float elementHeight, int bindCount)
	{
	}

	[Token(Token = "0x6003C97")]
	[Address(RVA = "0x4293DB0", Offset = "0x4293DB0", VA = "0x4293DB0")]
	private void CreateKeybindButton(int index, ElementStyle style, float width, float height)
	{
	}

	[Token(Token = "0x6003C98")]
	[Address(RVA = "0x42942A0", Offset = "0x42942A0", VA = "0x42942A0")]
	protected void OnButtonClicked(int index)
	{
	}

	[Token(Token = "0x6003C99")]
	[Address(RVA = "0x4294380", Offset = "0x4294380", VA = "0x4294380", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C9A")]
	[Address(RVA = "0x42944C0", Offset = "0x42944C0", VA = "0x42944C0")]
	public KeybindSettingElement()
	{
	}
}
