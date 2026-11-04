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

[Token(Token = "0x2000754")]
internal class SliderInputSettingElement : BaseSettingElement
{
	[Token(Token = "0x2000755")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFixInputField_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002461")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002462")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002463")]
		[FieldOffset(Offset = "0x20")]
		public SliderInputSettingElement _003C_003E4__this;

		[Token(Token = "0x17000CD0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004780")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CD1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004782")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600477D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFixInputField_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600477E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600477F")]
		[Address(RVA = "0x223A4E0", Offset = "0x2238AE0", VA = "0x18223A4E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004781")]
		[Address(RVA = "0x223A630", Offset = "0x2238C30", VA = "0x18223A630", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400245C")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x400245D")]
	[FieldOffset(Offset = "0x40")]
	protected InputField _inputField;

	[Token(Token = "0x400245E")]
	[FieldOffset(Offset = "0x48")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x400245F")]
	[FieldOffset(Offset = "0x50")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x4002460")]
	[FieldOffset(Offset = "0x58")]
	protected bool _fixedInputField;

	[Token(Token = "0x17000CCF")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x600476F")]
		[Address(RVA = "0x221A860", Offset = "0x2218E60", VA = "0x18221A860", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004770")]
	[Address(RVA = "0x22198E0", Offset = "0x2217EE0", VA = "0x1822198E0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int decimalPlaces)
	{
	}

	[Token(Token = "0x6004771")]
	[Address(RVA = "0x2219520", Offset = "0x2217B20", VA = "0x182219520")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6004772")]
	[Address(RVA = "0x221A7E0", Offset = "0x2218DE0", VA = "0x18221A7E0")]
	[IteratorStateMachine(typeof(_003CWaitAndFixInputField_003Ed__9))]
	private IEnumerator WaitAndFixInputField()
	{
		return null;
	}

	[Token(Token = "0x6004773")]
	[Address(RVA = "0x22197C0", Offset = "0x2217DC0", VA = "0x1822197C0")]
	protected void OnSliderValueChanged(float value)
	{
	}

	[Token(Token = "0x6004774")]
	[Address(RVA = "0x22195D0", Offset = "0x2217BD0", VA = "0x1822195D0")]
	protected void OnInputValueChanged(string value)
	{
	}

	[Token(Token = "0x6004775")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6004776")]
	[Address(RVA = "0x221A690", Offset = "0x2218C90", VA = "0x18221A690")]
	protected void SyncSlider()
	{
	}

	[Token(Token = "0x6004777")]
	[Address(RVA = "0x221A4F0", Offset = "0x2218AF0", VA = "0x18221A4F0")]
	protected void SyncInput()
	{
	}

	[Token(Token = "0x6004778")]
	[Address(RVA = "0x221A3C0", Offset = "0x22189C0", VA = "0x18221A3C0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004779")]
	[Address(RVA = "0x221A850", Offset = "0x2218E50", VA = "0x18221A850")]
	public SliderInputSettingElement()
	{
	}
}
