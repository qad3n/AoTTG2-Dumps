// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.OnClickDestroy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Prototyping/OnClickDestroy.cs
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

[Token(Token = "0x200001B")]
public class OnClickDestroy : MonoBehaviourPun, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x200001C")]
	[CompilerGenerated]
	private sealed class _003CDestroyRpc_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000074")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x20")]
		public OnClickDestroy _003C_003E4__this;

		[Token(Token = "0x17000007")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000A0")]
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
			[Token(Token = "0x60000A2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDestroyRpc_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x1D60920", Offset = "0x1D5EF20", VA = "0x181D60920", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x1D609F0", Offset = "0x1D5EFF0", VA = "0x181D609F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x28")]
	public PointerEventData.InputButton Button;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x2C")]
	public KeyCode ModifierKey;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x30")]
	public bool DestroyByRpc;

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x1D539E0", Offset = "0x1D51FE0", VA = "0x181D539E0", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x1D53970", Offset = "0x1D51F70", VA = "0x181D53970")]
	[IteratorStateMachine(typeof(_003CDestroyRpc_003Ed__4))]
	[PunRPC]
	public IEnumerator DestroyRpc()
	{
		return null;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public OnClickDestroy()
	{
	}
}
