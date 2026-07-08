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

[Token(Token = "0x20005AA")]
internal class DropdownSettingElement : BaseSettingElement
{
	[Token(Token = "0x20005AC")]
	[CompilerGenerated]
	private sealed class _003CWaitAndCloseOptions_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B7D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B7E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B7F")]
		[FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000B15")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A57")]
			[Address(RVA = "0x3F832D0", Offset = "0x3F832D0", VA = "0x3F832D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B16")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A59")]
			[Address(RVA = "0x3F83320", Offset = "0x3F83320", VA = "0x3F83320", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A54")]
		[Address(RVA = "0x3F83200", Offset = "0x3F83200", VA = "0x3F83200")]
		[DebuggerHidden]
		public _003CWaitAndCloseOptions_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A55")]
		[Address(RVA = "0x3F83220", Offset = "0x3F83220", VA = "0x3F83220", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A56")]
		[Address(RVA = "0x3F83230", Offset = "0x3F83230", VA = "0x3F83230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A58")]
		[Address(RVA = "0x3F832E0", Offset = "0x3F832E0", VA = "0x3F832E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005AD")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B80")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B81")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B82")]
		[FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000B17")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A5D")]
			[Address(RVA = "0x3F83510", Offset = "0x3F83510", VA = "0x3F83510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B18")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A5F")]
			[Address(RVA = "0x3F83560", Offset = "0x3F83560", VA = "0x3F83560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A5A")]
		[Address(RVA = "0x3F83330", Offset = "0x3F83330", VA = "0x3F83330")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A5B")]
		[Address(RVA = "0x3F83350", Offset = "0x3F83350", VA = "0x3F83350", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A5C")]
		[Address(RVA = "0x3F83360", Offset = "0x3F83360", VA = "0x3F83360", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A5E")]
		[Address(RVA = "0x3F83520", Offset = "0x3F83520", VA = "0x3F83520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B71")]
	[FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4001B72")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4001B73")]
	[FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4001B74")]
	[FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4001B75")]
	[FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4001B76")]
	[FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4001B77")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4001B78")]
	[FieldOffset(Offset = "0x78")]
	protected UnityAction _onDropdownOptionSelect;

	[Token(Token = "0x4001B79")]
	[FieldOffset(Offset = "0x80")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x17000B14")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A41")]
		[Address(RVA = "0x3F821D0", Offset = "0x3F821D0", VA = "0x3F821D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A42")]
	[Address(RVA = "0x3F81380", Offset = "0x3F81380", VA = "0x3F81380", Slot = "7")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect)
	{
	}

	[Token(Token = "0x6003A43")]
	[Address(RVA = "0x3F82790", Offset = "0x3F82790", VA = "0x3F82790")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6003A44")]
	[Address(RVA = "0x3F827F0", Offset = "0x3F827F0", VA = "0x3F827F0")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A45")]
	[Address(RVA = "0x3F82870", Offset = "0x3F82870", VA = "0x3F82870")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x6003A46")]
	[Address(RVA = "0x3F82990", Offset = "0x3F82990", VA = "0x3F82990")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6003A47")]
	[Address(RVA = "0x3F82A10", Offset = "0x3F82A10", VA = "0x3F82A10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003A48")]
	[Address(RVA = "0x3F82A90", Offset = "0x3F82A90", VA = "0x3F82A90")]
	private void Update()
	{
	}

	[Token(Token = "0x6003A49")]
	[Address(RVA = "0x3F82270", Offset = "0x3F82270", VA = "0x3F82270")]
	protected void CreateOptionButton(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6003A4A")]
	[Address(RVA = "0x3F82CE0", Offset = "0x3F82CE0", VA = "0x3F82CE0")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6003A4B")]
	[Address(RVA = "0x3F82DA0", Offset = "0x3F82DA0", VA = "0x3F82DA0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__20))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6003A4C")]
	[Address(RVA = "0x3F82C70", Offset = "0x3F82C70", VA = "0x3F82C70")]
	[IteratorStateMachine(typeof(_003CWaitAndCloseOptions_003Ed__21))]
	private IEnumerator WaitAndCloseOptions()
	{
		return null;
	}

	[Token(Token = "0x6003A4D")]
	[Address(RVA = "0x3F82E10", Offset = "0x3F82E10", VA = "0x3F82E10", Slot = "8")]
	protected virtual void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6003A4E")]
	[Address(RVA = "0x3F820C0", Offset = "0x3F820C0", VA = "0x3F820C0")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6003A4F")]
	[Address(RVA = "0x3F82FF0", Offset = "0x3F82FF0", VA = "0x3F82FF0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A50")]
	[Address(RVA = "0x3F82170", Offset = "0x3F82170", VA = "0x3F82170")]
	public DropdownSettingElement()
	{
	}
}
