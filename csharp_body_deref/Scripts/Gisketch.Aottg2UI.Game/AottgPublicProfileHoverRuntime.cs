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

[Token(Token = "0x20002D5")]
internal sealed class AottgPublicProfileHoverRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x20002D6")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass22_0
	{
		[Token(Token = "0x4000E77")]
		[FieldOffset(Offset = "0x10")]
		public int version;

		[Token(Token = "0x4000E78")]
		[FieldOffset(Offset = "0x18")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x60011C0")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass22_0()
		{
		}

		[Token(Token = "0x60011C1")]
		[Address(RVA = "0x1E25030", Offset = "0x1E23630", VA = "0x181E25030")]
		internal void _003CShowAfterDelay_003Eb__0(AottgPublicProfileFetchResponse response)
		{
		}
	}

	[Token(Token = "0x20002D7")]
	[CompilerGenerated]
	private sealed class _003CCloseAfterGrace_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E79")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E7A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E7B")]
		[FieldOffset(Offset = "0x20")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x170001F3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60011C5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001F4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60011C7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60011C2")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CCloseAfterGrace_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60011C3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x1E222E0", Offset = "0x1E208E0", VA = "0x181E222E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60011C6")]
		[Address(RVA = "0x1E223B0", Offset = "0x1E209B0", VA = "0x181E223B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002D8")]
	[CompilerGenerated]
	private sealed class _003CShowAfterDelay_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E7E")]
		[FieldOffset(Offset = "0x20")]
		public int version;

		[Token(Token = "0x4000E7F")]
		[FieldOffset(Offset = "0x28")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x4000E80")]
		[FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass22_0 _003C_003E8__1;

		[Token(Token = "0x170001F5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60011CB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001F6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60011CD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CShowAfterDelay_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x1E223F0", Offset = "0x1E209F0", VA = "0x181E223F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x1E226F0", Offset = "0x1E20CF0", VA = "0x181E226F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000E6E")]
	private const float HoverDelaySeconds = 0.2f;

	[Token(Token = "0x4000E6F")]
	private const float CloseGraceSeconds = 0.18f;

	[Token(Token = "0x4000E70")]
	[FieldOffset(Offset = "0x20")]
	private string _accountId;

	[Token(Token = "0x4000E71")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _pending;

	[Token(Token = "0x4000E72")]
	[FieldOffset(Offset = "0x30")]
	private Coroutine _pendingClose;

	[Token(Token = "0x4000E73")]
	[FieldOffset(Offset = "0x38")]
	private int _version;

	[Token(Token = "0x4000E74")]
	[FieldOffset(Offset = "0x3C")]
	private bool _anchorHover;

	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x3D")]
	private bool _cardHover;

	[Token(Token = "0x4000E76")]
	[FieldOffset(Offset = "0x3E")]
	private bool _open;

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(string accountId)
	{
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x1E20EA0", Offset = "0x1E1F4A0", VA = "0x181E20EA0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x1E20E80", Offset = "0x1E1F480", VA = "0x181E20E80", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x1E20EA0", Offset = "0x1E1F4A0", VA = "0x181E20EA0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x1E20E80", Offset = "0x1E1F480", VA = "0x181E20E80", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x1E20E90", Offset = "0x1E1F490", VA = "0x181E20E90")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x1E20E90", Offset = "0x1E1F490", VA = "0x181E20E90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x1E20AF0", Offset = "0x1E1F0F0", VA = "0x181E20AF0")]
	private void Begin()
	{
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x1E20DA0", Offset = "0x1E1F3A0", VA = "0x181E20DA0")]
	private void EndOrDelay()
	{
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x1E20C80", Offset = "0x1E1F280", VA = "0x181E20C80")]
	[IteratorStateMachine(typeof(_003CCloseAfterGrace_003Ed__18))]
	private IEnumerator CloseAfterGrace()
	{
		return null;
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x1E20CF0", Offset = "0x1E1F2F0", VA = "0x181E20CF0")]
	private void CloseNow()
	{
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x1E20BF0", Offset = "0x1E1F1F0", VA = "0x181E20BF0")]
	private void CancelPending()
	{
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x1E20BB0", Offset = "0x1E1F1B0", VA = "0x181E20BB0")]
	private void CancelClose()
	{
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x1E20EF0", Offset = "0x1E1F4F0", VA = "0x181E20EF0")]
	[IteratorStateMachine(typeof(_003CShowAfterDelay_003Ed__22))]
	private IEnumerator ShowAfterDelay(int version)
	{
		return null;
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x1E20C30", Offset = "0x1E1F230", VA = "0x181E20C30")]
	public void CardEnter()
	{
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x1E20C70", Offset = "0x1E1F270", VA = "0x181E20C70")]
	public void CardExit()
	{
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgPublicProfileHoverRuntime()
	{
	}
}
