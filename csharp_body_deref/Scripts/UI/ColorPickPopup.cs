// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorPickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ColorPickPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ColorPickPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Utility;

namespace UI;

[Token(Token = "0x2000573")]
internal class ColorPickPopup : PromptPopup
{
	[Token(Token = "0x4001AE3")]
	private const int SVTextureSize = 192;

	[Token(Token = "0x4001AE4")]
	private const int AlphaTextureWidth = 192;

	[Token(Token = "0x4001AE5")]
	private const int HueTextureHeight = 256;

	[Token(Token = "0x4001AE6")]
	private const float PreviewWidth = 96f;

	[Token(Token = "0x4001AE7")]
	private const float PreviewHeight = 56f;

	[Token(Token = "0x4001AE8")]
	private const float PickerPadding = 3f;

	[Token(Token = "0x4001AE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Image _image;

	[Token(Token = "0x4001AEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSetting _setting;

	[Token(Token = "0x4001AEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Image _preview;

	[Token(Token = "0x4001AEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RectTransform _svRect;

	[Token(Token = "0x4001AED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _hueRect;

	[Token(Token = "0x4001AEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _alphaRect;

	[Token(Token = "0x4001AEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RectTransform _svHandle;

	[Token(Token = "0x4001AF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private RectTransform _hueHandle;

	[Token(Token = "0x4001AF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private RectTransform _alphaHandle;

	[Token(Token = "0x4001AF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private RawImage _svImage;

	[Token(Token = "0x4001AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private RawImage _hueImage;

	[Token(Token = "0x4001AF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private RawImage _alphaImage;

	[Token(Token = "0x4001AF5")]
	private const float PickerContainerSize = 260f;

	[Token(Token = "0x4001AF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Texture2D _svTexture;

	[Token(Token = "0x4001AF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x4001AF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Color32[] _svPixels;

	[Token(Token = "0x4001AF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color32[] _alphaPixels;

	[Token(Token = "0x4001AFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Texture2D _hueTexture;

	[Token(Token = "0x4001AFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _hue;

	[Token(Token = "0x4001AFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private float _saturation;

	[Token(Token = "0x4001AFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private float _value;

	[Token(Token = "0x4001AFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private float _alphaValue;

	[Token(Token = "0x4001AFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private IntSetting _red;

	[Token(Token = "0x4001B00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private IntSetting _green;

	[Token(Token = "0x4001B01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private IntSetting _blue;

	[Token(Token = "0x4001B02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private IntSetting _alpha;

	[Token(Token = "0x4001B03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private StringSetting _hex;

	[Token(Token = "0x4001B04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private InputSettingElement _redInput;

	[Token(Token = "0x4001B05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private InputSettingElement _greenInput;

	[Token(Token = "0x4001B06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private InputSettingElement _blueInput;

	[Token(Token = "0x4001B07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private InputSettingElement _alphaInput;

	[Token(Token = "0x4001B08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private InputSettingElement _hexInput;

	[Token(Token = "0x4001B09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x4001B0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private bool _suppressInputCallbacks;

	[Token(Token = "0x4001B0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool _svTextureDirty;

	[Token(Token = "0x4001B0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x192")]
	private bool _alphaTextureDirty;

	[Token(Token = "0x4001B0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x193")]
	private bool _hexInputActive;

	[Token(Token = "0x17000A98")]
	protected override string Title
	{
		[Token(Token = "0x6003896")]
		[Address(RVA = "0x4246BA0", Offset = "0x4246BA0", VA = "0x4246BA0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A99")]
	protected override float Width
	{
		[Token(Token = "0x6003897")]
		[Address(RVA = "0x4246C40", Offset = "0x4246C40", VA = "0x4246C40", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9A")]
	protected override float Height
	{
		[Token(Token = "0x6003898")]
		[Address(RVA = "0x4246C50", Offset = "0x4246C50", VA = "0x4246C50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9B")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003899")]
		[Address(RVA = "0x4246C60", Offset = "0x4246C60", VA = "0x4246C60", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9C")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600389A")]
		[Address(RVA = "0x4246C70", Offset = "0x4246C70", VA = "0x4246C70", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600389B")]
	[Address(RVA = "0x4246C80", Offset = "0x4246C80", VA = "0x4246C80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600389C")]
	[Address(RVA = "0x4247F50", Offset = "0x4247F50", VA = "0x4247F50")]
	public void Show(ColorSetting setting, Image image, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x600389D")]
	[Address(RVA = "0x4246F60", Offset = "0x4246F60", VA = "0x4246F60")]
	private void SetupPickerUI()
	{
	}

	[Token(Token = "0x600389E")]
	[Address(RVA = "0x4248BB0", Offset = "0x4248BB0", VA = "0x4248BB0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600389F")]
	[Address(RVA = "0x42492D0", Offset = "0x42492D0", VA = "0x42492D0")]
	private void OnSVDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60038A0")]
	[Address(RVA = "0x4249300", Offset = "0x4249300", VA = "0x4249300")]
	private void OnHueDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60038A1")]
	[Address(RVA = "0x4249330", Offset = "0x4249330", VA = "0x4249330")]
	private void OnAlphaDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60038A2")]
	[Address(RVA = "0x4249400", Offset = "0x4249400", VA = "0x4249400")]
	private void OnRGBAInputChanged()
	{
	}

	[Token(Token = "0x60038A3")]
	[Address(RVA = "0x4249540", Offset = "0x4249540", VA = "0x4249540")]
	private void OnHexInputChanged()
	{
	}

	[Token(Token = "0x60038A4")]
	[Address(RVA = "0x4249560", Offset = "0x4249560", VA = "0x4249560")]
	private void OnHexInputEndEdit()
	{
	}

	[Token(Token = "0x60038A5")]
	[Address(RVA = "0x424A010", Offset = "0x424A010", VA = "0x424A010")]
	private bool IsHexInputValid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60038A6")]
	[Address(RVA = "0x424A110", Offset = "0x424A110", VA = "0x424A110")]
	private string CleanupHexInput(string value)
	{
		return null;
	}

	[Token(Token = "0x60038A7")]
	[Address(RVA = "0x4249700", Offset = "0x4249700", VA = "0x4249700")]
	private bool TryParseCompleteHexColor(string input, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60038A8")]
	[Address(RVA = "0x4248100", Offset = "0x4248100", VA = "0x4248100")]
	private void ApplyCurrentColorToUI(bool syncInputs)
	{
	}

	[Token(Token = "0x60038A9")]
	[Address(RVA = "0x42497A0", Offset = "0x42497A0", VA = "0x42497A0")]
	private void SyncInputValuesFromCurrentColor()
	{
	}

	[Token(Token = "0x60038AA")]
	[Address(RVA = "0x424A600", Offset = "0x424A600", VA = "0x424A600")]
	private new void Update()
	{
	}

	[Token(Token = "0x60038AB")]
	[Address(RVA = "0x42480F0", Offset = "0x42480F0", VA = "0x42480F0")]
	private void MarkTextureDirty(bool svDirty, bool alphaDirty)
	{
	}

	[Token(Token = "0x60038AC")]
	[Address(RVA = "0x4248240", Offset = "0x4248240", VA = "0x4248240")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x60038AD")]
	[Address(RVA = "0x4247AA0", Offset = "0x4247AA0", VA = "0x4247AA0")]
	private void EnsureTextures()
	{
	}

	[Token(Token = "0x60038AE")]
	[Address(RVA = "0x424A640", Offset = "0x424A640", VA = "0x424A640")]
	private void UpdateSVTexture()
	{
	}

	[Token(Token = "0x60038AF")]
	[Address(RVA = "0x424A790", Offset = "0x424A790", VA = "0x424A790")]
	private void UpdateAlphaTexture()
	{
	}

	[Token(Token = "0x60038B0")]
	[Address(RVA = "0x424A210", Offset = "0x424A210", VA = "0x424A210")]
	private void UpdatePickerHandles()
	{
	}

	[Token(Token = "0x60038B1")]
	[Address(RVA = "0x424A510", Offset = "0x424A510", VA = "0x424A510")]
	private Color GetCurrentColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60038B2")]
	[Address(RVA = "0x424A5A0", Offset = "0x424A5A0", VA = "0x424A5A0")]
	private string GetHexString(Color color)
	{
		return null;
	}

	[Token(Token = "0x60038B3")]
	[Address(RVA = "0x42493B0", Offset = "0x42493B0", VA = "0x42493B0")]
	private float GetMinAlpha01()
	{
		return default(float);
	}

	[Token(Token = "0x60038B4")]
	[Address(RVA = "0x4248CE0", Offset = "0x4248CE0", VA = "0x4248CE0")]
	private Color255 GetCurrentColor255()
	{
		return null;
	}

	[Token(Token = "0x60038B5")]
	[Address(RVA = "0x4248280", Offset = "0x4248280", VA = "0x4248280")]
	private GameObject CreateTextureContainer(Transform parent, string name, float width, float height, out RectTransform textureRect)
	{
		return null;
	}

	[Token(Token = "0x60038B6")]
	[Address(RVA = "0x4248790", Offset = "0x4248790", VA = "0x4248790")]
	private RawImage CreateTextureSurface(Transform container, string name, out RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x60038B7")]
	[Address(RVA = "0x4248890", Offset = "0x4248890", VA = "0x4248890")]
	private RectTransform CreateHandle(RectTransform parent, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x60038B8")]
	[Address(RVA = "0x424A940", Offset = "0x424A940", VA = "0x424A940")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60038B9")]
	[Address(RVA = "0x424AAA0", Offset = "0x424AAA0", VA = "0x424AAA0")]
	public ColorPickPopup()
	{
	}
}
