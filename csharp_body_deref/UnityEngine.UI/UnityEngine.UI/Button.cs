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

[Token(Token = "0x2000005")]
[AddComponentMenu("UI/Button", 30)]
public class Button : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler
{
	[Serializable]
	[Token(Token = "0x2000006")]
	public class ButtonClickedEvent : UnityEvent
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4EF04C0", Offset = "0x4EF04C0", VA = "0x4EF04C0")]
		public ButtonClickedEvent()
		{
		}
	}

	[Token(Token = "0x2000007")]
	[CompilerGenerated]
	private sealed class _003COnFinishSubmit_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000012")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x20")]
		public Button _003C_003E4__this;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x28")]
		private float _003CfadeTime_003E5__2;

		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000007")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000019")]
			[Address(RVA = "0x4EF0910", Offset = "0x4EF0910", VA = "0x4EF0910", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000008")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600001B")]
			[Address(RVA = "0x4EF0960", Offset = "0x4EF0960", VA = "0x4EF0960", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4EF07D0", Offset = "0x4EF07D0", VA = "0x4EF07D0")]
		[DebuggerHidden]
		public _003COnFinishSubmit_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4EF07F0", Offset = "0x4EF07F0", VA = "0x4EF07F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4EF0800", Offset = "0x4EF0800", VA = "0x4EF0800", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4EF0920", Offset = "0x4EF0920", VA = "0x4EF0920", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x100")]
	[FormerlySerializedAs("onClick")]
	[SerializeField]
	private ButtonClickedEvent m_OnClick;

	[Token(Token = "0x17000006")]
	public ButtonClickedEvent onClick
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4EF04D0", Offset = "0x4EF04D0", VA = "0x4EF04D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4EF04E0", Offset = "0x4EF04E0", VA = "0x4EF04E0")]
		set
		{
		}
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4EF0430", Offset = "0x4EF0430", VA = "0x4EF0430")]
	protected Button()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4EF0500", Offset = "0x4EF0500", VA = "0x4EF0500")]
	private void Press()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4EF0580", Offset = "0x4EF0580", VA = "0x4EF0580", Slot = "41")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4EF0610", Offset = "0x4EF0610", VA = "0x4EF0610", Slot = "42")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4EF0760", Offset = "0x4EF0760", VA = "0x4EF0760")]
	[IteratorStateMachine(typeof(_003COnFinishSubmit_003Ed__9))]
	private IEnumerator OnFinishSubmit()
	{
		return null;
	}
}
