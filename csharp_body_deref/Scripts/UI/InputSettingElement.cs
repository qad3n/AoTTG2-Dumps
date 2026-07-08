using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005B2")]
internal class InputSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001B96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public InputField _inputField;

	[Token(Token = "0x4001B97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x4001B98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x4001B99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected UnityAction _onEndEdit;

	[Token(Token = "0x4001B9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Func<string, bool> _onValidate;

	[Token(Token = "0x4001B9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Func<string, string> _onCleanup;

	[Token(Token = "0x4001B9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform _caret;

	[Token(Token = "0x4001B9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected bool _finishedSetup;

	[Token(Token = "0x4001B9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected object[] _setupParams;

	[Token(Token = "0x17000B1B")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A74")]
		[Address(RVA = "0x3F84A70", Offset = "0x3F84A70", VA = "0x3F84A70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A75")]
	[Address(RVA = "0x3F84B20", Offset = "0x3F84B20", VA = "0x3F84B20")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, bool multiLine, UnityAction onValueChanged, UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
	}

	[Token(Token = "0x6003A76")]
	[Address(RVA = "0x3F853E0", Offset = "0x3F853E0", VA = "0x3F853E0")]
	protected void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x6003A77")]
	[Address(RVA = "0x3F85630", Offset = "0x3F85630", VA = "0x3F85630")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6003A78")]
	[Address(RVA = "0x3F85670", Offset = "0x3F85670", VA = "0x3F85670", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A79")]
	[Address(RVA = "0x3F85840", Offset = "0x3F85840", VA = "0x3F85840")]
	private void Update()
	{
	}

	[Token(Token = "0x6003A7A")]
	[Address(RVA = "0x3F858D0", Offset = "0x3F858D0", VA = "0x3F858D0")]
	public InputSettingElement()
	{
	}
}
