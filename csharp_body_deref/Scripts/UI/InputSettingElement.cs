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

[Token(Token = "0x200074D")]
internal class InputSettingElement : BaseSettingElement
{
	[Token(Token = "0x400243A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public InputField _inputField;

	[Token(Token = "0x400243B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x400243C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x400243D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected UnityAction _onEndEdit;

	[Token(Token = "0x400243E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Func<string, bool> _onValidate;

	[Token(Token = "0x400243F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Func<string, string> _onCleanup;

	[Token(Token = "0x4002440")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform _caret;

	[Token(Token = "0x4002441")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected bool _finishedSetup;

	[Token(Token = "0x4002442")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected object[] _setupParams;

	[Token(Token = "0x17000CCA")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x600473C")]
		[Address(RVA = "0x2213D70", Offset = "0x2212370", VA = "0x182213D70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600473D")]
	[Address(RVA = "0x2213250", Offset = "0x2211850", VA = "0x182213250")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, bool multiLine, UnityAction onValueChanged, UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
	}

	[Token(Token = "0x600473E")]
	[Address(RVA = "0x2212FF0", Offset = "0x22115F0", VA = "0x182212FF0")]
	protected void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x600473F")]
	[Address(RVA = "0x2212FA0", Offset = "0x22115A0", VA = "0x182212FA0")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6004740")]
	[Address(RVA = "0x2213AC0", Offset = "0x22120C0", VA = "0x182213AC0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004741")]
	[Address(RVA = "0x2213CC0", Offset = "0x22122C0", VA = "0x182213CC0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004742")]
	[Address(RVA = "0x2213D60", Offset = "0x2212360", VA = "0x182213D60")]
	public InputSettingElement()
	{
	}
}
