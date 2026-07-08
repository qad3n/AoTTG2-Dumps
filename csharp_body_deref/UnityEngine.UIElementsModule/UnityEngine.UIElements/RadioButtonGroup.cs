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
		[Address(RVA = "0x4CCC9F0", Offset = "0x4CCC9F0", VA = "0x4CCC9F0")]
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
		[Address(RVA = "0x4CCCA30", Offset = "0x4CCCA30", VA = "0x4CCCA30", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x4CCCB50", Offset = "0x4CCCB50", VA = "0x4CCCB50")]
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
			[Address(RVA = "0x4CCCEF0", Offset = "0x4CCCEF0", VA = "0x4CCCEF0", Slot = "6")]
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
			[Address(RVA = "0x4CCCF40", Offset = "0x4CCCF40", VA = "0x4CCCF40", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x4CCB6A0", Offset = "0x4CCB6A0", VA = "0x4CCB6A0")]
		[DebuggerHidden]
		public _003Cget_choices_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x4CCCC00", Offset = "0x4CCCC00", VA = "0x4CCCC00", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x4CCCC50", Offset = "0x4CCCC50", VA = "0x4CCCC50", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x4CCCEB0", Offset = "0x4CCCEB0", VA = "0x4CCCEB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x4CCCF00", Offset = "0x4CCCF00", VA = "0x4CCCF00", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x4CCCF50", Offset = "0x4CCCF50", VA = "0x4CCCF50", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x4CCCFF0", Offset = "0x4CCCFF0", VA = "0x4CCCFF0", Slot = "5")]
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
		[Address(RVA = "0x4CCB620", Offset = "0x4CCB620", VA = "0x4CCB620")]
		[IteratorStateMachine(typeof(_003Cget_choices_003Ed__8))]
		get
		{
			return null;
		}
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x4CCB6D0", Offset = "0x4CCB6D0", VA = "0x4CCB6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x4CCC160", Offset = "0x4CCC160", VA = "0x4CCC160", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4CCC170", Offset = "0x4CCC170", VA = "0x4CCC170")]
	public RadioButtonGroup()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4CCC180", Offset = "0x4CCC180", VA = "0x4CCC180")]
	public RadioButtonGroup(string label, [Optional] List<string> radioButtonChoices)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4CCC410", Offset = "0x4CCC410", VA = "0x4CCC410")]
	private void RadioButtonValueChangedCallback(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4CCC4F0", Offset = "0x4CCC4F0", VA = "0x4CCC4F0", Slot = "114")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4CCBF50", Offset = "0x4CCBF50", VA = "0x4CCBF50")]
	private void UpdateRadioButtons()
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4CCC540", Offset = "0x4CCC540", VA = "0x4CCC540", Slot = "115")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4CCC750", Offset = "0x4CCC750", VA = "0x4CCC750", Slot = "116")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}
}
