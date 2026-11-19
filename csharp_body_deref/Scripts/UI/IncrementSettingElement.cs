// ==================== AoTTG2 cross-reference ====================
// Type: UI.IncrementSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IncrementSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IncrementSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F4")]
internal class IncrementSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Text _valueLabel;

	[Token(Token = "0x40027A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x40027A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x40027AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Func<bool> _validation;

	[Token(Token = "0x17000D4C")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C56")]
		[Address(RVA = "0x5BF12C0", Offset = "0x5BF02C0", VA = "0x5BF12C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C57")]
	[Address(RVA = "0x5BF1340", Offset = "0x5BF0340", VA = "0x5BF1340")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, string[] options, UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
	}

	[Token(Token = "0x6004C58")]
	[Address(RVA = "0x5BF1A40", Offset = "0x5BF0A40", VA = "0x5BF1A40")]
	protected void OnButtonPressed(bool increment)
	{
	}

	[Token(Token = "0x6004C59")]
	[Address(RVA = "0x5BF1B50", Offset = "0x5BF0B50", VA = "0x5BF1B50")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6004C5A")]
	[Address(RVA = "0x5BF1C70", Offset = "0x5BF0C70", VA = "0x5BF1C70", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C5B")]
	[Address(RVA = "0x5BF1C80", Offset = "0x5BF0C80", VA = "0x5BF1C80")]
	public IncrementSettingElement()
	{
	}
}
