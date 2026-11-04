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

[Token(Token = "0x2000759")]
internal class ToggleSettingElement : BaseSettingElement
{
	[Token(Token = "0x4002471")]
	[FieldOffset(Offset = "0x38")]
	protected Toggle _toggle;

	[Token(Token = "0x4002472")]
	[FieldOffset(Offset = "0x40")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x4002473")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onValueChanged;

	[Token(Token = "0x17000CD4")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004793")]
		[Address(RVA = "0x2239640", Offset = "0x2237C40", VA = "0x182239640", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004794")]
	[Address(RVA = "0x2239170", Offset = "0x2237770", VA = "0x182239170")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, UnityAction onValueChanged)
	{
	}

	[Token(Token = "0x6004795")]
	[Address(RVA = "0x22390C0", Offset = "0x22376C0", VA = "0x1822390C0")]
	protected void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6004796")]
	[Address(RVA = "0x22395A0", Offset = "0x2237BA0", VA = "0x1822395A0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004797")]
	[Address(RVA = "0x2239630", Offset = "0x2237C30", VA = "0x182239630")]
	public ToggleSettingElement()
	{
	}
}
