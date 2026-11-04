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

[Token(Token = "0x200074F")]
internal class KeybindSettingElement : BaseSettingElement
{
	[Token(Token = "0x4002443")]
	[FieldOffset(Offset = "0x38")]
	private List<Text> _buttonLabels;

	[Token(Token = "0x4002444")]
	[FieldOffset(Offset = "0x40")]
	private KeybindPopup _keybindPopup;

	[Token(Token = "0x17000CCB")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x600474D")]
		[Address(RVA = "0x2214670", Offset = "0x2212C70", VA = "0x182214670", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600474E")]
	[Address(RVA = "0x22143D0", Offset = "0x22129D0", VA = "0x1822143D0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, KeybindPopup keybindPopup, string tooltip, float elementWidth, float elementHeight, int bindCount)
	{
	}

	[Token(Token = "0x600474F")]
	[Address(RVA = "0x2213E20", Offset = "0x2212420", VA = "0x182213E20")]
	private void CreateKeybindButton(int index, ElementStyle style, float width, float height)
	{
	}

	[Token(Token = "0x6004750")]
	[Address(RVA = "0x22142D0", Offset = "0x22128D0", VA = "0x1822142D0")]
	protected void OnButtonClicked(int index)
	{
	}

	[Token(Token = "0x6004751")]
	[Address(RVA = "0x22144A0", Offset = "0x2212AA0", VA = "0x1822144A0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004752")]
	[Address(RVA = "0x22145F0", Offset = "0x2212BF0", VA = "0x1822145F0")]
	public KeybindSettingElement()
	{
	}
}
