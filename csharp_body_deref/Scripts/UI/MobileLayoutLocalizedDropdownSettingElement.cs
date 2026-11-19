// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutLocalizedDropdownSettingElement
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200077C")]
internal class MobileLayoutLocalizedDropdownSettingElement : DropdownSettingElement
{
	[Token(Token = "0x40025C3")]
	[FieldOffset(Offset = "0xA0")]
	private Func<string, string> _optionLabel;

	[Token(Token = "0x6004840")]
	[Address(RVA = "0x5BA87B0", Offset = "0x5BA77B0", VA = "0x5BA87B0")]
	public void SetupLocalized(BaseSetting setting, ElementStyle style, string title, string[] options, Func<string, string> optionLabel, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect)
	{
	}

	[Token(Token = "0x6004841")]
	[Address(RVA = "0x5BB1410", Offset = "0x5BB0410", VA = "0x5BB1410", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6004842")]
	[Address(RVA = "0x5BB15C0", Offset = "0x5BB05C0", VA = "0x5BB15C0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004843")]
	[Address(RVA = "0x5BB1270", Offset = "0x5BB0270", VA = "0x5BB1270")]
	private void RelabelOptions()
	{
	}

	[Token(Token = "0x6004844")]
	[Address(RVA = "0x5BB1590", Offset = "0x5BB0590", VA = "0x5BB1590")]
	private string GetOptionLabel(string option)
	{
		return null;
	}

	[Token(Token = "0x6004845")]
	[Address(RVA = "0x5BB1770", Offset = "0x5BB0770", VA = "0x5BB1770")]
	public MobileLayoutLocalizedDropdownSettingElement()
	{
	}
}
