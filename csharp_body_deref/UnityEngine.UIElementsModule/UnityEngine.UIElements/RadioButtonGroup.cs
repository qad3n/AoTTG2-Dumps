// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RadioButtonGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
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
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000FA")]
public class RadioButtonGroup : BaseField<int>, IGroupBox
{
	[Token(Token = "0x20000FB")]
	public new class UxmlFactory : UxmlFactory<RadioButtonGroup, UxmlTraits>
	{
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x4FF4320", Offset = "0x4FF4320", VA = "0x4FF4320")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000FC")]
	public new class UxmlTraits : BaseFieldTraits<int, UxmlIntAttributeDescription>
	{
		[Token(Token = "0x4000405")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_Choices;

		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x4FF4360", Offset = "0x4FF4360", VA = "0x4FF4360", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x4FF4480", Offset = "0x4FF4480", VA = "0x4FF4480")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000FD")]
	[CompilerGenerated]
	private sealed class _003Cget_choices_003Ed__8 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000406")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000407")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000408")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000409")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public RadioButtonGroup _003C_003E4__this;

		[Token(Token = "0x400040A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private List<RadioButton>.Enumerator _003C_003Es__1;

		[Token(Token = "0x400040B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private RadioButton _003CradioButton_003E5__2;

		[Token(Token = "0x1700012A")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60006C0")]
			[Address(RVA = "0x4FF4820", Offset = "0x4FF4820", VA = "0x4FF4820", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700012B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006C2")]
			[Address(RVA = "0x4FF4870", Offset = "0x4FF4870", VA = "0x4FF4870", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x4FF2FD0", Offset = "0x4FF2FD0", VA = "0x4FF2FD0")]
		[DebuggerHidden]
		public _003Cget_choices_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x4FF4530", Offset = "0x4FF4530", VA = "0x4FF4530", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x4FF4580", Offset = "0x4FF4580", VA = "0x4FF4580", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x4FF47E0", Offset = "0x4FF47E0", VA = "0x4FF47E0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x4FF4830", Offset = "0x4FF4830", VA = "0x4FF4830", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x4FF4880", Offset = "0x4FF4880", VA = "0x4FF4880", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x4FF4920", Offset = "0x4FF4920", VA = "0x4FF4920", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty choicesProperty;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public static readonly string containerUssClassName;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x450")]
	private List<RadioButton> m_RadioButtons;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x458")]
	private EventCallback<ChangeEvent<bool>> m_RadioButtonValueChangedCallback;

	[Token(Token = "0x4000404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x460")]
	private VisualElement m_RadioButtonContainer;

	[Token(Token = "0x17000128")]
	[CreateProperty]
	public IEnumerable<string> choices
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x4FF2F50", Offset = "0x4FF2F50", VA = "0x4FF2F50")]
		[IteratorStateMachine(typeof(_003Cget_choices_003Ed__8))]
		get
		{
			return null;
		}
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x4FF3000", Offset = "0x4FF3000", VA = "0x4FF3000")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x4FF3A90", Offset = "0x4FF3A90", VA = "0x4FF3A90", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4FF3AA0", Offset = "0x4FF3AA0", VA = "0x4FF3AA0")]
	public RadioButtonGroup()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4FF3AB0", Offset = "0x4FF3AB0", VA = "0x4FF3AB0")]
	public RadioButtonGroup(string label, [Optional] List<string> radioButtonChoices)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4FF3D40", Offset = "0x4FF3D40", VA = "0x4FF3D40")]
	private void RadioButtonValueChangedCallback(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4FF3E20", Offset = "0x4FF3E20", VA = "0x4FF3E20", Slot = "114")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4FF3880", Offset = "0x4FF3880", VA = "0x4FF3880")]
	private void UpdateRadioButtons()
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4FF3E70", Offset = "0x4FF3E70", VA = "0x4FF3E70", Slot = "115")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4FF4080", Offset = "0x4FF4080", VA = "0x4FF4080", Slot = "116")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}
}
