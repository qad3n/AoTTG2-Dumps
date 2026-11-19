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

[Token(Token = "0x20007ED")]
internal class DropdownSettingElement : BaseSettingElement
{
	[Token(Token = "0x20007EF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndCloseOptions_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002791")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002792")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002793")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000D47")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004C41")]
			[Address(RVA = "0x5BF0690", Offset = "0x5BEF690", VA = "0x5BF0690", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D48")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004C43")]
			[Address(RVA = "0x5BF06E0", Offset = "0x5BEF6E0", VA = "0x5BF06E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004C3E")]
		[Address(RVA = "0x5BF00C0", Offset = "0x5BEF0C0", VA = "0x5BF00C0")]
		[DebuggerHidden]
		public _003CWaitAndCloseOptions_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004C3F")]
		[Address(RVA = "0x5BF05C0", Offset = "0x5BEF5C0", VA = "0x5BF05C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004C40")]
		[Address(RVA = "0x5BF05D0", Offset = "0x5BEF5D0", VA = "0x5BF05D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004C42")]
		[Address(RVA = "0x5BF06A0", Offset = "0x5BEF6A0", VA = "0x5BF06A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20007F0")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002794")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002795")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002796")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000D49")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004C47")]
			[Address(RVA = "0x5BF08B0", Offset = "0x5BEF8B0", VA = "0x5BF08B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D4A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004C49")]
			[Address(RVA = "0x5BF0900", Offset = "0x5BEF900", VA = "0x5BF0900", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004C44")]
		[Address(RVA = "0x5BF00A0", Offset = "0x5BEF0A0", VA = "0x5BF00A0")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004C45")]
		[Address(RVA = "0x5BF06F0", Offset = "0x5BEF6F0", VA = "0x5BF06F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004C46")]
		[Address(RVA = "0x5BF0700", Offset = "0x5BEF700", VA = "0x5BF0700", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004C48")]
		[Address(RVA = "0x5BF08C0", Offset = "0x5BEF8C0", VA = "0x5BF08C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002782")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4002783")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4002784")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4002785")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4002786")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4002787")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4002788")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4002789")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool _scaleWithPanel;

	[Token(Token = "0x400278A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected UnityAction _onDropdownOptionSelect;

	[Token(Token = "0x400278B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected int[] _intOptionValues;

	[Token(Token = "0x400278C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Func<string, string> _optionLabel;

	[Token(Token = "0x400278D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x17000D46")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C29")]
		[Address(RVA = "0x5BEF1D0", Offset = "0x5BEE1D0", VA = "0x5BEF1D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C2A")]
	[Address(RVA = "0x5BEE3B0", Offset = "0x5BED3B0", VA = "0x5BEE3B0", Slot = "7")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004C2B")]
	[Address(RVA = "0x5BEF7B0", Offset = "0x5BEE7B0", VA = "0x5BEF7B0")]
	public void SetOptionLabel(Func<string, string> optionLabel)
	{
	}

	[Token(Token = "0x6004C2C")]
	[Address(RVA = "0x5BEF270", Offset = "0x5BEE270", VA = "0x5BEF270")]
	protected string OptionLabel(string option)
	{
		return null;
	}

	[Token(Token = "0x6004C2D")]
	[Address(RVA = "0x5BEF7D0", Offset = "0x5BEE7D0", VA = "0x5BEF7D0")]
	public void FixScale()
	{
	}

	[Token(Token = "0x6004C2E")]
	[Address(RVA = "0x5BEF840", Offset = "0x5BEE840", VA = "0x5BEF840")]
	public bool IsOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6004C2F")]
	[Address(RVA = "0x5BEF8C0", Offset = "0x5BEE8C0", VA = "0x5BEF8C0")]
	protected void SetOptionsPosition()
	{
	}

	[Token(Token = "0x6004C30")]
	[Address(RVA = "0x5BEFC20", Offset = "0x5BEEC20", VA = "0x5BEFC20")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004C31")]
	[Address(RVA = "0x5BEFCA0", Offset = "0x5BEECA0", VA = "0x5BEFCA0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004C32")]
	[Address(RVA = "0x5BEFD20", Offset = "0x5BEED20", VA = "0x5BEFD20")]
	private void Update()
	{
	}

	[Token(Token = "0x6004C33")]
	[Address(RVA = "0x5BEF290", Offset = "0x5BEE290", VA = "0x5BEF290")]
	protected void CreateOptionButton(string option, int index, float width, float height, int fontSize, string themePanel)
	{
	}

	[Token(Token = "0x6004C34")]
	[Address(RVA = "0x5BEFF70", Offset = "0x5BEEF70", VA = "0x5BEFF70")]
	protected void OnDropdownSelectedButtonClick()
	{
	}

	[Token(Token = "0x6004C35")]
	[Address(RVA = "0x5BF0030", Offset = "0x5BEF030", VA = "0x5BF0030")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__25))]
	private IEnumerator WaitAndEnableOptions()
	{
		return null;
	}

	[Token(Token = "0x6004C36")]
	[Address(RVA = "0x5BEFEF0", Offset = "0x5BEEEF0", VA = "0x5BEFEF0")]
	[IteratorStateMachine(typeof(_003CWaitAndCloseOptions_003Ed__26))]
	private IEnumerator WaitAndCloseOptions()
	{
		return null;
	}

	[Token(Token = "0x6004C37")]
	[Address(RVA = "0x5BF00E0", Offset = "0x5BEF0E0", VA = "0x5BF00E0", Slot = "8")]
	protected virtual void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6004C38")]
	[Address(RVA = "0x5BEF0C0", Offset = "0x5BEE0C0", VA = "0x5BEF0C0")]
	protected void CloseOptions()
	{
	}

	[Token(Token = "0x6004C39")]
	[Address(RVA = "0x5BF0320", Offset = "0x5BEF320", VA = "0x5BF0320", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C3A")]
	[Address(RVA = "0x5BEF170", Offset = "0x5BEE170", VA = "0x5BEF170")]
	public DropdownSettingElement()
	{
	}
}
