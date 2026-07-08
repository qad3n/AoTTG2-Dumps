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

[Token(Token = "0x20005B9")]
internal class SliderInputSettingElement : BaseSettingElement
{
	[Token(Token = "0x20005BA")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFixInputField_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BBB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BBC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BBD")]
		[FieldOffset(Offset = "0x20")]
		public SliderInputSettingElement _003C_003E4__this;

		[Token(Token = "0x17000B21")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003AB7")]
			[Address(RVA = "0x3F89EA0", Offset = "0x3F89EA0", VA = "0x3F89EA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B22")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003AB9")]
			[Address(RVA = "0x3F89EF0", Offset = "0x3F89EF0", VA = "0x3F89EF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003AB4")]
		[Address(RVA = "0x3F89760", Offset = "0x3F89760", VA = "0x3F89760")]
		[DebuggerHidden]
		public _003CWaitAndFixInputField_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003AB5")]
		[Address(RVA = "0x3F89D60", Offset = "0x3F89D60", VA = "0x3F89D60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003AB6")]
		[Address(RVA = "0x3F89D70", Offset = "0x3F89D70", VA = "0x3F89D70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003AB8")]
		[Address(RVA = "0x3F89EB0", Offset = "0x3F89EB0", VA = "0x3F89EB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BB6")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x4001BB7")]
	[FieldOffset(Offset = "0x40")]
	protected InputField _inputField;

	[Token(Token = "0x4001BB8")]
	[FieldOffset(Offset = "0x48")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x4001BB9")]
	[FieldOffset(Offset = "0x50")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x4001BBA")]
	[FieldOffset(Offset = "0x58")]
	protected bool _fixedInputField;

	[Token(Token = "0x17000B20")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003AA6")]
		[Address(RVA = "0x3F88A80", Offset = "0x3F88A80", VA = "0x3F88A80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003AA7")]
	[Address(RVA = "0x3F88B20", Offset = "0x3F88B20", VA = "0x3F88B20")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int decimalPlaces)
	{
	}

	[Token(Token = "0x6003AA8")]
	[Address(RVA = "0x3F896B0", Offset = "0x3F896B0", VA = "0x3F896B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6003AA9")]
	[Address(RVA = "0x3F89640", Offset = "0x3F89640", VA = "0x3F89640")]
	[IteratorStateMachine(typeof(_003CWaitAndFixInputField_003Ed__9))]
	private IEnumerator WaitAndFixInputField()
	{
		return null;
	}

	[Token(Token = "0x6003AAA")]
	[Address(RVA = "0x3F89780", Offset = "0x3F89780", VA = "0x3F89780")]
	protected void OnSliderValueChanged(float value)
	{
	}

	[Token(Token = "0x6003AAB")]
	[Address(RVA = "0x3F899F0", Offset = "0x3F899F0", VA = "0x3F899F0")]
	protected void OnInputValueChanged(string value)
	{
	}

	[Token(Token = "0x6003AAC")]
	[Address(RVA = "0x3F89BD0", Offset = "0x3F89BD0", VA = "0x3F89BD0")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6003AAD")]
	[Address(RVA = "0x3F89BF0", Offset = "0x3F89BF0", VA = "0x3F89BF0")]
	protected void SyncSlider()
	{
	}

	[Token(Token = "0x6003AAE")]
	[Address(RVA = "0x3F89890", Offset = "0x3F89890", VA = "0x3F89890")]
	protected void SyncInput()
	{
	}

	[Token(Token = "0x6003AAF")]
	[Address(RVA = "0x3F89CF0", Offset = "0x3F89CF0", VA = "0x3F89CF0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003AB0")]
	[Address(RVA = "0x3F89D10", Offset = "0x3F89D10", VA = "0x3F89D10")]
	public SliderInputSettingElement()
	{
	}
}
