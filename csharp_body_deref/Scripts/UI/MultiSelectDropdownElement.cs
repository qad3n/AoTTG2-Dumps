// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiSelectDropdownElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiSelectDropdownElement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F9")]
internal class MultiSelectDropdownElement : BaseSettingElement
{
	[Token(Token = "0x20007FB")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40027CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40027CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40027CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MultiSelectDropdownElement _003C_003E4__this;

		[Token(Token = "0x17000D50")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004C8E")]
			[Address(RVA = "0x5BF5FA0", Offset = "0x5BF4FA0", VA = "0x5BF5FA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D51")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004C90")]
			[Address(RVA = "0x5BF5FF0", Offset = "0x5BF4FF0", VA = "0x5BF5FF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004C8B")]
		[Address(RVA = "0x5BF5A60", Offset = "0x5BF4A60", VA = "0x5BF5A60")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004C8C")]
		[Address(RVA = "0x5BF5D90", Offset = "0x5BF4D90", VA = "0x5BF5D90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004C8D")]
		[Address(RVA = "0x5BF5DA0", Offset = "0x5BF4DA0", VA = "0x5BF5DA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004C8F")]
		[Address(RVA = "0x5BF5FB0", Offset = "0x5BF4FB0", VA = "0x5BF5FB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40027B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x40027B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x40027BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x40027BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x40027BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x40027BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x40027BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x40027BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool _scaleWithPanel;

	[Token(Token = "0x40027C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected UnityAction _onSelectionChanged;

	[Token(Token = "0x40027C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected HashSetSetting<int> _hashSetSetting;

	[Token(Token = "0x40027C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected int[] _intOptionValues;

	[Token(Token = "0x40027C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	protected Dictionary<int, Toggle> _toggles;

	[Token(Token = "0x40027C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x40027C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _themePanel;

	[Token(Token = "0x40027C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000D4F")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C77")]
		[Address(RVA = "0x5BF3A80", Offset = "0x5BF2A80", VA = "0x5BF3A80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C78")]
	[Address(RVA = "0x5BF3AE0", Offset = "0x5BF2AE0", VA = "0x5BF3AE0")]
	public void Setup(HashSetSetting<int> setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onSelectionChanged, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004C79")]
	[Address(RVA = "0x5BF51C0", Offset = "0x5BF41C0", VA = "0x5BF51C0")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6004C7A")]
	[Address(RVA = "0x5BF5230", Offset = "0x5BF4230", VA = "0x5BF5230")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6004C7B")]
	[Address(RVA = "0x5BF52B0", Offset = "0x5BF42B0", VA = "0x5BF52B0")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x6004C7C")]
	[Address(RVA = "0x5BF54F0", Offset = "0x5BF44F0", VA = "0x5BF54F0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004C7D")]
	[Address(RVA = "0x5BF5570", Offset = "0x5BF4570", VA = "0x5BF5570")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004C7E")]
	[Address(RVA = "0x5BF55F0", Offset = "0x5BF45F0", VA = "0x5BF55F0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004C7F")]
	[Address(RVA = "0x5BF46D0", Offset = "0x5BF36D0", VA = "0x5BF46D0")]
	protected void CreateOptionToggle(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6004C80")]
	[Address(RVA = "0x5BF5890", Offset = "0x5BF4890", VA = "0x5BF5890")]
	protected void OnToggleValueChanged(int index, bool value)
	{
	}

	[Token(Token = "0x6004C81")]
	[Address(RVA = "0x5BF5860", Offset = "0x5BF4860", VA = "0x5BF5860")]
	private int GetOptionValue(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6004C82")]
	[Address(RVA = "0x5BF5950", Offset = "0x5BF4950", VA = "0x5BF5950")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6004C83")]
	[Address(RVA = "0x5BF59F0", Offset = "0x5BF49F0", VA = "0x5BF59F0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__28))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6004C84")]
	[Address(RVA = "0x5BF57C0", Offset = "0x5BF47C0", VA = "0x5BF57C0")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6004C85")]
	[Address(RVA = "0x5BF5A80", Offset = "0x5BF4A80", VA = "0x5BF5A80", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C86")]
	[Address(RVA = "0x5BF5C40", Offset = "0x5BF4C40", VA = "0x5BF5C40")]
	public MultiSelectDropdownElement()
	{
	}
}
