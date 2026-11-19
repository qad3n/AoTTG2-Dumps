// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorPickPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x200078E")]
internal class ColorPickPopup : PromptPopup
{
	[Token(Token = "0x4002612")]
	private const int SVTextureSize = 192;

	[Token(Token = "0x4002613")]
	private const int AlphaTextureWidth = 192;

	[Token(Token = "0x4002614")]
	private const int HueTextureHeight = 256;

	[Token(Token = "0x4002615")]
	private const float PreviewWidth = 96f;

	[Token(Token = "0x4002616")]
	private const float PreviewHeight = 56f;

	[Token(Token = "0x4002617")]
	private const float PickerPadding = 3f;

	[Token(Token = "0x4002618")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Image _image;

	[Token(Token = "0x4002619")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSetting _setting;

	[Token(Token = "0x400261A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Image _preview;

	[Token(Token = "0x400261B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RectTransform _svRect;

	[Token(Token = "0x400261C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _hueRect;

	[Token(Token = "0x400261D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _alphaRect;

	[Token(Token = "0x400261E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RectTransform _svHandle;

	[Token(Token = "0x400261F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private RectTransform _hueHandle;

	[Token(Token = "0x4002620")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private RectTransform _alphaHandle;

	[Token(Token = "0x4002621")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private RawImage _svImage;

	[Token(Token = "0x4002622")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private RawImage _hueImage;

	[Token(Token = "0x4002623")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private RawImage _alphaImage;

	[Token(Token = "0x4002624")]
	private const float PickerContainerSize = 260f;

	[Token(Token = "0x4002625")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Texture2D _svTexture;

	[Token(Token = "0x4002626")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x4002627")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Color32[] _svPixels;

	[Token(Token = "0x4002628")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color32[] _alphaPixels;

	[Token(Token = "0x4002629")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private Texture2D _hueTexture;

	[Token(Token = "0x400262A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private float _hue;

	[Token(Token = "0x400262B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private float _saturation;

	[Token(Token = "0x400262C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private float _value;

	[Token(Token = "0x400262D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	private float _alphaValue;

	[Token(Token = "0x400262E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private IntSetting _red;

	[Token(Token = "0x400262F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private IntSetting _green;

	[Token(Token = "0x4002630")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private IntSetting _blue;

	[Token(Token = "0x4002631")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private IntSetting _alpha;

	[Token(Token = "0x4002632")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private StringSetting _hex;

	[Token(Token = "0x4002633")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private InputSettingElement _redInput;

	[Token(Token = "0x4002634")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private InputSettingElement _greenInput;

	[Token(Token = "0x4002635")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private InputSettingElement _blueInput;

	[Token(Token = "0x4002636")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private InputSettingElement _alphaInput;

	[Token(Token = "0x4002637")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private InputSettingElement _hexInput;

	[Token(Token = "0x4002638")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x4002639")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private bool _suppressInputCallbacks;

	[Token(Token = "0x400263A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x199")]
	private bool _svTextureDirty;

	[Token(Token = "0x400263B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19A")]
	private bool _alphaTextureDirty;

	[Token(Token = "0x400263C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19B")]
	private bool _hexInputActive;

	[Token(Token = "0x17000C71")]
	protected override string Title
	{
		[Token(Token = "0x60048E1")]
		[Address(RVA = "0x5BB8370", Offset = "0x5BB7370", VA = "0x5BB8370", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C72")]
	protected override float Width
	{
		[Token(Token = "0x60048E2")]
		[Address(RVA = "0x5BB8410", Offset = "0x5BB7410", VA = "0x5BB8410", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C73")]
	protected override float Height
	{
		[Token(Token = "0x60048E3")]
		[Address(RVA = "0x5BB8420", Offset = "0x5BB7420", VA = "0x5BB8420", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C74")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60048E4")]
		[Address(RVA = "0x5BB8430", Offset = "0x5BB7430", VA = "0x5BB8430", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C75")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60048E5")]
		[Address(RVA = "0x5BB8440", Offset = "0x5BB7440", VA = "0x5BB8440", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60048E6")]
	[Address(RVA = "0x5BB8450", Offset = "0x5BB7450", VA = "0x5BB8450", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60048E7")]
	[Address(RVA = "0x5BB96B0", Offset = "0x5BB86B0", VA = "0x5BB96B0")]
	public void Show(ColorSetting setting, Image image, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x60048E8")]
	[Address(RVA = "0x5BB8730", Offset = "0x5BB7730", VA = "0x5BB8730")]
	private void SetupPickerUI()
	{
	}

	[Token(Token = "0x60048E9")]
	[Address(RVA = "0x5BBA320", Offset = "0x5BB9320", VA = "0x5BBA320")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60048EA")]
	[Address(RVA = "0x5BBA9D0", Offset = "0x5BB99D0", VA = "0x5BBA9D0")]
	private void OnSVDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60048EB")]
	[Address(RVA = "0x5BBAA00", Offset = "0x5BB9A00", VA = "0x5BBAA00")]
	private void OnHueDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60048EC")]
	[Address(RVA = "0x5BBAA30", Offset = "0x5BB9A30", VA = "0x5BBAA30")]
	private void OnAlphaDragged(float normalizedX, float normalizedY)
	{
	}

	[Token(Token = "0x60048ED")]
	[Address(RVA = "0x5BBAB00", Offset = "0x5BB9B00", VA = "0x5BBAB00")]
	private void OnRGBAInputChanged()
	{
	}

	[Token(Token = "0x60048EE")]
	[Address(RVA = "0x5BBAC30", Offset = "0x5BB9C30", VA = "0x5BBAC30")]
	private void OnHexInputChanged()
	{
	}

	[Token(Token = "0x60048EF")]
	[Address(RVA = "0x5BBAC50", Offset = "0x5BB9C50", VA = "0x5BBAC50")]
	private void OnHexInputEndEdit()
	{
	}

	[Token(Token = "0x60048F0")]
	[Address(RVA = "0x5BBB6B0", Offset = "0x5BBA6B0", VA = "0x5BBB6B0")]
	private bool IsHexInputValid(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60048F1")]
	[Address(RVA = "0x5BBB7A0", Offset = "0x5BBA7A0", VA = "0x5BBB7A0")]
	private string CleanupHexInput(string value)
	{
		return null;
	}

	[Token(Token = "0x60048F2")]
	[Address(RVA = "0x5BBAE00", Offset = "0x5BB9E00", VA = "0x5BBAE00")]
	private bool TryParseCompleteHexColor(string input, out Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60048F3")]
	[Address(RVA = "0x5BB9860", Offset = "0x5BB8860", VA = "0x5BB9860")]
	private void ApplyCurrentColorToUI(bool syncInputs)
	{
	}

	[Token(Token = "0x60048F4")]
	[Address(RVA = "0x5BBAE90", Offset = "0x5BB9E90", VA = "0x5BBAE90")]
	private void SyncInputValuesFromCurrentColor()
	{
	}

	[Token(Token = "0x60048F5")]
	[Address(RVA = "0x5BBBCF0", Offset = "0x5BBACF0", VA = "0x5BBBCF0")]
	private new void Update()
	{
	}

	[Token(Token = "0x60048F6")]
	[Address(RVA = "0x5BB9850", Offset = "0x5BB8850", VA = "0x5BB9850")]
	private void MarkTextureDirty(bool svDirty, bool alphaDirty)
	{
	}

	[Token(Token = "0x60048F7")]
	[Address(RVA = "0x5BB99A0", Offset = "0x5BB89A0", VA = "0x5BB99A0")]
	private void RefreshTextures()
	{
	}

	[Token(Token = "0x60048F8")]
	[Address(RVA = "0x5BB9270", Offset = "0x5BB8270", VA = "0x5BB9270")]
	private void EnsureTextures()
	{
	}

	[Token(Token = "0x60048F9")]
	[Address(RVA = "0x5BBBD30", Offset = "0x5BBAD30", VA = "0x5BBBD30")]
	private void UpdateSVTexture()
	{
	}

	[Token(Token = "0x60048FA")]
	[Address(RVA = "0x5BBBE80", Offset = "0x5BBAE80", VA = "0x5BBBE80")]
	private void UpdateAlphaTexture()
	{
	}

	[Token(Token = "0x60048FB")]
	[Address(RVA = "0x5BBB8A0", Offset = "0x5BBA8A0", VA = "0x5BBB8A0")]
	private void UpdatePickerHandles()
	{
	}

	[Token(Token = "0x60048FC")]
	[Address(RVA = "0x5BBBC00", Offset = "0x5BBAC00", VA = "0x5BBBC00")]
	private Color GetCurrentColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60048FD")]
	[Address(RVA = "0x5BBBC90", Offset = "0x5BBAC90", VA = "0x5BBBC90")]
	private string GetHexString(Color color)
	{
		return null;
	}

	[Token(Token = "0x60048FE")]
	[Address(RVA = "0x5BBAAB0", Offset = "0x5BB9AB0", VA = "0x5BBAAB0")]
	private float GetMinAlpha01()
	{
		return default(float);
	}

	[Token(Token = "0x60048FF")]
	[Address(RVA = "0x5BBA450", Offset = "0x5BB9450", VA = "0x5BBA450")]
	private Color255 GetCurrentColor255()
	{
		return null;
	}

	[Token(Token = "0x6004900")]
	[Address(RVA = "0x5BB99E0", Offset = "0x5BB89E0", VA = "0x5BB99E0")]
	private GameObject CreateTextureContainer(Transform parent, string name, float width, float height, out RectTransform textureRect)
	{
		return null;
	}

	[Token(Token = "0x6004901")]
	[Address(RVA = "0x5BB9F00", Offset = "0x5BB8F00", VA = "0x5BB9F00")]
	private RawImage CreateTextureSurface(Transform container, string name, out RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x6004902")]
	[Address(RVA = "0x5BBA000", Offset = "0x5BB9000", VA = "0x5BBA000")]
	private RectTransform CreateHandle(RectTransform parent, Vector2 size)
	{
		return null;
	}

	[Token(Token = "0x6004903")]
	[Address(RVA = "0x5BBC030", Offset = "0x5BBB030", VA = "0x5BBC030")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004904")]
	[Address(RVA = "0x5BBC150", Offset = "0x5BBB150", VA = "0x5BBC150")]
	public ColorPickPopup()
	{
	}
}
