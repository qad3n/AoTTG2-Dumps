using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005B6")]
internal class MultiSelectDropdownElement : BaseSettingElement
{
	[Token(Token = "0x20005B8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BB3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BB4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BB5")]
		[FieldOffset(Offset = "0x20")]
		public MultiSelectDropdownElement _003C_003E4__this;

		[Token(Token = "0x17000B1E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003AA3")]
			[Address(RVA = "0x3F88A20", Offset = "0x3F88A20", VA = "0x3F88A20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B1F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003AA5")]
			[Address(RVA = "0x3F88A70", Offset = "0x3F88A70", VA = "0x3F88A70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003AA0")]
		[Address(RVA = "0x3F88460", Offset = "0x3F88460", VA = "0x3F88460")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003AA1")]
		[Address(RVA = "0x3F88820", Offset = "0x3F88820", VA = "0x3F88820", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003AA2")]
		[Address(RVA = "0x3F88830", Offset = "0x3F88830", VA = "0x3F88830", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003AA4")]
		[Address(RVA = "0x3F88A30", Offset = "0x3F88A30", VA = "0x3F88A30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BA3")]
	[FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4001BA4")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4001BA5")]
	[FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4001BA6")]
	[FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4001BA7")]
	[FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4001BA8")]
	[FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4001BA9")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4001BAA")]
	[FieldOffset(Offset = "0x78")]
	protected UnityAction _onSelectionChanged;

	[Token(Token = "0x4001BAB")]
	[FieldOffset(Offset = "0x80")]
	protected HashSetSetting<int> _hashSetSetting;

	[Token(Token = "0x4001BAC")]
	[FieldOffset(Offset = "0x88")]
	protected Dictionary<int, Toggle> _toggles;

	[Token(Token = "0x4001BAD")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x4001BAE")]
	[FieldOffset(Offset = "0xA0")]
	private string _themePanel;

	[Token(Token = "0x4001BAF")]
	[FieldOffset(Offset = "0xA8")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000B1D")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A8D")]
		[Address(RVA = "0x3F865F0", Offset = "0x3F865F0", VA = "0x3F865F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A8E")]
	[Address(RVA = "0x3F86650", Offset = "0x3F86650", VA = "0x3F86650")]
	public void Setup(HashSetSetting<int> setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onSelectionChanged)
	{
	}

	[Token(Token = "0x6003A8F")]
	[Address(RVA = "0x3F87D30", Offset = "0x3F87D30", VA = "0x3F87D30")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6003A90")]
	[Address(RVA = "0x3F87D90", Offset = "0x3F87D90", VA = "0x3F87D90")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A91")]
	[Address(RVA = "0x3F87E10", Offset = "0x3F87E10", VA = "0x3F87E10")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x6003A92")]
	[Address(RVA = "0x3F87F30", Offset = "0x3F87F30", VA = "0x3F87F30")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6003A93")]
	[Address(RVA = "0x3F87FB0", Offset = "0x3F87FB0", VA = "0x3F87FB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003A94")]
	[Address(RVA = "0x3F88030", Offset = "0x3F88030", VA = "0x3F88030")]
	private void Update()
	{
	}

	[Token(Token = "0x6003A95")]
	[Address(RVA = "0x3F87230", Offset = "0x3F87230", VA = "0x3F87230")]
	protected void CreateOptionToggle(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6003A96")]
	[Address(RVA = "0x3F882B0", Offset = "0x3F882B0", VA = "0x3F882B0")]
	protected void OnToggleValueChanged(int index, bool value)
	{
	}

	[Token(Token = "0x6003A97")]
	[Address(RVA = "0x3F88350", Offset = "0x3F88350", VA = "0x3F88350")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6003A98")]
	[Address(RVA = "0x3F883F0", Offset = "0x3F883F0", VA = "0x3F883F0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__25))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6003A99")]
	[Address(RVA = "0x3F88210", Offset = "0x3F88210", VA = "0x3F88210")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6003A9A")]
	[Address(RVA = "0x3F88480", Offset = "0x3F88480", VA = "0x3F88480", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A9B")]
	[Address(RVA = "0x3F88660", Offset = "0x3F88660", VA = "0x3F88660")]
	public MultiSelectDropdownElement()
	{
	}
}
