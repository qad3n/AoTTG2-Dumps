using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Utility;

namespace UI;

[Token(Token = "0x200052E")]
internal class ColorPickPopup : PromptPopup
{
	[Token(Token = "0x40019D0")]
	private const int SVTextureSize = 192;

	[Token(Token = "0x40019D1")]
	private const int AlphaTextureWidth = 192;

	[Token(Token = "0x40019D2")]
	private const int HueTextureHeight = 256;

	[Token(Token = "0x40019D3")]
	private const float PreviewWidth = 96f;

	[Token(Token = "0x40019D4")]
	private const float PreviewHeight = 56f;

	[Token(Token = "0x40019D5")]
	private const float PickerPadding = 3f;

	[Token(Token = "0x40019D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Image _image;

	[Token(Token = "0x40019D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSetting _setting;

	[Token(Token = "0x40019D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Image _preview;

	[Token(Token = "0x40019D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RectTransform _svRect;

	[Token(Token = "0x40019DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _hueRect;

	[Token(Token = "0x40019DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _alphaRect;

	[Token(Token = "0x40019DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RectTransform _svHandle;

	[Token(Token = "0x40019DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private RectTransform _hueHandle;

	[Token(Token = "0x40019DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private RectTransform _alphaHandle;

	[Token(Token = "0x40019DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private RawImage _svImage;

	[Token(Token = "0x40019E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private RawImage _hueImage;

	[Token(Token = "0x40019E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private RawImage _alphaImage;

	[Token(Token = "0x40019E2")]
	private const float PickerContainerSize = 260f;

	[Token(Token = "0x40019E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Texture2D _svTexture;

	[Token(Token = "0x40019E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x40019E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Color32[] _svPixels;

	[Token(Token = "0x40019E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color32[] _alphaPixels;

	[Token(Token = "0x40019E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Texture2D _hueTexture;

	[Token(Token = "0x40019E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _hue;

	[Token(Token = "0x40019E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private float _saturation;

	[Token(Token = "0x40019EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private float _value;

	[Token(Token = "0x40019EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private float _alphaValue;

	[Token(Token = "0x40019EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private IntSetting _red;

	[Token(Token = "0x40019ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private IntSetting _green;

	[Token(Token = "0x40019EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private IntSetting _blue;

	[Token(Token = "0x40019EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private IntSetting _alpha;

	[Token(Token = "0x40019F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private StringSetting _hex;

	[Token(Token = "0x40019F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private InputSettingElement _redInput;

	[Token(Token = "0x40019F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private InputSettingElement _greenInput;

	[Token(Token = "0x40019F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private InputSettingElement _blueInput;

	[Token(Token = "0x40019F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private InputSettingElement _alphaInput;

	[Token(Token = "0x40019F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private InputSettingElement _hexInput;

	[Token(Token = "0x40019F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x40019F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private bool _suppressInputCallbacks;

	[Token(Token = "0x40019F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool _svTextureDirty;

	[Token(Token = "0x40019F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x192")]
	private bool _alphaTextureDirty;

	[Token(Token = "0x40019FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x193")]
	private bool _hexInputActive;

	[Token(Token = "0x17000A2E")]
	protected override string Title
	{
		[Token(Token = "0x6003688")]
		[Address(RVA = "0x3F1D4D0", Offset = "0x3F1D4D0", VA = "0x3F1D4D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A2F")]
	protected override float Width
	{
		[Token(Token = "0x6003689")]
		[Address(RVA = "0x3F1D570", Offset = "0x3F1D570", VA = "0x3F1D570", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A30")]
	protected override float Height
	{
		[Token(Token = "0x600368A")]
		[Address(RVA = "0x3F1D580", Offset = "0x3F1D580", VA = "0x3F1D580", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A31")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600368B")]
		[Address(RVA = "0x3F1D590", Offset = "0x3F1D590", VA = "0x3F1D590", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A32")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600368C")]
		[Address(RVA = "0x3F1D5A0", Offset = "0x3F1D5A0", VA = "0x3F1D5A0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600368D")]
	[Address(RVA = "0x3F1D5B0", Offset = "0x3F1D5B0", VA = "0x3F1D5B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600368E")]
	[Address(RVA = "0x3F1E880", Offset = "0x3F1E880", VA = "0x3F1E880")]
	public void Show(ColorSetting setting, Image image, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x600368F")]
	[Address(RVA = "0x3F1D890", Offset = "0x3F1D890", VA = "0x3F1D890")]
	private void SetupPickerUI()
	{
	}

	[Token(Token = "0x6003690")]
	[Address(RVA = "0x3F1F4E0", Offset = "0x3F1F4E0", VA = "0x3F1F4E0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003691")]
	[Address(RVA = "0x3F1FC00", Offset = "0x3F1FC00", VA = "0x3F1FC00")]
	private void OnSVDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x6003692")]
	[Address(RVA = "0x3F1FC30", Offset = "0x3F1FC30", VA = "0x3F1FC30")]
	private void OnHueDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x6003693")]
	[Address(RVA = "0x3F1FC60", Offset = "0x3F1FC60", VA = "0x3F1FC60")]
	private void OnAlphaDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x6003694")]
	[Address(RVA = "0x3F1FD30", Offset = "0x3F1FD30", VA = "0x3F1FD30")]
	private void OnRGBAInputChanged()
	{
	}

	[Token(Token = "0x6003695")]
	[Address(RVA = "0x3F1FE70", Offset = "0x3F1FE70", VA = "0x3F1FE70")]
	private void OnHexInputChanged()
	{
	}

	[Token(Token = "0x6003696")]
	[Address(RVA = "0x3F1FE90", Offset = "0x3F1FE90", VA = "0x3F1FE90")]
	private void OnHexInputEndEdit()
	{
	}

	[Token(Token = "0x6003697")]
	[Address(RVA = "0x3F20860", Offset = "0x3F20860", VA = "0x3F20860")]
	private bool IsHexInputValid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003698")]
	[Address(RVA = "0x3F20960", Offset = "0x3F20960", VA = "0x3F20960")]
	private string CleanupHexInput(string value)
	{
		return null;
	}

	[Token(Token = "0x6003699")]
	[Address(RVA = "0x3F20030", Offset = "0x3F20030", VA = "0x3F20030")]
	private bool TryParseCompleteHexColor(string input, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x600369A")]
	[Address(RVA = "0x3F1EA30", Offset = "0x3F1EA30", VA = "0x3F1EA30")]
	private void ApplyCurrentColorToUI(bool syncInputs)
	{
	}

	[Token(Token = "0x600369B")]
	[Address(RVA = "0x3F200D0", Offset = "0x3F200D0", VA = "0x3F200D0")]
	private void SyncInputValuesFromCurrentColor()
	{
	}

	[Token(Token = "0x600369C")]
	[Address(RVA = "0x3F20E50", Offset = "0x3F20E50", VA = "0x3F20E50")]
	private new void Update()
	{
	}

	[Token(Token = "0x600369D")]
	[Address(RVA = "0x3F1EA20", Offset = "0x3F1EA20", VA = "0x3F1EA20")]
	private void MarkTextureDirty(bool svDirty, bool alphaDirty)
	{
	}

	[Token(Token = "0x600369E")]
	[Address(RVA = "0x3F1EB70", Offset = "0x3F1EB70", VA = "0x3F1EB70")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x600369F")]
	[Address(RVA = "0x3F1E3D0", Offset = "0x3F1E3D0", VA = "0x3F1E3D0")]
	private void EnsureTextures()
	{
	}

	[Token(Token = "0x60036A0")]
	[Address(RVA = "0x3F20E90", Offset = "0x3F20E90", VA = "0x3F20E90")]
	private void UpdateSVTexture()
	{
	}

	[Token(Token = "0x60036A1")]
	[Address(RVA = "0x3F20FE0", Offset = "0x3F20FE0", VA = "0x3F20FE0")]
	private void UpdateAlphaTexture()
	{
	}

	[Token(Token = "0x60036A2")]
	[Address(RVA = "0x3F20A60", Offset = "0x3F20A60", VA = "0x3F20A60")]
	private void UpdatePickerHandles()
	{
	}

	[Token(Token = "0x60036A3")]
	[Address(RVA = "0x3F20D60", Offset = "0x3F20D60", VA = "0x3F20D60")]
	private Color GetCurrentColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60036A4")]
	[Address(RVA = "0x3F20DF0", Offset = "0x3F20DF0", VA = "0x3F20DF0")]
	private string GetHexString(Color color)
	{
		return null;
	}

	[Token(Token = "0x60036A5")]
	[Address(RVA = "0x3F1FCE0", Offset = "0x3F1FCE0", VA = "0x3F1FCE0")]
	private float GetMinAlpha01()
	{
		return default(float);
	}

	[Token(Token = "0x60036A6")]
	[Address(RVA = "0x3F1F610", Offset = "0x3F1F610", VA = "0x3F1F610")]
	private Color255 GetCurrentColor255()
	{
		return null;
	}

	[Token(Token = "0x60036A7")]
	[Address(RVA = "0x3F1EBB0", Offset = "0x3F1EBB0", VA = "0x3F1EBB0")]
	private GameObject CreateTextureContainer(Transform parent, string name, float width, float height, out RectTransform textureRect)
	{
		return null;
	}

	[Token(Token = "0x60036A8")]
	[Address(RVA = "0x3F1F0C0", Offset = "0x3F1F0C0", VA = "0x3F1F0C0")]
	private RawImage CreateTextureSurface(Transform container, string name, out RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x60036A9")]
	[Address(RVA = "0x3F1F1C0", Offset = "0x3F1F1C0", VA = "0x3F1F1C0")]
	private RectTransform CreateHandle(RectTransform parent, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x60036AA")]
	[Address(RVA = "0x3F21190", Offset = "0x3F21190", VA = "0x3F21190")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60036AB")]
	[Address(RVA = "0x3F212F0", Offset = "0x3F212F0", VA = "0x3F212F0")]
	public ColorPickPopup()
	{
	}
}
