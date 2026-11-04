// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSettingElement
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/DropdownSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs
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

[Token(Token = "0x2000745")]
internal class DropdownSettingElement : BaseSettingElement
{
	[Token(Token = "0x2000747")]
	[CompilerGenerated]
	private sealed class _003CWaitAndCloseOptions_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002420")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002421")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002422")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000CC4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600471F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CC5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004721")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600471C")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndCloseOptions_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600471D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600471E")]
		[Address(RVA = "0x221B160", Offset = "0x2219760", VA = "0x18221B160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004720")]
		[Address(RVA = "0x221B230", Offset = "0x2219830", VA = "0x18221B230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000748")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002423")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002424")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002425")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000CC6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004725")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CC7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004727")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004722")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004723")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004724")]
		[Address(RVA = "0x221B270", Offset = "0x2219870", VA = "0x18221B270", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004726")]
		[Address(RVA = "0x221B440", Offset = "0x2219A40", VA = "0x18221B440", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002412")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4002413")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4002414")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4002415")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4002416")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4002417")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4002418")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4002419")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool _scaleWithPanel;

	[Token(Token = "0x400241A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected UnityAction _onDropdownOptionSelect;

	[Token(Token = "0x400241B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected int[] _intOptionValues;

	[Token(Token = "0x400241C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x17000CC3")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004709")]
		[Address(RVA = "0x220BAA0", Offset = "0x220A0A0", VA = "0x18220BAA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600470A")]
	[Address(RVA = "0x220AA50", Offset = "0x2209050", VA = "0x18220AA50", Slot = "7")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x600470B")]
	[Address(RVA = "0x220A100", Offset = "0x2208700", VA = "0x18220A100")]
	public void FixScale()
	{
	}

	[Token(Token = "0x600470C")]
	[Address(RVA = "0x220A180", Offset = "0x2208780", VA = "0x18220A180")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x600470D")]
	[Address(RVA = "0x220A610", Offset = "0x2208C10", VA = "0x18220A610")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x600470E")]
	[Address(RVA = "0x220A290", Offset = "0x2208890", VA = "0x18220A290")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600470F")]
	[Address(RVA = "0x220A200", Offset = "0x2208800", VA = "0x18220A200")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004710")]
	[Address(RVA = "0x220B7D0", Offset = "0x2209DD0", VA = "0x18220B7D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004711")]
	[Address(RVA = "0x2209C40", Offset = "0x2208240", VA = "0x182209C40")]
	protected void CreateOptionButton(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6004712")]
	[Address(RVA = "0x220A540", Offset = "0x2208B40", VA = "0x18220A540")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6004713")]
	[Address(RVA = "0x220BA30", Offset = "0x220A030", VA = "0x18220BA30")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__22))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6004714")]
	[Address(RVA = "0x220B9C0", Offset = "0x2209FC0", VA = "0x18220B9C0")]
	[IteratorStateMachine(typeof(_003CWaitAndCloseOptions_003Ed__23))]
	private IEnumerator WaitAndCloseOptions()
	{
		return null;
	}

	[Token(Token = "0x6004715")]
	[Address(RVA = "0x220A310", Offset = "0x2208910", VA = "0x18220A310", Slot = "8")]
	protected virtual void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6004716")]
	[Address(RVA = "0x2209C00", Offset = "0x2208200", VA = "0x182209C00")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6004717")]
	[Address(RVA = "0x220B5F0", Offset = "0x2209BF0", VA = "0x18220B5F0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004718")]
	[Address(RVA = "0x2209BA0", Offset = "0x22081A0", VA = "0x182209BA0")]
	public DropdownSettingElement()
	{
	}
}
