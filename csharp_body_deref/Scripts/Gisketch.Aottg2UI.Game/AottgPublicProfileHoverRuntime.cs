using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers.PublicProfiles;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000199")]
internal sealed class AottgPublicProfileHoverRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x200019A")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass22_0
	{
		[Token(Token = "0x40008F9")]
		[FieldOffset(Offset = "0x10")]
		public int version;

		[Token(Token = "0x40008FA")]
		[FieldOffset(Offset = "0x18")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x6000970")]
		[Address(RVA = "0x40FDBD0", Offset = "0x40FDBD0", VA = "0x40FDBD0")]
		public _003C_003Ec__DisplayClass22_0()
		{
		}

		[Token(Token = "0x6000971")]
		[Address(RVA = "0x40FDBE0", Offset = "0x40FDBE0", VA = "0x40FDBE0")]
		internal void _003CShowAfterDelay_003Eb__0(AottgPublicProfileFetchResponse response)
		{
		}
	}

	[Token(Token = "0x200019B")]
	[CompilerGenerated]
	private sealed class _003CCloseAfterGrace_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40008FB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40008FC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40008FD")]
		[FieldOffset(Offset = "0x20")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x1700010F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000975")]
			[Address(RVA = "0x40FE330", Offset = "0x40FE330", VA = "0x40FE330", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000110")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000977")]
			[Address(RVA = "0x40FE380", Offset = "0x40FE380", VA = "0x40FE380", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000972")]
		[Address(RVA = "0x40FDA30", Offset = "0x40FDA30", VA = "0x40FDA30")]
		[DebuggerHidden]
		public _003CCloseAfterGrace_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000973")]
		[Address(RVA = "0x40FE250", Offset = "0x40FE250", VA = "0x40FE250", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000974")]
		[Address(RVA = "0x40FE260", Offset = "0x40FE260", VA = "0x40FE260", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000976")]
		[Address(RVA = "0x40FE340", Offset = "0x40FE340", VA = "0x40FE340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200019C")]
	[CompilerGenerated]
	private sealed class _003CShowAfterDelay_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40008FE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40008FF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000900")]
		[FieldOffset(Offset = "0x20")]
		public int version;

		[Token(Token = "0x4000901")]
		[FieldOffset(Offset = "0x28")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x4000902")]
		[FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass22_0 _003C_003E8__1;

		[Token(Token = "0x17000111")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600097B")]
			[Address(RVA = "0x40FEA40", Offset = "0x40FEA40", VA = "0x40FEA40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000112")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600097D")]
			[Address(RVA = "0x40FEA90", Offset = "0x40FEA90", VA = "0x40FEA90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000978")]
		[Address(RVA = "0x40FDB60", Offset = "0x40FDB60", VA = "0x40FDB60")]
		[DebuggerHidden]
		public _003CShowAfterDelay_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000979")]
		[Address(RVA = "0x40FE390", Offset = "0x40FE390", VA = "0x40FE390", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600097A")]
		[Address(RVA = "0x40FE3A0", Offset = "0x40FE3A0", VA = "0x40FE3A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600097C")]
		[Address(RVA = "0x40FEA50", Offset = "0x40FEA50", VA = "0x40FEA50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40008F0")]
	private const float HoverDelaySeconds = 0.2f;

	[Token(Token = "0x40008F1")]
	private const float CloseGraceSeconds = 0.18f;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x20")]
	private string _accountId;

	[Token(Token = "0x40008F3")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _pending;

	[Token(Token = "0x40008F4")]
	[FieldOffset(Offset = "0x30")]
	private Coroutine _pendingClose;

	[Token(Token = "0x40008F5")]
	[FieldOffset(Offset = "0x38")]
	private int _version;

	[Token(Token = "0x40008F6")]
	[FieldOffset(Offset = "0x3C")]
	private bool _anchorHover;

	[Token(Token = "0x40008F7")]
	[FieldOffset(Offset = "0x3D")]
	private bool _cardHover;

	[Token(Token = "0x40008F8")]
	[FieldOffset(Offset = "0x3E")]
	private bool _open;

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x40FD5B0", Offset = "0x40FD5B0", VA = "0x40FD5B0")]
	public void Setup(string accountId)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x40FD5C0", Offset = "0x40FD5C0", VA = "0x40FD5C0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x40FD6F0", Offset = "0x40FD6F0", VA = "0x40FD6F0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x40FD7E0", Offset = "0x40FD7E0", VA = "0x40FD7E0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x40FD830", Offset = "0x40FD830", VA = "0x40FD830", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x40FD840", Offset = "0x40FD840", VA = "0x40FD840")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x40FD900", Offset = "0x40FD900", VA = "0x40FD900")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x40FD630", Offset = "0x40FD630", VA = "0x40FD630")]
	private void Begin()
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x40FD700", Offset = "0x40FD700", VA = "0x40FD700")]
	private void EndOrDelay()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x40FD9C0", Offset = "0x40FD9C0", VA = "0x40FD9C0")]
	[IteratorStateMachine(typeof(_003CCloseAfterGrace_003Ed__18))]
	private IEnumerator CloseAfterGrace()
	{
		return null;
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x40FD850", Offset = "0x40FD850", VA = "0x40FD850")]
	private void CloseNow()
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x40FD990", Offset = "0x40FD990", VA = "0x40FD990")]
	private void CancelPending()
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x40FD600", Offset = "0x40FD600", VA = "0x40FD600")]
	private void CancelClose()
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x40FD910", Offset = "0x40FD910", VA = "0x40FD910")]
	[IteratorStateMachine(typeof(_003CShowAfterDelay_003Ed__22))]
	private IEnumerator ShowAfterDelay(int version)
	{
		return null;
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x40FDB80", Offset = "0x40FDB80", VA = "0x40FDB80")]
	public void CardEnter()
	{
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x40FDBB0", Offset = "0x40FDBB0", VA = "0x40FDBB0")]
	public void CardExit()
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x40FDBC0", Offset = "0x40FDBC0", VA = "0x40FDBC0")]
	public AottgPublicProfileHoverRuntime()
	{
	}
}
