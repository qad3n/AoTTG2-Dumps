// ==================== AoTTG2 cross-reference ====================
// Type: UI.SliderInputSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SliderInputSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderInputSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007FC")]
internal class SliderInputSettingElement : BaseSettingElement
{
	[Token(Token = "0x20007FD")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFixInputField_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40027D2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40027D3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40027D4")]
		[FieldOffset(Offset = "0x20")]
		public SliderInputSettingElement _003C_003E4__this;

		[Token(Token = "0x17000D53")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004CA2")]
			[Address(RVA = "0x5BF73C0", Offset = "0x5BF63C0", VA = "0x5BF73C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D54")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004CA4")]
			[Address(RVA = "0x5BF7410", Offset = "0x5BF6410", VA = "0x5BF7410", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004C9F")]
		[Address(RVA = "0x5BF6C60", Offset = "0x5BF5C60", VA = "0x5BF6C60")]
		[DebuggerHidden]
		public _003CWaitAndFixInputField_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004CA0")]
		[Address(RVA = "0x5BF7270", Offset = "0x5BF6270", VA = "0x5BF7270", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004CA1")]
		[Address(RVA = "0x5BF7280", Offset = "0x5BF6280", VA = "0x5BF7280", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004CA3")]
		[Address(RVA = "0x5BF73D0", Offset = "0x5BF63D0", VA = "0x5BF73D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40027CD")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x40027CE")]
	[FieldOffset(Offset = "0x40")]
	protected InputField _inputField;

	[Token(Token = "0x40027CF")]
	[FieldOffset(Offset = "0x48")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x40027D0")]
	[FieldOffset(Offset = "0x50")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x40027D1")]
	[FieldOffset(Offset = "0x58")]
	protected bool _fixedInputField;

	[Token(Token = "0x17000D52")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C91")]
		[Address(RVA = "0x5BF6000", Offset = "0x5BF5000", VA = "0x5BF6000", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C92")]
	[Address(RVA = "0x5BF60A0", Offset = "0x5BF50A0", VA = "0x5BF60A0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int decimalPlaces)
	{
	}

	[Token(Token = "0x6004C93")]
	[Address(RVA = "0x5BF6BB0", Offset = "0x5BF5BB0", VA = "0x5BF6BB0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6004C94")]
	[Address(RVA = "0x5BF6B40", Offset = "0x5BF5B40", VA = "0x5BF6B40")]
	[IteratorStateMachine(typeof(_003CWaitAndFixInputField_003Ed__9))]
	private IEnumerator WaitAndFixInputField()
	{
		return null;
	}

	[Token(Token = "0x6004C95")]
	[Address(RVA = "0x5BF6C80", Offset = "0x5BF5C80", VA = "0x5BF6C80")]
	protected void OnSliderValueChanged(float value)
	{
	}

	[Token(Token = "0x6004C96")]
	[Address(RVA = "0x5BF6F00", Offset = "0x5BF5F00", VA = "0x5BF6F00")]
	protected void OnInputValueChanged(string value)
	{
	}

	[Token(Token = "0x6004C97")]
	[Address(RVA = "0x5BF70E0", Offset = "0x5BF60E0", VA = "0x5BF70E0")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6004C98")]
	[Address(RVA = "0x5BF7100", Offset = "0x5BF6100", VA = "0x5BF7100")]
	protected void SyncSlider()
	{
	}

	[Token(Token = "0x6004C99")]
	[Address(RVA = "0x5BF6DA0", Offset = "0x5BF5DA0", VA = "0x5BF6DA0")]
	protected void SyncInput()
	{
	}

	[Token(Token = "0x6004C9A")]
	[Address(RVA = "0x5BF7200", Offset = "0x5BF6200", VA = "0x5BF7200", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C9B")]
	[Address(RVA = "0x5BF7220", Offset = "0x5BF6220", VA = "0x5BF7220")]
	public SliderInputSettingElement()
	{
	}
}
