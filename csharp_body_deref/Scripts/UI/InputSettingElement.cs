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

[Token(Token = "0x20005F7")]
internal class InputSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public InputField _inputField;

	[Token(Token = "0x4001CAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x4001CAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x4001CAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected UnityAction _onEndEdit;

	[Token(Token = "0x4001CAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Func<string, bool> _onValidate;

	[Token(Token = "0x4001CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Func<string, string> _onCleanup;

	[Token(Token = "0x4001CAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform _caret;

	[Token(Token = "0x4001CB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected bool _finishedSetup;

	[Token(Token = "0x4001CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected object[] _setupParams;

	[Token(Token = "0x17000B85")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C84")]
		[Address(RVA = "0x42929E0", Offset = "0x42929E0", VA = "0x42929E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C85")]
	[Address(RVA = "0x4292A90", Offset = "0x4292A90", VA = "0x4292A90")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, bool multiLine, UnityAction onValueChanged, UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
	}

	[Token(Token = "0x6003C86")]
	[Address(RVA = "0x4293350", Offset = "0x4293350", VA = "0x4293350")]
	protected void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x6003C87")]
	[Address(RVA = "0x42935A0", Offset = "0x42935A0", VA = "0x42935A0")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6003C88")]
	[Address(RVA = "0x42935E0", Offset = "0x42935E0", VA = "0x42935E0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C89")]
	[Address(RVA = "0x42937B0", Offset = "0x42937B0", VA = "0x42937B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003C8A")]
	[Address(RVA = "0x4293840", Offset = "0x4293840", VA = "0x4293840")]
	public InputSettingElement()
	{
	}
}
