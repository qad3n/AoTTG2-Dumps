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

[Token(Token = "0x200074C")]
internal class IncrementSettingElement : BaseSettingElement
{
	[Token(Token = "0x4002436")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Text _valueLabel;

	[Token(Token = "0x4002437")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x4002438")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x4002439")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Func<bool> _validation;

	[Token(Token = "0x17000CC9")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004734")]
		[Address(RVA = "0x2212B00", Offset = "0x2211100", VA = "0x182212B00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004735")]
	[Address(RVA = "0x2212320", Offset = "0x2210920", VA = "0x182212320")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, string[] options, UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
	}

	[Token(Token = "0x6004736")]
	[Address(RVA = "0x22121F0", Offset = "0x22107F0", VA = "0x1822121F0")]
	protected void OnButtonPressed(bool increment)
	{
	}

	[Token(Token = "0x6004737")]
	[Address(RVA = "0x22129A0", Offset = "0x2210FA0", VA = "0x1822129A0")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6004738")]
	[Address(RVA = "0x2212970", Offset = "0x2210F70", VA = "0x182212970", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004739")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public IncrementSettingElement()
	{
	}
}
