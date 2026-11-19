// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000332")]
internal sealed class AottgPublicProfileHoverRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x2000333")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass22_0
	{
		[Token(Token = "0x4001005")]
		[FieldOffset(Offset = "0x10")]
		public int version;

		[Token(Token = "0x4001006")]
		[FieldOffset(Offset = "0x18")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x6001412")]
		[Address(RVA = "0x580CC80", Offset = "0x580BC80", VA = "0x580CC80")]
		public _003C_003Ec__DisplayClass22_0()
		{
		}

		[Token(Token = "0x6001413")]
		[Address(RVA = "0x580CC90", Offset = "0x580BC90", VA = "0x580CC90")]
		internal void _003CShowAfterDelay_003Eb__0(AottgPublicProfileFetchResponse response)
		{
		}
	}

	[Token(Token = "0x2000334")]
	[CompilerGenerated]
	private sealed class _003CCloseAfterGrace_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001007")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001008")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001009")]
		[FieldOffset(Offset = "0x20")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x17000230")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001417")]
			[Address(RVA = "0x580D3C0", Offset = "0x580C3C0", VA = "0x580D3C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000231")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001419")]
			[Address(RVA = "0x580D410", Offset = "0x580C410", VA = "0x580D410", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001414")]
		[Address(RVA = "0x580CAE0", Offset = "0x580BAE0", VA = "0x580CAE0")]
		[DebuggerHidden]
		public _003CCloseAfterGrace_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001415")]
		[Address(RVA = "0x580D2F0", Offset = "0x580C2F0", VA = "0x580D2F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001416")]
		[Address(RVA = "0x580D300", Offset = "0x580C300", VA = "0x580D300", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001418")]
		[Address(RVA = "0x580D3D0", Offset = "0x580C3D0", VA = "0x580D3D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000335")]
	[CompilerGenerated]
	private sealed class _003CShowAfterDelay_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400100A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400100B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400100C")]
		[FieldOffset(Offset = "0x20")]
		public int version;

		[Token(Token = "0x400100D")]
		[FieldOffset(Offset = "0x28")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x400100E")]
		[FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass22_0 _003C_003E8__1;

		[Token(Token = "0x17000232")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600141D")]
			[Address(RVA = "0x580DB70", Offset = "0x580CB70", VA = "0x580DB70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000233")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600141F")]
			[Address(RVA = "0x580DBC0", Offset = "0x580CBC0", VA = "0x580DBC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600141A")]
		[Address(RVA = "0x580CC10", Offset = "0x580BC10", VA = "0x580CC10")]
		[DebuggerHidden]
		public _003CShowAfterDelay_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600141B")]
		[Address(RVA = "0x580D420", Offset = "0x580C420", VA = "0x580D420", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600141C")]
		[Address(RVA = "0x580D430", Offset = "0x580C430", VA = "0x580D430", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600141E")]
		[Address(RVA = "0x580DB80", Offset = "0x580CB80", VA = "0x580DB80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000FFC")]
	private const float HoverDelaySeconds = 0.2f;

	[Token(Token = "0x4000FFD")]
	private const float CloseGraceSeconds = 0.18f;

	[Token(Token = "0x4000FFE")]
	[FieldOffset(Offset = "0x20")]
	private string _accountId;

	[Token(Token = "0x4000FFF")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _pending;

	[Token(Token = "0x4001000")]
	[FieldOffset(Offset = "0x30")]
	private Coroutine _pendingClose;

	[Token(Token = "0x4001001")]
	[FieldOffset(Offset = "0x38")]
	private int _version;

	[Token(Token = "0x4001002")]
	[FieldOffset(Offset = "0x3C")]
	private bool _anchorHover;

	[Token(Token = "0x4001003")]
	[FieldOffset(Offset = "0x3D")]
	private bool _cardHover;

	[Token(Token = "0x4001004")]
	[FieldOffset(Offset = "0x3E")]
	private bool _open;

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x580C670", Offset = "0x580B670", VA = "0x580C670")]
	public void Setup(string accountId)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x580C680", Offset = "0x580B680", VA = "0x580C680", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x580C7C0", Offset = "0x580B7C0", VA = "0x580C7C0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x580C8A0", Offset = "0x580B8A0", VA = "0x580C8A0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x580C8F0", Offset = "0x580B8F0", VA = "0x580C8F0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x580C900", Offset = "0x580B900", VA = "0x580C900")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x580C9C0", Offset = "0x580B9C0", VA = "0x580C9C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x580C700", Offset = "0x580B700", VA = "0x580C700")]
	private void Begin()
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x580C7D0", Offset = "0x580B7D0", VA = "0x580C7D0")]
	private void EndOrDelay()
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x580CA70", Offset = "0x580BA70", VA = "0x580CA70")]
	[IteratorStateMachine(typeof(_003CCloseAfterGrace_003Ed__18))]
	private IEnumerator CloseAfterGrace()
	{
		return null;
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x580C910", Offset = "0x580B910", VA = "0x580C910")]
	private void CloseNow()
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x580CA40", Offset = "0x580BA40", VA = "0x580CA40")]
	private void CancelPending()
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x580C6D0", Offset = "0x580B6D0", VA = "0x580C6D0")]
	private void CancelClose()
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x580C9D0", Offset = "0x580B9D0", VA = "0x580C9D0")]
	[IteratorStateMachine(typeof(_003CShowAfterDelay_003Ed__22))]
	private IEnumerator ShowAfterDelay(int version)
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x580CC30", Offset = "0x580BC30", VA = "0x580CC30")]
	public void CardEnter()
	{
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x580CC60", Offset = "0x580BC60", VA = "0x580CC60")]
	public void CardExit()
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x580CC70", Offset = "0x580BC70", VA = "0x580CC70")]
	public AottgPublicProfileHoverRuntime()
	{
	}
}
