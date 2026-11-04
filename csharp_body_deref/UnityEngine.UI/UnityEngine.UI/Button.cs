// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Button
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
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x2000003")]
[AddComponentMenu("UI (Canvas)/Button", 30)]
[UnityEngine.UGUIHelpURL("Button")]
public class Button : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler
{
	[Serializable]
	[Token(Token = "0x2000004")]
	public class ButtonClickedEvent : UnityEvent
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3061A30", Offset = "0x3060030", VA = "0x183061A30")]
		public ButtonClickedEvent()
		{
		}
	}

	[Token(Token = "0x2000005")]
	[CompilerGenerated]
	private sealed class _003COnFinishSubmit_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400000C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400000D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400000E")]
		[FieldOffset(Offset = "0x20")]
		public Button _003C_003E4__this;

		[Token(Token = "0x400000F")]
		[FieldOffset(Offset = "0x28")]
		private float _003CfadeTime_003E5__2;

		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000007")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000017")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000008")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000019")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000014")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003COnFinishSubmit_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000015")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000016")]
		[Address(RVA = "0x307CAA0", Offset = "0x307B0A0", VA = "0x18307CAA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000018")]
		[Address(RVA = "0x307CBD0", Offset = "0x307B1D0", VA = "0x18307CBD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x100")]
	[FormerlySerializedAs("onClick")]
	[SerializeField]
	private ButtonClickedEvent m_OnClick;

	[Token(Token = "0x17000006")]
	public ButtonClickedEvent onClick
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x1BD5920", Offset = "0x1BD3F20", VA = "0x181BD5920")]
		set
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3061C40", Offset = "0x3060240", VA = "0x183061C40")]
	protected Button()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3061BB0", Offset = "0x30601B0", VA = "0x183061BB0")]
	private void Press()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3061AB0", Offset = "0x30600B0", VA = "0x183061AB0", Slot = "41")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3061AE0", Offset = "0x30600E0", VA = "0x183061AE0", Slot = "42")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3061A40", Offset = "0x3060040", VA = "0x183061A40")]
	[IteratorStateMachine(typeof(_003COnFinishSubmit_003Ed__9))]
	private IEnumerator OnFinishSubmit()
	{
		return null;
	}
}
