// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ColorSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ColorSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005ED")]
internal class ColorSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001C81")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4001C82")]
	[FieldOffset(Offset = "0x40")]
	private ColorPickPopup _colorPickPopup;

	[Token(Token = "0x4001C83")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x17000B7D")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C47")]
		[Address(RVA = "0x428EED0", Offset = "0x428EED0", VA = "0x428EED0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C48")]
	[Address(RVA = "0x428C1C0", Offset = "0x428C1C0", VA = "0x428C1C0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, ColorPickPopup colorPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x6003C49")]
	[Address(RVA = "0x428EF50", Offset = "0x428EF50", VA = "0x428EF50")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6003C4A")]
	[Address(RVA = "0x428EFD0", Offset = "0x428EFD0", VA = "0x428EFD0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C4B")]
	[Address(RVA = "0x428F070", Offset = "0x428F070", VA = "0x428F070")]
	public ColorSettingElement()
	{
	}
}
