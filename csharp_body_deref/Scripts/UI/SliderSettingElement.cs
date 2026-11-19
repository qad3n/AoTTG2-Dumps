// ==================== AoTTG2 cross-reference ====================
// Type: UI.SliderSettingElement
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20007FE")]
internal class SliderSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x40027D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected Text _valueLabel;

	[Token(Token = "0x40027D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x40027D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected float _interval;

	[Token(Token = "0x40027D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x17000D55")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CA5")]
		[Address(RVA = "0x5BF7420", Offset = "0x5BF6420", VA = "0x5BF7420", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004CA6")]
	[Address(RVA = "0x5BF74C0", Offset = "0x5BF64C0", VA = "0x5BF74C0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, int decimalPlaces, [Optional][DefaultParameterValue(0f)] float interval, [Optional] UnityAction onValueChanged)
	{
	}

	[Token(Token = "0x6004CA7")]
	[Address(RVA = "0x5BF7CA0", Offset = "0x5BF6CA0", VA = "0x5BF7CA0")]
	protected void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6004CA8")]
	[Address(RVA = "0x5BF7F40", Offset = "0x5BF6F40", VA = "0x5BF7F40")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6004CA9")]
	[Address(RVA = "0x5BF8040", Offset = "0x5BF7040", VA = "0x5BF8040", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004CAA")]
	[Address(RVA = "0x5BF8150", Offset = "0x5BF7150", VA = "0x5BF8150")]
	public SliderSettingElement()
	{
	}
}
