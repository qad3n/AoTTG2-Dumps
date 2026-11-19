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

[Token(Token = "0x2000635")]
internal class CustomLogicPhotonSync : MonoBehaviourPunCallbacks, IPunObservable, IOnPhotonViewOwnerChange, IPhotonViewCallback, IPunInstantiateMagicCallback
{
	[Token(Token = "0x2000636")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDynamicInit_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ABB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ABC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ABD")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x4001ABE")]
		[FieldOffset(Offset = "0x28")]
		public bool persistsOwnership;

		[Token(Token = "0x4001ABF")]
		[FieldOffset(Offset = "0x30")]
		public string csvScript;

		[Token(Token = "0x17000A66")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B5C")]
			[Address(RVA = "0x5A71AA0", Offset = "0x5A70AA0", VA = "0x5A71AA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A67")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B5E")]
			[Address(RVA = "0x5A71AF0", Offset = "0x5A70AF0", VA = "0x5A71AF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003B59")]
		[Address(RVA = "0x5A70310", Offset = "0x5A6F310", VA = "0x5A70310")]
		[DebuggerHidden]
		public _003CWaitAndFinishDynamicInit_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003B5A")]
		[Address(RVA = "0x5A719E0", Offset = "0x5A709E0", VA = "0x5A719E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003B5B")]
		[Address(RVA = "0x5A719F0", Offset = "0x5A709F0", VA = "0x5A719F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003B5D")]
		[Address(RVA = "0x5A71AB0", Offset = "0x5A70AB0", VA = "0x5A71AB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000637")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishInit_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AC0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AC1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AC2")]
		[FieldOffset(Offset = "0x20")]
		public int mapObjectId;

		[Token(Token = "0x4001AC3")]
		[FieldOffset(Offset = "0x28")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x17000A68")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B62")]
			[Address(RVA = "0x5A71C20", Offset = "0x5A70C20", VA = "0x5A71C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A69")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B64")]
			[Address(RVA = "0x5A71C70", Offset = "0x5A70C70", VA = "0x5A71C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003B5F")]
		[Address(RVA = "0x5A70330", Offset = "0x5A6F330", VA = "0x5A70330")]
		[DebuggerHidden]
		public _003CWaitAndFinishInit_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003B60")]
		[Address(RVA = "0x5A71B00", Offset = "0x5A70B00", VA = "0x5A71B00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003B61")]
		[Address(RVA = "0x5A71B10", Offset = "0x5A70B10", VA = "0x5A71B10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003B63")]
		[Address(RVA = "0x5A71C30", Offset = "0x5A70C30", VA = "0x5A71C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000638")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishSync_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AC4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AC5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AC6")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x4001AC7")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x4001AC8")]
		[FieldOffset(Offset = "0x34")]
		public Quaternion rotation;

		[Token(Token = "0x17000A6A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B68")]
			[Address(RVA = "0x5A71CF0", Offset = "0x5A70CF0", VA = "0x5A71CF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A6B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B6A")]
			[Address(RVA = "0x5A71D40", Offset = "0x5A70D40", VA = "0x5A71D40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003B65")]
		[Address(RVA = "0x5A70CB0", Offset = "0x5A6FCB0", VA = "0x5A70CB0")]
		[DebuggerHidden]
		public _003CWaitAndFinishSync_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003B66")]
		[Address(RVA = "0x5A71C80", Offset = "0x5A70C80", VA = "0x5A71C80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003B67")]
		[Address(RVA = "0x5A71C90", Offset = "0x5A70C90", VA = "0x5A71C90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003B69")]
		[Address(RVA = "0x5A71D00", Offset = "0x5A70D00", VA = "0x5A71D00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AAB")]
	[FieldOffset(Offset = "0x28")]
	protected bool _syncTransforms;

	[Token(Token = "0x4001AAC")]
	[FieldOffset(Offset = "0x29")]
	protected bool _syncVelocity;

	[Token(Token = "0x4001AAD")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody _rigidbody;

	[Token(Token = "0x4001AAE")]
	[FieldOffset(Offset = "0x38")]
	public int ObjectId;

	[Token(Token = "0x4001AAF")]
	[FieldOffset(Offset = "0x40")]
	public PhotonView PhotonView;

	[Token(Token = "0x4001AB3")]
	[FieldOffset(Offset = "0x60")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x4001AB4")]
	[FieldOffset(Offset = "0x6C")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x4001AB5")]
	[FieldOffset(Offset = "0x7C")]
	protected Vector3 _correctVelocity;

	[Token(Token = "0x4001AB6")]
	[FieldOffset(Offset = "0x88")]
	protected bool _inited;

	[Token(Token = "0x4001AB7")]
	[FieldOffset(Offset = "0x90")]
	protected object[] _streamObjs;

	[Token(Token = "0x4001AB8")]
	[FieldOffset(Offset = "0x98")]
	protected bool _synced;

	[Token(Token = "0x4001AB9")]
	[FieldOffset(Offset = "0x99")]
	protected bool _persistsOwnership;

	[Token(Token = "0x4001ABA")]
	[FieldOffset(Offset = "0x9C")]
	protected SpawnIntent _spawnIntent;

	[Token(Token = "0x17000A5F")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6003B2D")]
		[Address(RVA = "0x5A6EE90", Offset = "0x5A6DE90", VA = "0x5A6EE90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B2E")]
		[Address(RVA = "0x5A6EEA0", Offset = "0x5A6DEA0", VA = "0x5A6EEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A60")]
	public bool SyncVelocity
	{
		[Token(Token = "0x6003B2F")]
		[Address(RVA = "0x5A6EEC0", Offset = "0x5A6DEC0", VA = "0x5A6EEC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B30")]
		[Address(RVA = "0x5A6EED0", Offset = "0x5A6DED0", VA = "0x5A6EED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A61")]
	protected Rigidbody Rigidbody
	{
		[Token(Token = "0x6003B31")]
		[Address(RVA = "0x5A6EEF0", Offset = "0x5A6DEF0", VA = "0x5A6EEF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A62")]
	public MapObject MapObject
	{
		[Token(Token = "0x6003B32")]
		[Address(RVA = "0x5A6EFD0", Offset = "0x5A6DFD0", VA = "0x5A6EFD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B33")]
		[Address(RVA = "0x5A6EFE0", Offset = "0x5A6DFE0", VA = "0x5A6EFE0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000A63")]
	public CustomLogicMapObjectBuiltin CustomLogicMapObjectBuiltin
	{
		[Token(Token = "0x6003B34")]
		[Address(RVA = "0x5A6EFF0", Offset = "0x5A6DFF0", VA = "0x5A6EFF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B35")]
		[Address(RVA = "0x5A6F000", Offset = "0x5A6E000", VA = "0x5A6F000")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000A64")]
	public CustomLogicNetworkViewBuiltin NetworkView
	{
		[Token(Token = "0x6003B36")]
		[Address(RVA = "0x5A6F010", Offset = "0x5A6E010", VA = "0x5A6F010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B37")]
		[Address(RVA = "0x5A6F020", Offset = "0x5A6E020", VA = "0x5A6F020")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000A65")]
	public float SmoothingDelay
	{
		[Token(Token = "0x6003B38")]
		[Address(RVA = "0x5A6F030", Offset = "0x5A6E030", VA = "0x5A6F030")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003B39")]
	[Address(RVA = "0x5A6F040", Offset = "0x5A6E040", VA = "0x5A6F040", Slot = "57")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003B3A")]
	[Address(RVA = "0x5A6F060", Offset = "0x5A6E060", VA = "0x5A6F060", Slot = "58")]
	public new virtual void OnEnable()
	{
	}

	[Token(Token = "0x6003B3B")]
	[Address(RVA = "0x5A6F0D0", Offset = "0x5A6E0D0", VA = "0x5A6F0D0", Slot = "59")]
	public new virtual void OnDisable()
	{
	}

	[Token(Token = "0x6003B3C")]
	[Address(RVA = "0x5A6F140", Offset = "0x5A6E140", VA = "0x5A6F140", Slot = "56")]
	public void OnPhotonInstantiate(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B3D")]
	[Address(RVA = "0x5A6F240", Offset = "0x5A6E240", VA = "0x5A6F240")]
	public void Init(int mapObjectId, bool rigidbody)
	{
	}

	[Token(Token = "0x6003B3E")]
	[Address(RVA = "0x5A6F420", Offset = "0x5A6E420", VA = "0x5A6F420")]
	public void Init(int mapObjectId)
	{
	}

	[Token(Token = "0x6003B3F")]
	[Address(RVA = "0x5A6F670", Offset = "0x5A6E670", VA = "0x5A6F670")]
	public void InitDynamic(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x6003B40")]
	[Address(RVA = "0x5A6FCF0", Offset = "0x5A6ECF0", VA = "0x5A6FCF0")]
	[PunRPC]
	public void InitRPC(int mapObjectId, bool syncVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B41")]
	[Address(RVA = "0x5A6FE00", Offset = "0x5A6EE00", VA = "0x5A6FE00")]
	[PunRPC]
	public void InitDynamicRPC(bool persistsOwnership, string csvScript, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B42")]
	[Address(RVA = "0x5A6F7C0", Offset = "0x5A6E7C0", VA = "0x5A6F7C0")]
	public void CreateAndSetupObject(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x6003B43")]
	[Address(RVA = "0x5A6FEC0", Offset = "0x5A6EEC0", VA = "0x5A6FEC0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDynamicInit_003Ed__45))]
	public IEnumerator WaitAndFinishDynamicInit(bool persistsOwnership, string csvScript)
	{
		return null;
	}

	[Token(Token = "0x6003B44")]
	[Address(RVA = "0x5A6FD90", Offset = "0x5A6ED90", VA = "0x5A6FD90")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishInit_003Ed__46))]
	public IEnumerator WaitAndFinishInit(int mapObjectId)
	{
		return null;
	}

	[Token(Token = "0x6003B45")]
	[Address(RVA = "0x5A70350", Offset = "0x5A6F350", VA = "0x5A70350")]
	private void FinishInit(int mapObjectId)
	{
	}

	[Token(Token = "0x6003B46")]
	[Address(RVA = "0x5A70500", Offset = "0x5A6F500", VA = "0x5A70500")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B47")]
	[Address(RVA = "0x5A70580", Offset = "0x5A6F580", VA = "0x5A70580")]
	public void SendMessage(Player player, string message)
	{
	}

	[Token(Token = "0x6003B48")]
	[Address(RVA = "0x5A70650", Offset = "0x5A6F650", VA = "0x5A70650")]
	public void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x6003B49")]
	[Address(RVA = "0x5A70720", Offset = "0x5A6F720", VA = "0x5A70720")]
	public void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x6003B4A")]
	[Address(RVA = "0x5A707F0", Offset = "0x5A6F7F0", VA = "0x5A707F0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6003B4B")]
	[Address(RVA = "0x5A70B30", Offset = "0x5A6FB30", VA = "0x5A70B30")]
	[PunRPC]
	public void SyncRPC(Vector3 position, Quaternion rotation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B4C")]
	[Address(RVA = "0x5A70C10", Offset = "0x5A6FC10", VA = "0x5A70C10")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishSync_003Ed__54))]
	public IEnumerator WaitAndFinishSync(Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6003B4D")]
	[Address(RVA = "0x5A70CD0", Offset = "0x5A6FCD0", VA = "0x5A70CD0", Slot = "60")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B4E")]
	[Address(RVA = "0x5A71380", Offset = "0x5A70380", VA = "0x5A71380", Slot = "61")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003B4F")]
	[Address(RVA = "0x5A70990", Offset = "0x5A6F990", VA = "0x5A70990")]
	private Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003B50")]
	[Address(RVA = "0x5A70A60", Offset = "0x5A6FA60", VA = "0x5A70A60")]
	private Quaternion GetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003B51")]
	[Address(RVA = "0x5A71270", Offset = "0x5A70270", VA = "0x5A71270")]
	private Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003B52")]
	[Address(RVA = "0x5A71590", Offset = "0x5A70590", VA = "0x5A71590", Slot = "54")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003B53")]
	[Address(RVA = "0x5A715B0", Offset = "0x5A705B0", VA = "0x5A715B0")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x6003B54")]
	[Address(RVA = "0x5A71650", Offset = "0x5A70650", VA = "0x5A71650", Slot = "55")]
	private void Photon_002EPun_002EIOnPhotonViewOwnerChange_002EOnOwnerChange(Player newOwner, Player previousOwner)
	{
	}

	[Token(Token = "0x6003B55")]
	[Address(RVA = "0x5A71700", Offset = "0x5A70700", VA = "0x5A71700", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6003B56")]
	[Address(RVA = "0x5A717B0", Offset = "0x5A707B0", VA = "0x5A717B0")]
	public void DestroyMe()
	{
	}

	[Token(Token = "0x6003B57")]
	[Address(RVA = "0x5A71830", Offset = "0x5A70830", VA = "0x5A71830")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6003B58")]
	[Address(RVA = "0x5A718F0", Offset = "0x5A708F0", VA = "0x5A718F0")]
	public CustomLogicPhotonSync()
	{
	}
}
