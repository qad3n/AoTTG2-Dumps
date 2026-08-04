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

[Token(Token = "0x20001CC")]
internal sealed class AottgPublicProfileHoverRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x20001CD")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass22_0
	{
		[Token(Token = "0x40009BF")]
		[FieldOffset(Offset = "0x10")]
		public int version;

		[Token(Token = "0x40009C0")]
		[FieldOffset(Offset = "0x18")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x442F3F0", Offset = "0x442F3F0", VA = "0x442F3F0")]
		public _003C_003Ec__DisplayClass22_0()
		{
		}

		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x442F400", Offset = "0x442F400", VA = "0x442F400")]
		internal void _003CShowAfterDelay_003Eb__0(AottgPublicProfileFetchResponse response)
		{
		}
	}

	[Token(Token = "0x20001CE")]
	[CompilerGenerated]
	private sealed class _003CCloseAfterGrace_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009C1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009C2")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40009C3")]
		[FieldOffset(Offset = "0x20")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x17000165")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000AF2")]
			[Address(RVA = "0x442F600", Offset = "0x442F600", VA = "0x442F600", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000166")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000AF4")]
			[Address(RVA = "0x442F650", Offset = "0x442F650", VA = "0x442F650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x442F360", Offset = "0x442F360", VA = "0x442F360")]
		[DebuggerHidden]
		public _003CCloseAfterGrace_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x442F520", Offset = "0x442F520", VA = "0x442F520", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x442F530", Offset = "0x442F530", VA = "0x442F530", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x442F610", Offset = "0x442F610", VA = "0x442F610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001CF")]
	[CompilerGenerated]
	private sealed class _003CShowAfterDelay_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009C4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009C5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40009C6")]
		[FieldOffset(Offset = "0x20")]
		public int version;

		[Token(Token = "0x40009C7")]
		[FieldOffset(Offset = "0x28")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x40009C8")]
		[FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass22_0 _003C_003E8__1;

		[Token(Token = "0x17000167")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000AF8")]
			[Address(RVA = "0x442F970", Offset = "0x442F970", VA = "0x442F970", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000168")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000AFA")]
			[Address(RVA = "0x442F9C0", Offset = "0x442F9C0", VA = "0x442F9C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x442F380", Offset = "0x442F380", VA = "0x442F380")]
		[DebuggerHidden]
		public _003CShowAfterDelay_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x442F660", Offset = "0x442F660", VA = "0x442F660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x442F670", Offset = "0x442F670", VA = "0x442F670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x442F980", Offset = "0x442F980", VA = "0x442F980", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40009B6")]
	private const float HoverDelaySeconds = 0.2f;

	[Token(Token = "0x40009B7")]
	private const float CloseGraceSeconds = 0.18f;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x20")]
	private string _accountId;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _pending;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x30")]
	private Coroutine _pendingClose;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x38")]
	private int _version;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x3C")]
	private bool _anchorHover;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x3D")]
	private bool _cardHover;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x3E")]
	private bool _open;

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x442EEE0", Offset = "0x442EEE0", VA = "0x442EEE0")]
	public void Setup(string accountId)
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x442EEF0", Offset = "0x442EEF0", VA = "0x442EEF0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x442F020", Offset = "0x442F020", VA = "0x442F020", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x442F110", Offset = "0x442F110", VA = "0x442F110", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x442F160", Offset = "0x442F160", VA = "0x442F160", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x442F170", Offset = "0x442F170", VA = "0x442F170")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x442F230", Offset = "0x442F230", VA = "0x442F230")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x442EF60", Offset = "0x442EF60", VA = "0x442EF60")]
	private void Begin()
	{
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x442F030", Offset = "0x442F030", VA = "0x442F030")]
	private void EndOrDelay()
	{
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x442F2F0", Offset = "0x442F2F0", VA = "0x442F2F0")]
	[IteratorStateMachine(typeof(_003CCloseAfterGrace_003Ed__18))]
	private IEnumerator CloseAfterGrace()
	{
		return null;
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x442F180", Offset = "0x442F180", VA = "0x442F180")]
	private void CloseNow()
	{
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x442F2C0", Offset = "0x442F2C0", VA = "0x442F2C0")]
	private void CancelPending()
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x442EF30", Offset = "0x442EF30", VA = "0x442EF30")]
	private void CancelClose()
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x442F240", Offset = "0x442F240", VA = "0x442F240")]
	[IteratorStateMachine(typeof(_003CShowAfterDelay_003Ed__22))]
	private IEnumerator ShowAfterDelay(int version)
	{
		return null;
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x442F3A0", Offset = "0x442F3A0", VA = "0x442F3A0")]
	public void CardEnter()
	{
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x442F3D0", Offset = "0x442F3D0", VA = "0x442F3D0")]
	public void CardExit()
	{
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x442F3E0", Offset = "0x442F3E0", VA = "0x442F3E0")]
	public AottgPublicProfileHoverRuntime()
	{
	}
}
