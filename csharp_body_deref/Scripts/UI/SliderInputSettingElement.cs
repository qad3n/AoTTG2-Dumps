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

[Token(Token = "0x20005FE")]
internal class SliderInputSettingElement : BaseSettingElement
{
	[Token(Token = "0x20005FF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFixInputField_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001CCE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001CCF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001CD0")]
		[FieldOffset(Offset = "0x20")]
		public SliderInputSettingElement _003C_003E4__this;

		[Token(Token = "0x17000B8B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CC7")]
			[Address(RVA = "0x4297E10", Offset = "0x4297E10", VA = "0x4297E10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B8C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CC9")]
			[Address(RVA = "0x4297E60", Offset = "0x4297E60", VA = "0x4297E60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003CC4")]
		[Address(RVA = "0x42976D0", Offset = "0x42976D0", VA = "0x42976D0")]
		[DebuggerHidden]
		public _003CWaitAndFixInputField_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003CC5")]
		[Address(RVA = "0x4297CD0", Offset = "0x4297CD0", VA = "0x4297CD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003CC6")]
		[Address(RVA = "0x4297CE0", Offset = "0x4297CE0", VA = "0x4297CE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003CC8")]
		[Address(RVA = "0x4297E20", Offset = "0x4297E20", VA = "0x4297E20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001CC9")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x4001CCA")]
	[FieldOffset(Offset = "0x40")]
	protected InputField _inputField;

	[Token(Token = "0x4001CCB")]
	[FieldOffset(Offset = "0x48")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x4001CCC")]
	[FieldOffset(Offset = "0x50")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x4001CCD")]
	[FieldOffset(Offset = "0x58")]
	protected bool _fixedInputField;

	[Token(Token = "0x17000B8A")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003CB6")]
		[Address(RVA = "0x42969F0", Offset = "0x42969F0", VA = "0x42969F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003CB7")]
	[Address(RVA = "0x4296A90", Offset = "0x4296A90", VA = "0x4296A90")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int decimalPlaces)
	{
	}

	[Token(Token = "0x6003CB8")]
	[Address(RVA = "0x4297620", Offset = "0x4297620", VA = "0x4297620")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6003CB9")]
	[Address(RVA = "0x42975B0", Offset = "0x42975B0", VA = "0x42975B0")]
	[IteratorStateMachine(typeof(_003CWaitAndFixInputField_003Ed__9))]
	private IEnumerator WaitAndFixInputField()
	{
		return null;
	}

	[Token(Token = "0x6003CBA")]
	[Address(RVA = "0x42976F0", Offset = "0x42976F0", VA = "0x42976F0")]
	protected void OnSliderValueChanged(float value)
	{
	}

	[Token(Token = "0x6003CBB")]
	[Address(RVA = "0x4297960", Offset = "0x4297960", VA = "0x4297960")]
	protected void OnInputValueChanged(string value)
	{
	}

	[Token(Token = "0x6003CBC")]
	[Address(RVA = "0x4297B40", Offset = "0x4297B40", VA = "0x4297B40")]
	protected void OnInputFinishEditing(string value)
	{
	}

	[Token(Token = "0x6003CBD")]
	[Address(RVA = "0x4297B60", Offset = "0x4297B60", VA = "0x4297B60")]
	protected void SyncSlider()
	{
	}

	[Token(Token = "0x6003CBE")]
	[Address(RVA = "0x4297800", Offset = "0x4297800", VA = "0x4297800")]
	protected void SyncInput()
	{
	}

	[Token(Token = "0x6003CBF")]
	[Address(RVA = "0x4297C60", Offset = "0x4297C60", VA = "0x4297C60", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003CC0")]
	[Address(RVA = "0x4297C80", Offset = "0x4297C80", VA = "0x4297C80")]
	public SliderInputSettingElement()
	{
	}
}
