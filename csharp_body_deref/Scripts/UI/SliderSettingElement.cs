// ==================== AoTTG2 cross-reference ====================
// Type: UI.SliderSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SliderSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000600")]
internal class SliderSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CD1")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x4001CD2")]
	[FieldOffset(Offset = "0x40")]
	protected Text _valueLabel;

	[Token(Token = "0x4001CD3")]
	[FieldOffset(Offset = "0x48")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x17000B8D")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003CCA")]
		[Address(RVA = "0x4297E70", Offset = "0x4297E70", VA = "0x4297E70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003CCB")]
	[Address(RVA = "0x4297F10", Offset = "0x4297F10", VA = "0x4297F10")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, int decimalPlaces)
	{
	}

	[Token(Token = "0x6003CCC")]
	[Address(RVA = "0x4298620", Offset = "0x4298620", VA = "0x4298620")]
	protected void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6003CCD")]
	[Address(RVA = "0x42987C0", Offset = "0x42987C0", VA = "0x42987C0")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6003CCE")]
	[Address(RVA = "0x42988C0", Offset = "0x42988C0", VA = "0x42988C0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003CCF")]
	[Address(RVA = "0x42989D0", Offset = "0x42989D0", VA = "0x42989D0")]
	public SliderSettingElement()
	{
	}
}
