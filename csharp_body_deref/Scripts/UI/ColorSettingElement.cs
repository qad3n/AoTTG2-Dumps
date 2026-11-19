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

[Token(Token = "0x20007EB")]
internal class ColorSettingElement : BaseSettingElement
{
	[Token(Token = "0x400277F")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4002780")]
	[FieldOffset(Offset = "0x40")]
	private ColorPickPopup _colorPickPopup;

	[Token(Token = "0x4002781")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x17000D45")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C1F")]
		[Address(RVA = "0x5BEDD80", Offset = "0x5BECD80", VA = "0x5BEDD80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C20")]
	[Address(RVA = "0x5BEDE00", Offset = "0x5BECE00", VA = "0x5BEDE00")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, ColorPickPopup colorPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x6004C21")]
	[Address(RVA = "0x5BEE150", Offset = "0x5BED150", VA = "0x5BEE150")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6004C22")]
	[Address(RVA = "0x5BEE1D0", Offset = "0x5BED1D0", VA = "0x5BEE1D0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C23")]
	[Address(RVA = "0x5BEE270", Offset = "0x5BED270", VA = "0x5BEE270")]
	public ColorSettingElement()
	{
	}
}
