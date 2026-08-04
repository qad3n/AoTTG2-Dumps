// ==================== AoTTG2 cross-reference ====================
// Type: UI.ToggleSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ToggleSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000603")]
internal class ToggleSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CDC")]
	[FieldOffset(Offset = "0x38")]
	protected Toggle _toggle;

	[Token(Token = "0x4001CDD")]
	[FieldOffset(Offset = "0x40")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x4001CDE")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onValueChanged;

	[Token(Token = "0x17000B8F")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003CDA")]
		[Address(RVA = "0x4299770", Offset = "0x4299770", VA = "0x4299770", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003CDB")]
	[Address(RVA = "0x42997F0", Offset = "0x42997F0", VA = "0x42997F0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, UnityAction onValueChanged)
	{
	}

	[Token(Token = "0x6003CDC")]
	[Address(RVA = "0x4299C50", Offset = "0x4299C50", VA = "0x4299C50")]
	protected void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6003CDD")]
	[Address(RVA = "0x4299D00", Offset = "0x4299D00", VA = "0x4299D00", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003CDE")]
	[Address(RVA = "0x4299D90", Offset = "0x4299D90", VA = "0x4299D90")]
	public ToggleSettingElement()
	{
	}
}
