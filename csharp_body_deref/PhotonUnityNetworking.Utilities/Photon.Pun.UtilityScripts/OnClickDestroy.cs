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

[Token(Token = "0x200001D")]
public class OnClickDestroy : MonoBehaviourPun, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x200001E")]
	[CompilerGenerated]
	private sealed class _003CDestroyRpc_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000079")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x20")]
		public OnClickDestroy _003C_003E4__this;

		[Token(Token = "0x17000007")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000A2")]
			[Address(RVA = "0x3F09490", Offset = "0x3F09490", VA = "0x3F09490", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000008")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x3F094E0", Offset = "0x3F094E0", VA = "0x3F094E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3F09380", Offset = "0x3F09380", VA = "0x3F09380")]
		[DebuggerHidden]
		public _003CDestroyRpc_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3F093B0", Offset = "0x3F093B0", VA = "0x3F093B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x3F093C0", Offset = "0x3F093C0", VA = "0x3F093C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x3F094A0", Offset = "0x3F094A0", VA = "0x3F094A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x28")]
	public PointerEventData.InputButton Button;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x2C")]
	public KeyCode ModifierKey;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x30")]
	public bool DestroyByRpc;

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3F09120", Offset = "0x3F09120", VA = "0x3F09120", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3F09310", Offset = "0x3F09310", VA = "0x3F09310")]
	[IteratorStateMachine(typeof(_003CDestroyRpc_003Ed__4))]
	[PunRPC]
	public IEnumerator DestroyRpc()
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x3F093A0", Offset = "0x3F093A0", VA = "0x3F093A0")]
	public OnClickDestroy()
	{
	}
}
