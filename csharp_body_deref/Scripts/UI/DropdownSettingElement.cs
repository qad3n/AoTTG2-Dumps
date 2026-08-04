// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/DropdownSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20005EF")]
internal class DropdownSettingElement : BaseSettingElement
{
	[Token(Token = "0x20005F1")]
	[CompilerGenerated]
	private sealed class _003CWaitAndCloseOptions_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C90")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C91")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C92")]
		[FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000B7F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003C67")]
			[Address(RVA = "0x4291240", Offset = "0x4291240", VA = "0x4291240", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B80")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003C69")]
			[Address(RVA = "0x4291290", Offset = "0x4291290", VA = "0x4291290", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003C64")]
		[Address(RVA = "0x4291170", Offset = "0x4291170", VA = "0x4291170")]
		[DebuggerHidden]
		public _003CWaitAndCloseOptions_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003C65")]
		[Address(RVA = "0x4291190", Offset = "0x4291190", VA = "0x4291190", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003C66")]
		[Address(RVA = "0x42911A0", Offset = "0x42911A0", VA = "0x42911A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003C68")]
		[Address(RVA = "0x4291250", Offset = "0x4291250", VA = "0x4291250", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005F2")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C93")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C94")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C95")]
		[FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000B81")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003C6D")]
			[Address(RVA = "0x4291480", Offset = "0x4291480", VA = "0x4291480", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B82")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003C6F")]
			[Address(RVA = "0x42914D0", Offset = "0x42914D0", VA = "0x42914D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003C6A")]
		[Address(RVA = "0x42912A0", Offset = "0x42912A0", VA = "0x42912A0")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003C6B")]
		[Address(RVA = "0x42912C0", Offset = "0x42912C0", VA = "0x42912C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003C6C")]
		[Address(RVA = "0x42912D0", Offset = "0x42912D0", VA = "0x42912D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003C6E")]
		[Address(RVA = "0x4291490", Offset = "0x4291490", VA = "0x4291490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C84")]
	[FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4001C85")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4001C86")]
	[FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4001C87")]
	[FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4001C88")]
	[FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4001C89")]
	[FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4001C8A")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4001C8B")]
	[FieldOffset(Offset = "0x78")]
	protected UnityAction _onDropdownOptionSelect;

	[Token(Token = "0x4001C8C")]
	[FieldOffset(Offset = "0x80")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x17000B7E")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C51")]
		[Address(RVA = "0x4290000", Offset = "0x4290000", VA = "0x4290000", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C52")]
	[Address(RVA = "0x428F1B0", Offset = "0x428F1B0", VA = "0x428F1B0", Slot = "7")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect)
	{
	}

	[Token(Token = "0x6003C53")]
	[Address(RVA = "0x42905C0", Offset = "0x42905C0", VA = "0x42905C0")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6003C54")]
	[Address(RVA = "0x4290620", Offset = "0x4290620", VA = "0x4290620")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C55")]
	[Address(RVA = "0x42906A0", Offset = "0x42906A0", VA = "0x42906A0")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x6003C56")]
	[Address(RVA = "0x4290900", Offset = "0x4290900", VA = "0x4290900")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6003C57")]
	[Address(RVA = "0x4290980", Offset = "0x4290980", VA = "0x4290980")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003C58")]
	[Address(RVA = "0x4290A00", Offset = "0x4290A00", VA = "0x4290A00")]
	private void Update()
	{
	}

	[Token(Token = "0x6003C59")]
	[Address(RVA = "0x42900A0", Offset = "0x42900A0", VA = "0x42900A0")]
	protected void CreateOptionButton(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6003C5A")]
	[Address(RVA = "0x4290C50", Offset = "0x4290C50", VA = "0x4290C50")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6003C5B")]
	[Address(RVA = "0x4290D10", Offset = "0x4290D10", VA = "0x4290D10")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__20))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6003C5C")]
	[Address(RVA = "0x4290BE0", Offset = "0x4290BE0", VA = "0x4290BE0")]
	[IteratorStateMachine(typeof(_003CWaitAndCloseOptions_003Ed__21))]
	private IEnumerator WaitAndCloseOptions()
	{
		return null;
	}

	[Token(Token = "0x6003C5D")]
	[Address(RVA = "0x4290D80", Offset = "0x4290D80", VA = "0x4290D80", Slot = "8")]
	protected virtual void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6003C5E")]
	[Address(RVA = "0x428FEF0", Offset = "0x428FEF0", VA = "0x428FEF0")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6003C5F")]
	[Address(RVA = "0x4290F60", Offset = "0x4290F60", VA = "0x4290F60", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C60")]
	[Address(RVA = "0x428FFA0", Offset = "0x428FFA0", VA = "0x428FFA0")]
	public DropdownSettingElement()
	{
	}
}
