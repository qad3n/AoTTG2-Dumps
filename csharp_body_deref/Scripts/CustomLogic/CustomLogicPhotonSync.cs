// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPhotonSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPhotonSync.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicPhotonSync.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20005D6")]
internal class CustomLogicPhotonSync : MonoBehaviourPunCallbacks, IPunObservable, IOnPhotonViewOwnerChange, IPhotonViewCallback, IPunInstantiateMagicCallback
{
	[Token(Token = "0x20005D7")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDynamicInit_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400191A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400191B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400191C")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x400191D")]
		[FieldOffset(Offset = "0x28")]
		public bool persistsOwnership;

		[Token(Token = "0x400191E")]
		[FieldOffset(Offset = "0x30")]
		public string csvScript;

		[Token(Token = "0x17000A1E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60038CE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A1F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60038D0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60038CB")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishDynamicInit_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60038CC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60038CD")]
		[Address(RVA = "0x20B54C0", Offset = "0x20B3AC0", VA = "0x1820B54C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60038CF")]
		[Address(RVA = "0x20B5590", Offset = "0x20B3B90", VA = "0x1820B5590", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005D8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishInit_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400191F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001920")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001921")]
		[FieldOffset(Offset = "0x20")]
		public int mapObjectId;

		[Token(Token = "0x4001922")]
		[FieldOffset(Offset = "0x28")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x17000A20")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60038D4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A21")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60038D6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60038D1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishInit_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60038D2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60038D3")]
		[Address(RVA = "0x20B55D0", Offset = "0x20B3BD0", VA = "0x1820B55D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60038D5")]
		[Address(RVA = "0x20B56E0", Offset = "0x20B3CE0", VA = "0x1820B56E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005D9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishSync_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001923")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001924")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001925")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x4001926")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x4001927")]
		[FieldOffset(Offset = "0x34")]
		public Quaternion rotation;

		[Token(Token = "0x17000A22")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60038DA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A23")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60038DC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60038D7")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishSync_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60038D8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60038D9")]
		[Address(RVA = "0x20B5720", Offset = "0x20B3D20", VA = "0x1820B5720", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60038DB")]
		[Address(RVA = "0x20B5790", Offset = "0x20B3D90", VA = "0x1820B5790", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400190A")]
	[FieldOffset(Offset = "0x28")]
	protected bool _syncTransforms;

	[Token(Token = "0x400190B")]
	[FieldOffset(Offset = "0x29")]
	protected bool _syncVelocity;

	[Token(Token = "0x400190C")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody _rigidbody;

	[Token(Token = "0x400190D")]
	[FieldOffset(Offset = "0x38")]
	public int ObjectId;

	[Token(Token = "0x400190E")]
	[FieldOffset(Offset = "0x40")]
	public PhotonView PhotonView;

	[Token(Token = "0x4001912")]
	[FieldOffset(Offset = "0x60")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x4001913")]
	[FieldOffset(Offset = "0x6C")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x4001914")]
	[FieldOffset(Offset = "0x7C")]
	protected Vector3 _correctVelocity;

	[Token(Token = "0x4001915")]
	[FieldOffset(Offset = "0x88")]
	protected bool _inited;

	[Token(Token = "0x4001916")]
	[FieldOffset(Offset = "0x90")]
	protected object[] _streamObjs;

	[Token(Token = "0x4001917")]
	[FieldOffset(Offset = "0x98")]
	protected bool _synced;

	[Token(Token = "0x4001918")]
	[FieldOffset(Offset = "0x99")]
	protected bool _persistsOwnership;

	[Token(Token = "0x4001919")]
	[FieldOffset(Offset = "0x9C")]
	protected SpawnIntent _spawnIntent;

	[Token(Token = "0x17000A17")]
	public bool SyncTransforms
	{
		[Token(Token = "0x600389F")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60038A0")]
		[Address(RVA = "0x20A9F20", Offset = "0x20A8520", VA = "0x1820A9F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000A18")]
	public bool SyncVelocity
	{
		[Token(Token = "0x60038A1")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60038A2")]
		[Address(RVA = "0x20A9F50", Offset = "0x20A8550", VA = "0x1820A9F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000A19")]
	protected Rigidbody Rigidbody
	{
		[Token(Token = "0x60038A3")]
		[Address(RVA = "0x20A9E40", Offset = "0x20A8440", VA = "0x1820A9E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A1A")]
	public MapObject MapObject
	{
		[Token(Token = "0x60038A4")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60038A5")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000A1B")]
	public CustomLogicMapObjectBuiltin CustomLogicMapObjectBuiltin
	{
		[Token(Token = "0x60038A6")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60038A7")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000A1C")]
	public CustomLogicNetworkViewBuiltin NetworkView
	{
		[Token(Token = "0x60038A8")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60038A9")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000A1D")]
	public float SmoothingDelay
	{
		[Token(Token = "0x60038AA")]
		[Address(RVA = "0x18B56E0", Offset = "0x18B3CE0", VA = "0x1818B56E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60038AB")]
	[Address(RVA = "0x20A7650", Offset = "0x20A5C50", VA = "0x1820A7650", Slot = "57")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60038AC")]
	[Address(RVA = "0x20A8880", Offset = "0x20A6E80", VA = "0x1820A8880", Slot = "58")]
	public new virtual void OnEnable()
	{
	}

	[Token(Token = "0x60038AD")]
	[Address(RVA = "0x20A8810", Offset = "0x20A6E10", VA = "0x1820A8810", Slot = "59")]
	public new virtual void OnDisable()
	{
	}

	[Token(Token = "0x60038AE")]
	[Address(RVA = "0x20A88F0", Offset = "0x20A6EF0", VA = "0x1820A88F0", Slot = "56")]
	public void OnPhotonInstantiate(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038AF")]
	[Address(RVA = "0x20A85B0", Offset = "0x20A6BB0", VA = "0x1820A85B0")]
	public void Init(int mapObjectId, bool rigidbody)
	{
	}

	[Token(Token = "0x60038B0")]
	[Address(RVA = "0x20A8380", Offset = "0x20A6980", VA = "0x1820A8380")]
	public void Init(int mapObjectId)
	{
	}

	[Token(Token = "0x60038B1")]
	[Address(RVA = "0x20A8180", Offset = "0x20A6780", VA = "0x1820A8180")]
	public void InitDynamic(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x60038B2")]
	[Address(RVA = "0x20A82D0", Offset = "0x20A68D0", VA = "0x1820A82D0")]
	[PunRPC]
	public void InitRPC(int mapObjectId, bool syncVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038B3")]
	[Address(RVA = "0x20A80C0", Offset = "0x20A66C0", VA = "0x1820A80C0")]
	[PunRPC]
	public void InitDynamicRPC(bool persistsOwnership, string csvScript, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038B4")]
	[Address(RVA = "0x20A7680", Offset = "0x20A5C80", VA = "0x1820A7680")]
	public void CreateAndSetupObject(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x60038B5")]
	[Address(RVA = "0x20A9BE0", Offset = "0x20A81E0", VA = "0x1820A9BE0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDynamicInit_003Ed__45))]
	public IEnumerator WaitAndFinishDynamicInit(bool persistsOwnership, string csvScript)
	{
		return null;
	}

	[Token(Token = "0x60038B6")]
	[Address(RVA = "0x20A9C60", Offset = "0x20A8260", VA = "0x1820A9C60")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishInit_003Ed__46))]
	public IEnumerator WaitAndFinishInit(int mapObjectId)
	{
		return null;
	}

	[Token(Token = "0x60038B7")]
	[Address(RVA = "0x20A7C00", Offset = "0x20A6200", VA = "0x1820A7C00")]
	private void FinishInit(int mapObjectId)
	{
	}

	[Token(Token = "0x60038B8")]
	[Address(RVA = "0x20A9630", Offset = "0x20A7C30", VA = "0x1820A9630")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038B9")]
	[Address(RVA = "0x20A96E0", Offset = "0x20A7CE0", VA = "0x1820A96E0")]
	public void SendMessage(Player player, string message)
	{
	}

	[Token(Token = "0x60038BA")]
	[Address(RVA = "0x20A9470", Offset = "0x20A7A70", VA = "0x1820A9470")]
	public void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x60038BB")]
	[Address(RVA = "0x20A9550", Offset = "0x20A7B50", VA = "0x1820A9550")]
	public void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x60038BC")]
	[Address(RVA = "0x20A90F0", Offset = "0x20A76F0", VA = "0x1820A90F0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x60038BD")]
	[Address(RVA = "0x20A97B0", Offset = "0x20A7DB0", VA = "0x1820A97B0")]
	[PunRPC]
	public void SyncRPC(Vector3 position, Quaternion rotation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038BE")]
	[Address(RVA = "0x20A9CE0", Offset = "0x20A82E0", VA = "0x1820A9CE0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishSync_003Ed__54))]
	public IEnumerator WaitAndFinishSync(Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x60038BF")]
	[Address(RVA = "0x20A8A10", Offset = "0x20A7010", VA = "0x1820A8A10", Slot = "60")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038C0")]
	[Address(RVA = "0x20A9920", Offset = "0x20A7F20", VA = "0x1820A9920", Slot = "61")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60038C1")]
	[Address(RVA = "0x20A7DA0", Offset = "0x20A63A0", VA = "0x1820A7DA0")]
	private Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60038C2")]
	[Address(RVA = "0x20A7E90", Offset = "0x20A6490", VA = "0x1820A7E90")]
	private Quaternion GetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60038C3")]
	[Address(RVA = "0x20A7F90", Offset = "0x20A6590", VA = "0x1820A7F90")]
	private Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60038C4")]
	[Address(RVA = "0x20A9430", Offset = "0x20A7A30", VA = "0x1820A9430", Slot = "54")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60038C5")]
	[Address(RVA = "0x20A9880", Offset = "0x20A7E80", VA = "0x1820A9880")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x60038C6")]
	[Address(RVA = "0x20A9380", Offset = "0x20A7980", VA = "0x1820A9380", Slot = "55")]
	private void Photon_002EPun_002EIOnPhotonViewOwnerChange_002EOnOwnerChange(Player newOwner, Player previousOwner)
	{
	}

	[Token(Token = "0x60038C7")]
	[Address(RVA = "0x20A92D0", Offset = "0x20A78D0", VA = "0x1820A92D0", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x60038C8")]
	[Address(RVA = "0x20A7B80", Offset = "0x20A6180", VA = "0x1820A7B80")]
	public void DestroyMe()
	{
	}

	[Token(Token = "0x60038C9")]
	[Address(RVA = "0x20A8780", Offset = "0x20A6D80", VA = "0x1820A8780")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x60038CA")]
	[Address(RVA = "0x20A9D70", Offset = "0x20A8370", VA = "0x1820A9D70")]
	public CustomLogicPhotonSync()
	{
	}
}
