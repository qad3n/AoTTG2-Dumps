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

[Token(Token = "0x20007F7")]
internal class KeybindSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027B4")]
	[FieldOffset(Offset = "0x38")]
	private List<Text> _buttonLabels;

	[Token(Token = "0x40027B5")]
	[FieldOffset(Offset = "0x40")]
	private KeybindPopup _keybindPopup;

	[Token(Token = "0x17000D4E")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C6F")]
		[Address(RVA = "0x5BF31E0", Offset = "0x5BF21E0", VA = "0x5BF31E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C70")]
	[Address(RVA = "0x5BF3260", Offset = "0x5BF2260", VA = "0x5BF3260")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, KeybindPopup keybindPopup, string tooltip, float elementWidth, float elementHeight, int bindCount)
	{
	}

	[Token(Token = "0x6004C71")]
	[Address(RVA = "0x5BF3300", Offset = "0x5BF2300", VA = "0x5BF3300")]
	private void CreateKeybindButton(int index, ElementStyle style, float width, float height)
	{
	}

	[Token(Token = "0x6004C72")]
	[Address(RVA = "0x5BF37C0", Offset = "0x5BF27C0", VA = "0x5BF37C0")]
	protected void OnButtonClicked(int index)
	{
	}

	[Token(Token = "0x6004C73")]
	[Address(RVA = "0x5BF38A0", Offset = "0x5BF28A0", VA = "0x5BF38A0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C74")]
	[Address(RVA = "0x5BF39E0", Offset = "0x5BF29E0", VA = "0x5BF39E0")]
	public KeybindSettingElement()
	{
	}
}
