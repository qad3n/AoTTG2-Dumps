// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.OnClickRpc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Prototyping/OnClickRpc.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200001F")]
public class OnClickRpc : MonoBehaviourPun, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private sealed class _003CClickFlash_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x20")]
		public OnClickRpc _003C_003E4__this;

		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CwasEmissive_003E5__2;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x2C")]
		private float _003Cf_003E5__3;

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000AC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CClickFlash_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x1D605A0", Offset = "0x1D5EBA0", VA = "0x181D605A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x1D608E0", Offset = "0x1D5EEE0", VA = "0x181D608E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x28")]
	public PointerEventData.InputButton Button;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x2C")]
	public KeyCode ModifierKey;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x30")]
	public RpcTarget Target;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x38")]
	private Material originalMaterial;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x40")]
	private Color originalColor;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x50")]
	private bool isFlashing;

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x1D53E70", Offset = "0x1D52470", VA = "0x181D53E70", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x1D53DF0", Offset = "0x1D523F0", VA = "0x181D53DF0")]
	[PunRPC]
	public void ClickRpc()
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x1D53D80", Offset = "0x1D52380", VA = "0x181D53D80")]
	[IteratorStateMachine(typeof(_003CClickFlash_003Ed__8))]
	public IEnumerator ClickFlash()
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public OnClickRpc()
	{
	}
}
