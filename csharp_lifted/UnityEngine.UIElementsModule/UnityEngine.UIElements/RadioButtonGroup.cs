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
using UnityEngine.Pool;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000135")]
public class RadioButtonGroup : BaseField<int>, IGroupBox
{
	[Token(Token = "0x2000136")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<RadioButtonGroup, UxmlTraits>
	{
		[Token(Token = "0x60008EE")]
		[Address(RVA = "0x6C2A6B0", Offset = "0x6C296B0", VA = "0x6C2A6B0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000137")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseFieldTraits<int, UxmlIntAttributeDescription>
	{
		[Token(Token = "0x400056B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private UxmlStringAttributeDescription m_Choices;

		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x6C2A6F0", Offset = "0x6C296F0", VA = "0x6C2A6F0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x6C2A810", Offset = "0x6C29810", VA = "0x6C2A810")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000138")]
	[CompilerGenerated]
	private sealed class _003Cget_choices_003Ed__17 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400056C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400056D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x400056E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400056F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public RadioButtonGroup _003C_003E4__this;

		[Token(Token = "0x4000570")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private PooledObject<List<RadioButton>> _003C__003E5__1;

		[Token(Token = "0x4000571")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private List<RadioButton> _003CradioButtons_003E5__2;

		[Token(Token = "0x4000572")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private List<RadioButton>.Enumerator _003C_003Es__3;

		[Token(Token = "0x4000573")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private RadioButton _003Cbutton_003E5__4;

		[Token(Token = "0x170001A4")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60008F6")]
			[Address(RVA = "0x6C2AD80", Offset = "0x6C29D80", VA = "0x6C2AD80", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60008F8")]
			[Address(RVA = "0x6C2ADD0", Offset = "0x6C29DD0", VA = "0x6C2ADD0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x6C2A8C0", Offset = "0x6C298C0", VA = "0x6C2A8C0")]
		[DebuggerHidden]
		public _003Cget_choices_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x6C2A8F0", Offset = "0x6C298F0", VA = "0x6C2A8F0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x6C2AA20", Offset = "0x6C29A20", VA = "0x6C2AA20", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x6C2AD40", Offset = "0x6C29D40", VA = "0x6C2AD40")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60008F5")]
		[Address(RVA = "0x6C2AD00", Offset = "0x6C29D00", VA = "0x6C2AD00")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60008F7")]
		[Address(RVA = "0x6C2AD90", Offset = "0x6C29D90", VA = "0x6C2AD90", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60008F9")]
		[Address(RVA = "0x6C2ADE0", Offset = "0x6C29DE0", VA = "0x6C2ADE0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x6C2AE80", Offset = "0x6C29E80", VA = "0x6C2AE80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400055E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId choicesProperty;

	[Token(Token = "0x400055F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000560")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public static readonly string containerUssClassName;

	[Token(Token = "0x4000561")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal static readonly string containerName;

	[Token(Token = "0x4000562")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	internal static readonly string choicesContainerName;

	[Token(Token = "0x4000563")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private VisualElement m_ChoiceRadioButtonContainer;

	[Token(Token = "0x4000564")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x360")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000565")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	private UQueryBuilder<RadioButton> m_GetAllRadioButtonsQuery;

	[Token(Token = "0x4000566")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x398")]
	private readonly List<RadioButton> m_RegisteredRadioButtons;

	[Token(Token = "0x4000567")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A0")]
	private RadioButton m_SelectedRadioButton;

	[Token(Token = "0x4000568")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A8")]
	private EventCallback<ChangeEvent<bool>> m_RadioButtonValueChangedCallback;

	[Token(Token = "0x4000569")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3B0")]
	private bool m_UpdatingButtons;

	[Token(Token = "0x400056A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3B8")]
	private List<string> m_Choices;

	[Token(Token = "0x170001A1")]
	[CreateProperty]
	public IEnumerable<string> choices
	{
		[Token(Token = "0x60008DB")]
		[Address(RVA = "0x6C28850", Offset = "0x6C27850", VA = "0x6C28850")]
		[IteratorStateMachine(typeof(_003Cget_choices_003Ed__17))]
		get
		{
			return null;
		}
		[Token(Token = "0x60008DC")]
		[Address(RVA = "0x6C288C0", Offset = "0x6C278C0", VA = "0x6C288C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	internal List<string> choicesList
	{
		[Token(Token = "0x60008DE")]
		[Address(RVA = "0x6C29320", Offset = "0x6C28320", VA = "0x6C29320")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60008DF")]
		[Address(RVA = "0x6C29330", Offset = "0x6C28330", VA = "0x6C29330", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x6C28F10", Offset = "0x6C27F10", VA = "0x6C28F10")]
	private void RebuildRadioButtonsFromChoices()
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x6C29340", Offset = "0x6C28340", VA = "0x6C29340")]
	public RadioButtonGroup()
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x6C29350", Offset = "0x6C28350", VA = "0x6C29350")]
	public RadioButtonGroup(string label, [Optional] List<string> radioButtonChoices)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x6C29770", Offset = "0x6C28770", VA = "0x6C29770")]
	private void RadioButtonValueChangedCallback(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x6C29A40", Offset = "0x6C28A40", VA = "0x6C29A40", Slot = "159")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x6C29980", Offset = "0x6C28980", VA = "0x6C29980")]
	private void GetAllRadioButtons(List<RadioButton> radioButtons)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x6C29A90", Offset = "0x6C28A90", VA = "0x6C29A90")]
	private void UpdateRadioButtons(bool notify)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x6C29210", Offset = "0x6C28210", VA = "0x6C29210")]
	private void ScheduleRadioButtons()
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x6C2A010", Offset = "0x6C29010", VA = "0x6C2A010")]
	private void RegisterRadioButton(RadioButton radioButton)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x6C2A290", Offset = "0x6C29290", VA = "0x6C2A290")]
	private void UnregisterRadioButton(RadioButton radioButton)
	{
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x6C2A350", Offset = "0x6C29350", VA = "0x6C2A350", Slot = "160")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x6C2A400", Offset = "0x6C29400", VA = "0x6C2A400", Slot = "161")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}
}
