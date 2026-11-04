// ==================== AoTTG2 cross-reference ====================
// Type: UI.SliderSettingElement
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SliderSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000756")]
internal class SliderSettingElement : BaseSettingElement
{
	[Token(Token = "0x4002464")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x4002465")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected Text _valueLabel;

	[Token(Token = "0x4002466")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x4002467")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected float _interval;

	[Token(Token = "0x4002468")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x17000CD2")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004783")]
		[Address(RVA = "0x2238210", Offset = "0x2236810", VA = "0x182238210", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004784")]
	[Address(RVA = "0x2237790", Offset = "0x2235D90", VA = "0x182237790")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, int decimalPlaces, [Optional][DefaultParameterValue(0f)] float interval, [Optional] UnityAction onValueChanged)
	{
	}

	[Token(Token = "0x6004785")]
	[Address(RVA = "0x2237570", Offset = "0x2235B70", VA = "0x182237570")]
	protected void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6004786")]
	[Address(RVA = "0x22380F0", Offset = "0x22366F0", VA = "0x1822380F0")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6004787")]
	[Address(RVA = "0x2237FB0", Offset = "0x22365B0", VA = "0x182237FB0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004788")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public SliderSettingElement()
	{
	}
}
