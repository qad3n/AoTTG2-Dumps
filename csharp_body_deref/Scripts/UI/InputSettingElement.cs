// ==================== AoTTG2 cross-reference ====================
// Type: UI.InputSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InputSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F5")]
internal class InputSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public InputField _inputField;

	[Token(Token = "0x40027AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x40027AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x40027AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected UnityAction _onEndEdit;

	[Token(Token = "0x40027AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Func<string, bool> _onValidate;

	[Token(Token = "0x40027B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Func<string, string> _onCleanup;

	[Token(Token = "0x40027B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform _caret;

	[Token(Token = "0x40027B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected bool _finishedSetup;

	[Token(Token = "0x40027B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected object[] _setupParams;

	[Token(Token = "0x17000D4D")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C5E")]
		[Address(RVA = "0x5BF1CB0", Offset = "0x5BF0CB0", VA = "0x5BF1CB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C5F")]
	[Address(RVA = "0x5BF1D60", Offset = "0x5BF0D60", VA = "0x5BF1D60")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, bool multiLine, UnityAction onValueChanged, UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
	}

	[Token(Token = "0x6004C60")]
	[Address(RVA = "0x5BF25D0", Offset = "0x5BF15D0", VA = "0x5BF25D0")]
	protected void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x6004C61")]
	[Address(RVA = "0x5BF2810", Offset = "0x5BF1810", VA = "0x5BF2810")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6004C62")]
	[Address(RVA = "0x5BF2850", Offset = "0x5BF1850", VA = "0x5BF2850", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C63")]
	[Address(RVA = "0x5BF2A10", Offset = "0x5BF1A10", VA = "0x5BF2A10")]
	private void Update()
	{
	}

	[Token(Token = "0x6004C64")]
	[Address(RVA = "0x5BF2AA0", Offset = "0x5BF1AA0", VA = "0x5BF2AA0")]
	public InputSettingElement()
	{
	}
}
