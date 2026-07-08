using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005B1")]
internal class IncrementSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001B92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Text _valueLabel;

	[Token(Token = "0x4001B93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x4001B94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x4001B95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Func<bool> _validation;

	[Token(Token = "0x17000B1A")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A6C")]
		[Address(RVA = "0x3F83F50", Offset = "0x3F83F50", VA = "0x3F83F50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A6D")]
	[Address(RVA = "0x3F83FD0", Offset = "0x3F83FD0", VA = "0x3F83FD0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, string[] options, UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
	}

	[Token(Token = "0x6003A6E")]
	[Address(RVA = "0x3F847A0", Offset = "0x3F847A0", VA = "0x3F847A0")]
	protected void OnButtonPressed(bool increment)
	{
	}

	[Token(Token = "0x6003A6F")]
	[Address(RVA = "0x3F848B0", Offset = "0x3F848B0", VA = "0x3F848B0")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6003A70")]
	[Address(RVA = "0x3F84A30", Offset = "0x3F84A30", VA = "0x3F84A30", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A71")]
	[Address(RVA = "0x3F84A40", Offset = "0x3F84A40", VA = "0x3F84A40")]
	public IncrementSettingElement()
	{
	}
}
