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

[Token(Token = "0x20006E5")]
internal class ColorPickPopup : PromptPopup
{
	[Token(Token = "0x4002298")]
	private const int SVTextureSize = 192;

	[Token(Token = "0x4002299")]
	private const int AlphaTextureWidth = 192;

	[Token(Token = "0x400229A")]
	private const int HueTextureHeight = 256;

	[Token(Token = "0x400229B")]
	private const float PreviewWidth = 96f;

	[Token(Token = "0x400229C")]
	private const float PreviewHeight = 56f;

	[Token(Token = "0x400229D")]
	private const float PickerPadding = 3f;

	[Token(Token = "0x400229E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Image _image;

	[Token(Token = "0x400229F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSetting _setting;

	[Token(Token = "0x40022A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Image _preview;

	[Token(Token = "0x40022A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RectTransform _svRect;

	[Token(Token = "0x40022A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _hueRect;

	[Token(Token = "0x40022A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _alphaRect;

	[Token(Token = "0x40022A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RectTransform _svHandle;

	[Token(Token = "0x40022A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private RectTransform _hueHandle;

	[Token(Token = "0x40022A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private RectTransform _alphaHandle;

	[Token(Token = "0x40022A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private RawImage _svImage;

	[Token(Token = "0x40022A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private RawImage _hueImage;

	[Token(Token = "0x40022A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private RawImage _alphaImage;

	[Token(Token = "0x40022AA")]
	private const float PickerContainerSize = 260f;

	[Token(Token = "0x40022AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Texture2D _svTexture;

	[Token(Token = "0x40022AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x40022AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Color32[] _svPixels;

	[Token(Token = "0x40022AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color32[] _alphaPixels;

	[Token(Token = "0x40022AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Texture2D _hueTexture;

	[Token(Token = "0x40022B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _hue;

	[Token(Token = "0x40022B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private float _saturation;

	[Token(Token = "0x40022B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private float _value;

	[Token(Token = "0x40022B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private float _alphaValue;

	[Token(Token = "0x40022B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private IntSetting _red;

	[Token(Token = "0x40022B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private IntSetting _green;

	[Token(Token = "0x40022B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private IntSetting _blue;

	[Token(Token = "0x40022B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private IntSetting _alpha;

	[Token(Token = "0x40022B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private StringSetting _hex;

	[Token(Token = "0x40022B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private InputSettingElement _redInput;

	[Token(Token = "0x40022BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private InputSettingElement _greenInput;

	[Token(Token = "0x40022BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private InputSettingElement _blueInput;

	[Token(Token = "0x40022BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private InputSettingElement _alphaInput;

	[Token(Token = "0x40022BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private InputSettingElement _hexInput;

	[Token(Token = "0x40022BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x40022BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private bool _suppressInputCallbacks;

	[Token(Token = "0x40022C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool _svTextureDirty;

	[Token(Token = "0x40022C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x192")]
	private bool _alphaTextureDirty;

	[Token(Token = "0x40022C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x193")]
	private bool _hexInputActive;

	[Token(Token = "0x17000BED")]
	protected override string Title
	{
		[Token(Token = "0x60043BC")]
		[Address(RVA = "0x21C0BE0", Offset = "0x21BF1E0", VA = "0x1821C0BE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BEE")]
	protected override float Width
	{
		[Token(Token = "0x60043BD")]
		[Address(RVA = "0x21C0BD0", Offset = "0x21BF1D0", VA = "0x1821C0BD0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEF")]
	protected override float Height
	{
		[Token(Token = "0x60043BE")]
		[Address(RVA = "0x21C0BD0", Offset = "0x21BF1D0", VA = "0x1821C0BD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60043BF")]
		[Address(RVA = "0x21C0C80", Offset = "0x21BF280", VA = "0x1821C0C80", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60043C0")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60043C1")]
	[Address(RVA = "0x21BF750", Offset = "0x21BDD50", VA = "0x1821BF750", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043C2")]
	[Address(RVA = "0x21BF920", Offset = "0x21BDF20", VA = "0x1821BF920")]
	public void Show(ColorSetting setting, Image image, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x60043C3")]
	[Address(RVA = "0x21BEB80", Offset = "0x21BD180", VA = "0x1821BEB80")]
	private void SetupPickerUI()
	{
	}

	[Token(Token = "0x60043C4")]
	[Address(RVA = "0x21BE220", Offset = "0x21BC820", VA = "0x1821BE220")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60043C5")]
	[Address(RVA = "0x21BEB00", Offset = "0x21BD100", VA = "0x1821BEB00")]
	private void OnSVDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60043C6")]
	[Address(RVA = "0x21BE950", Offset = "0x21BCF50", VA = "0x1821BE950")]
	private void OnHueDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60043C7")]
	[Address(RVA = "0x21BE180", Offset = "0x21BC780", VA = "0x1821BE180")]
	private void OnAlphaDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60043C8")]
	[Address(RVA = "0x21BE980", Offset = "0x21BCF80", VA = "0x1821BE980")]
	private void OnRGBAInputChanged()
	{
	}

	[Token(Token = "0x60043C9")]
	[Address(RVA = "0x21BE660", Offset = "0x21BCC60", VA = "0x1821BE660")]
	private void OnHexInputChanged()
	{
	}

	[Token(Token = "0x60043CA")]
	[Address(RVA = "0x21BE680", Offset = "0x21BCC80", VA = "0x1821BE680")]
	private void OnHexInputEndEdit()
	{
	}

	[Token(Token = "0x60043CB")]
	[Address(RVA = "0x21BE060", Offset = "0x21BC660", VA = "0x1821BE060")]
	private bool IsHexInputValid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60043CC")]
	[Address(RVA = "0x21BCCF0", Offset = "0x21BB2F0", VA = "0x1821BCCF0")]
	private string CleanupHexInput(string value)
	{
		return null;
	}

	[Token(Token = "0x60043CD")]
	[Address(RVA = "0x21BFF30", Offset = "0x21BE530", VA = "0x1821BFF30")]
	private bool TryParseCompleteHexColor(string input, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60043CE")]
	[Address(RVA = "0x21BCC10", Offset = "0x21BB210", VA = "0x1821BCC10")]
	private void ApplyCurrentColorToUI(bool syncInputs)
	{
	}

	[Token(Token = "0x60043CF")]
	[Address(RVA = "0x21BFB00", Offset = "0x21BE100", VA = "0x1821BFB00")]
	private void SyncInputValuesFromCurrentColor()
	{
	}

	[Token(Token = "0x60043D0")]
	[Address(RVA = "0x21BEB40", Offset = "0x21BD140", VA = "0x1821BEB40")]
	private new void Update()
	{
	}

	[Token(Token = "0x60043D1")]
	[Address(RVA = "0x21BE160", Offset = "0x21BC760", VA = "0x1821BE160")]
	private void MarkTextureDirty(bool svDirty, bool alphaDirty)
	{
	}

	[Token(Token = "0x60043D2")]
	[Address(RVA = "0x21BEB40", Offset = "0x21BD140", VA = "0x1821BEB40")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x60043D3")]
	[Address(RVA = "0x21BD7B0", Offset = "0x21BBDB0", VA = "0x1821BD7B0")]
	private void EnsureTextures()
	{
	}

	[Token(Token = "0x60043D4")]
	[Address(RVA = "0x21C08A0", Offset = "0x21BEEA0", VA = "0x1821C08A0")]
	private void UpdateSVTexture()
	{
	}

	[Token(Token = "0x60043D5")]
	[Address(RVA = "0x21C0140", Offset = "0x21BE740", VA = "0x1821C0140")]
	private void UpdateAlphaTexture()
	{
	}

	[Token(Token = "0x60043D6")]
	[Address(RVA = "0x21C04B0", Offset = "0x21BEAB0", VA = "0x1821C04B0")]
	private void UpdatePickerHandles()
	{
	}

	[Token(Token = "0x60043D7")]
	[Address(RVA = "0x21BDED0", Offset = "0x21BC4D0", VA = "0x1821BDED0")]
	private Color GetCurrentColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60043D8")]
	[Address(RVA = "0x21BDFA0", Offset = "0x21BC5A0", VA = "0x1821BDFA0")]
	private string GetHexString(Color color)
	{
		return null;
	}

	[Token(Token = "0x60043D9")]
	[Address(RVA = "0x21BE000", Offset = "0x21BC600", VA = "0x1821BE000")]
	private float GetMinAlpha01()
	{
		return default(float);
	}

	[Token(Token = "0x60043DA")]
	[Address(RVA = "0x21BDDA0", Offset = "0x21BC3A0", VA = "0x1821BDDA0")]
	private Color255 GetCurrentColor255()
	{
		return null;
	}

	[Token(Token = "0x60043DB")]
	[Address(RVA = "0x21BD150", Offset = "0x21BB750", VA = "0x1821BD150")]
	private GameObject CreateTextureContainer(Transform parent, string name, float width, float height, out RectTransform textureRect)
	{
		return null;
	}

	[Token(Token = "0x60043DC")]
	[Address(RVA = "0x21BD6C0", Offset = "0x21BBCC0", VA = "0x1821BD6C0")]
	private RawImage CreateTextureSurface(Transform container, string name, out RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x60043DD")]
	[Address(RVA = "0x21BCDF0", Offset = "0x21BB3F0", VA = "0x1821BCDF0")]
	private RectTransform CreateHandle(RectTransform parent, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x60043DE")]
	[Address(RVA = "0x21BE4E0", Offset = "0x21BCAE0", VA = "0x1821BE4E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60043DF")]
	[Address(RVA = "0x21C0A30", Offset = "0x21BF030", VA = "0x1821C0A30")]
	public ColorPickPopup()
	{
	}
}
