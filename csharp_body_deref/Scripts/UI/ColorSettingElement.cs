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

[Token(Token = "0x2000743")]
internal class ColorSettingElement : BaseSettingElement
{
	[Token(Token = "0x400240F")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4002410")]
	[FieldOffset(Offset = "0x40")]
	private ColorPickPopup _colorPickPopup;

	[Token(Token = "0x4002411")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x17000CC2")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x60046FF")]
		[Address(RVA = "0x22037E0", Offset = "0x2201DE0", VA = "0x1822037E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004700")]
	[Address(RVA = "0x22033B0", Offset = "0x22019B0", VA = "0x1822033B0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, ColorPickPopup colorPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x6004701")]
	[Address(RVA = "0x2203310", Offset = "0x2201910", VA = "0x182203310")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6004702")]
	[Address(RVA = "0x2203720", Offset = "0x2201D20", VA = "0x182203720", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004703")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ColorSettingElement()
	{
	}
}
