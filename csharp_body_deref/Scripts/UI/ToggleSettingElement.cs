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

[Token(Token = "0x2000801")]
internal class ToggleSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027E2")]
	[FieldOffset(Offset = "0x38")]
	protected Toggle _toggle;

	[Token(Token = "0x40027E3")]
	[FieldOffset(Offset = "0x40")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x40027E4")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onValueChanged;

	[Token(Token = "0x17000D57")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CB5")]
		[Address(RVA = "0x5BF8F00", Offset = "0x5BF7F00", VA = "0x5BF8F00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004CB6")]
	[Address(RVA = "0x5BF8F80", Offset = "0x5BF7F80", VA = "0x5BF8F80")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, UnityAction onValueChanged)
	{
	}

	[Token(Token = "0x6004CB7")]
	[Address(RVA = "0x5BF9370", Offset = "0x5BF8370", VA = "0x5BF9370")]
	protected void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6004CB8")]
	[Address(RVA = "0x5BF9420", Offset = "0x5BF8420", VA = "0x5BF9420", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004CB9")]
	[Address(RVA = "0x5BF94B0", Offset = "0x5BF84B0", VA = "0x5BF94B0")]
	public ToggleSettingElement()
	{
	}
}
