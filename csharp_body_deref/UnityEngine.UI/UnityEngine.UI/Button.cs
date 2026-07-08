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
		[Address(RVA = "0x4BC8B90", Offset = "0x4BC8B90", VA = "0x4BC8B90")]
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
			[Address(RVA = "0x4BC8FE0", Offset = "0x4BC8FE0", VA = "0x4BC8FE0", Slot = "4")]
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
			[Address(RVA = "0x4BC9030", Offset = "0x4BC9030", VA = "0x4BC9030", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4BC8EA0", Offset = "0x4BC8EA0", VA = "0x4BC8EA0")]
		[DebuggerHidden]
		public _003COnFinishSubmit_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4BC8EC0", Offset = "0x4BC8EC0", VA = "0x4BC8EC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4BC8ED0", Offset = "0x4BC8ED0", VA = "0x4BC8ED0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4BC8FF0", Offset = "0x4BC8FF0", VA = "0x4BC8FF0", Slot = "8")]
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
		[Address(RVA = "0x4BC8BA0", Offset = "0x4BC8BA0", VA = "0x4BC8BA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4BC8BB0", Offset = "0x4BC8BB0", VA = "0x4BC8BB0")]
		set
		{
		}
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4BC8B00", Offset = "0x4BC8B00", VA = "0x4BC8B00")]
	protected Button()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4BC8BD0", Offset = "0x4BC8BD0", VA = "0x4BC8BD0")]
	private void Press()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4BC8C50", Offset = "0x4BC8C50", VA = "0x4BC8C50", Slot = "41")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4BC8CE0", Offset = "0x4BC8CE0", VA = "0x4BC8CE0", Slot = "42")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4BC8E30", Offset = "0x4BC8E30", VA = "0x4BC8E30")]
	[IteratorStateMachine(typeof(_003COnFinishSubmit_003Ed__9))]
	private IEnumerator OnFinishSubmit()
	{
		return null;
	}
}
