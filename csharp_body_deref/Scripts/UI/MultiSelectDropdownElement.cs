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
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005FB")]
internal class MultiSelectDropdownElement : BaseSettingElement
{
	[Token(Token = "0x20005FD")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001CC6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001CC7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001CC8")]
		[FieldOffset(Offset = "0x20")]
		public MultiSelectDropdownElement _003C_003E4__this;

		[Token(Token = "0x17000B88")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CB3")]
			[Address(RVA = "0x4296990", Offset = "0x4296990", VA = "0x4296990", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B89")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CB5")]
			[Address(RVA = "0x42969E0", Offset = "0x42969E0", VA = "0x42969E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003CB0")]
		[Address(RVA = "0x42963D0", Offset = "0x42963D0", VA = "0x42963D0")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003CB1")]
		[Address(RVA = "0x4296790", Offset = "0x4296790", VA = "0x4296790", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003CB2")]
		[Address(RVA = "0x42967A0", Offset = "0x42967A0", VA = "0x42967A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003CB4")]
		[Address(RVA = "0x42969A0", Offset = "0x42969A0", VA = "0x42969A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001CB6")]
	[FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4001CB7")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4001CB8")]
	[FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4001CB9")]
	[FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4001CBA")]
	[FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4001CBB")]
	[FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4001CBC")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4001CBD")]
	[FieldOffset(Offset = "0x78")]
	protected UnityAction _onSelectionChanged;

	[Token(Token = "0x4001CBE")]
	[FieldOffset(Offset = "0x80")]
	protected HashSetSetting<int> _hashSetSetting;

	[Token(Token = "0x4001CBF")]
	[FieldOffset(Offset = "0x88")]
	protected Dictionary<int, Toggle> _toggles;

	[Token(Token = "0x4001CC0")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x4001CC1")]
	[FieldOffset(Offset = "0xA0")]
	private string _themePanel;

	[Token(Token = "0x4001CC2")]
	[FieldOffset(Offset = "0xA8")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000B87")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C9D")]
		[Address(RVA = "0x4294560", Offset = "0x4294560", VA = "0x4294560", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C9E")]
	[Address(RVA = "0x42945C0", Offset = "0x42945C0", VA = "0x42945C0")]
	public void Setup(HashSetSetting<int> setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onSelectionChanged)
	{
	}

	[Token(Token = "0x6003C9F")]
	[Address(RVA = "0x4295CA0", Offset = "0x4295CA0", VA = "0x4295CA0")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6003CA0")]
	[Address(RVA = "0x4295D00", Offset = "0x4295D00", VA = "0x4295D00")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6003CA1")]
	[Address(RVA = "0x4295D80", Offset = "0x4295D80", VA = "0x4295D80")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x6003CA2")]
	[Address(RVA = "0x4295EA0", Offset = "0x4295EA0", VA = "0x4295EA0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6003CA3")]
	[Address(RVA = "0x4295F20", Offset = "0x4295F20", VA = "0x4295F20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003CA4")]
	[Address(RVA = "0x4295FA0", Offset = "0x4295FA0", VA = "0x4295FA0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003CA5")]
	[Address(RVA = "0x42951A0", Offset = "0x42951A0", VA = "0x42951A0")]
	protected void CreateOptionToggle(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6003CA6")]
	[Address(RVA = "0x4296220", Offset = "0x4296220", VA = "0x4296220")]
	protected void OnToggleValueChanged(int index, bool value)
	{
	}

	[Token(Token = "0x6003CA7")]
	[Address(RVA = "0x42962C0", Offset = "0x42962C0", VA = "0x42962C0")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6003CA8")]
	[Address(RVA = "0x4296360", Offset = "0x4296360", VA = "0x4296360")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__25))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6003CA9")]
	[Address(RVA = "0x4296180", Offset = "0x4296180", VA = "0x4296180")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6003CAA")]
	[Address(RVA = "0x42963F0", Offset = "0x42963F0", VA = "0x42963F0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003CAB")]
	[Address(RVA = "0x42965D0", Offset = "0x42965D0", VA = "0x42965D0")]
	public MultiSelectDropdownElement()
	{
	}
}
