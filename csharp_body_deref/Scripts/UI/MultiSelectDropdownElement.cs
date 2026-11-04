// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiSelectDropdownElement
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000751")]
internal class MultiSelectDropdownElement : BaseSettingElement
{
	[Token(Token = "0x2000753")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002459")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400245A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400245B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MultiSelectDropdownElement _003C_003E4__this;

		[Token(Token = "0x17000CCD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600476C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CCE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600476E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004769")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600476A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600476B")]
		[Address(RVA = "0x221B480", Offset = "0x2219A80", VA = "0x18221B480", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600476D")]
		[Address(RVA = "0x221B680", Offset = "0x2219C80", VA = "0x18221B680", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002447")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4002448")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4002449")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x400244A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x400244B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x400244C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x400244D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x400244E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool _scaleWithPanel;

	[Token(Token = "0x400244F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected UnityAction _onSelectionChanged;

	[Token(Token = "0x4002450")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected HashSetSetting<int> _hashSetSetting;

	[Token(Token = "0x4002451")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected int[] _intOptionValues;

	[Token(Token = "0x4002452")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	protected Dictionary<int, Toggle> _toggles;

	[Token(Token = "0x4002453")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x4002454")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _themePanel;

	[Token(Token = "0x4002455")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000CCC")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004755")]
		[Address(RVA = "0x2216BD0", Offset = "0x22151D0", VA = "0x182216BD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004756")]
	[Address(RVA = "0x2215AF0", Offset = "0x22140F0", VA = "0x182215AF0")]
	public void Setup(HashSetSetting<int> setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onSelectionChanged, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004757")]
	[Address(RVA = "0x220A100", Offset = "0x2208700", VA = "0x18220A100")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6004758")]
	[Address(RVA = "0x22154D0", Offset = "0x2213AD0", VA = "0x1822154D0")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6004759")]
	[Address(RVA = "0x22157C0", Offset = "0x2213DC0", VA = "0x1822157C0")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x600475A")]
	[Address(RVA = "0x22155E0", Offset = "0x2213BE0", VA = "0x1822155E0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600475B")]
	[Address(RVA = "0x2215550", Offset = "0x2213B50", VA = "0x182215550")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600475C")]
	[Address(RVA = "0x2216880", Offset = "0x2214E80", VA = "0x182216880")]
	private void Update()
	{
	}

	[Token(Token = "0x600475D")]
	[Address(RVA = "0x2214950", Offset = "0x2212F50", VA = "0x182214950")]
	protected void CreateOptionToggle(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x600475E")]
	[Address(RVA = "0x2215700", Offset = "0x2213D00", VA = "0x182215700")]
	protected void OnToggleValueChanged(int index, bool value)
	{
	}

	[Token(Token = "0x600475F")]
	[Address(RVA = "0x2215490", Offset = "0x2213A90", VA = "0x182215490")]
	private int GetOptionValue(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6004760")]
	[Address(RVA = "0x2215660", Offset = "0x2213C60", VA = "0x182215660")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6004761")]
	[Address(RVA = "0x2216A90", Offset = "0x2215090", VA = "0x182216A90")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__28))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6004762")]
	[Address(RVA = "0x22148C0", Offset = "0x2212EC0", VA = "0x1822148C0")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6004763")]
	[Address(RVA = "0x22166D0", Offset = "0x2214CD0", VA = "0x1822166D0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004764")]
	[Address(RVA = "0x2216B00", Offset = "0x2215100", VA = "0x182216B00")]
	public MultiSelectDropdownElement()
	{
	}
}
