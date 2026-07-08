using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000021")]
public class OnClickRpc : MonoBehaviourPun, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x2000022")]
	[CompilerGenerated]
	private sealed class _003CClickFlash_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400008B")]
		[FieldOffset(Offset = "0x20")]
		public OnClickRpc _003C_003E4__this;

		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CwasEmissive_003E5__2;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x2C")]
		private float _003Cf_003E5__3;

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0x3BF18A0", Offset = "0x3BF18A0", VA = "0x3BF18A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x3BF18F0", Offset = "0x3BF18F0", VA = "0x3BF18F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3BF1550", Offset = "0x3BF1550", VA = "0x3BF1550")]
		[DebuggerHidden]
		public _003CClickFlash_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3BF1580", Offset = "0x3BF1580", VA = "0x3BF1580", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3BF1590", Offset = "0x3BF1590", VA = "0x3BF1590", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x3BF18B0", Offset = "0x3BF18B0", VA = "0x3BF18B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x28")]
	public PointerEventData.InputButton Button;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x2C")]
	public KeyCode ModifierKey;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x30")]
	public RpcTarget Target;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x38")]
	private Material originalMaterial;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x40")]
	private Color originalColor;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x50")]
	private bool isFlashing;

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3BF12A0", Offset = "0x3BF12A0", VA = "0x3BF12A0", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3BF1460", Offset = "0x3BF1460", VA = "0x3BF1460")]
	[PunRPC]
	public void ClickRpc()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3BF14E0", Offset = "0x3BF14E0", VA = "0x3BF14E0")]
	[IteratorStateMachine(typeof(_003CClickFlash_003Ed__8))]
	public IEnumerator ClickFlash()
	{
		return null;
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3BF1570", Offset = "0x3BF1570", VA = "0x3BF1570")]
	public OnClickRpc()
	{
	}
}
