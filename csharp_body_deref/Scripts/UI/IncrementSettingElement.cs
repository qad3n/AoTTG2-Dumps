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

[Token(Token = "0x20005F6")]
internal class IncrementSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Text _valueLabel;

	[Token(Token = "0x4001CA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x4001CA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x4001CA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Func<bool> _validation;

	[Token(Token = "0x17000B84")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C7C")]
		[Address(RVA = "0x4291EC0", Offset = "0x4291EC0", VA = "0x4291EC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C7D")]
	[Address(RVA = "0x4291F40", Offset = "0x4291F40", VA = "0x4291F40")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, string[] options, UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
	}

	[Token(Token = "0x6003C7E")]
	[Address(RVA = "0x4292710", Offset = "0x4292710", VA = "0x4292710")]
	protected void OnButtonPressed(bool increment)
	{
	}

	[Token(Token = "0x6003C7F")]
	[Address(RVA = "0x4292820", Offset = "0x4292820", VA = "0x4292820")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6003C80")]
	[Address(RVA = "0x42929A0", Offset = "0x42929A0", VA = "0x42929A0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C81")]
	[Address(RVA = "0x42929B0", Offset = "0x42929B0", VA = "0x42929B0")]
	public IncrementSettingElement()
	{
	}
}
