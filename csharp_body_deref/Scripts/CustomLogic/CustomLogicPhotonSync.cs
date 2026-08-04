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

[Token(Token = "0x200047F")]
internal class CustomLogicPhotonSync : MonoBehaviourPunCallbacks, IPunObservable, IOnPhotonViewOwnerChange, IPhotonViewCallback, IPunInstantiateMagicCallback
{
	[Token(Token = "0x2000480")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDynamicInit_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40012D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40012D8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40012D9")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x40012DA")]
		[FieldOffset(Offset = "0x28")]
		public bool persistsOwnership;

		[Token(Token = "0x40012DB")]
		[FieldOffset(Offset = "0x30")]
		public string csvScript;

		[Token(Token = "0x17000928")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002F54")]
			[Address(RVA = "0x41599E0", Offset = "0x41599E0", VA = "0x41599E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000929")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F56")]
			[Address(RVA = "0x4159A30", Offset = "0x4159A30", VA = "0x4159A30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F51")]
		[Address(RVA = "0x4158240", Offset = "0x4158240", VA = "0x4158240")]
		[DebuggerHidden]
		public _003CWaitAndFinishDynamicInit_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002F52")]
		[Address(RVA = "0x4159920", Offset = "0x4159920", VA = "0x4159920", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002F53")]
		[Address(RVA = "0x4159930", Offset = "0x4159930", VA = "0x4159930", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F55")]
		[Address(RVA = "0x41599F0", Offset = "0x41599F0", VA = "0x41599F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000481")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishInit_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40012DC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40012DD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40012DE")]
		[FieldOffset(Offset = "0x20")]
		public int mapObjectId;

		[Token(Token = "0x40012DF")]
		[FieldOffset(Offset = "0x28")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x1700092A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002F5A")]
			[Address(RVA = "0x4159B50", Offset = "0x4159B50", VA = "0x4159B50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700092B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F5C")]
			[Address(RVA = "0x4159BA0", Offset = "0x4159BA0", VA = "0x4159BA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F57")]
		[Address(RVA = "0x4158260", Offset = "0x4158260", VA = "0x4158260")]
		[DebuggerHidden]
		public _003CWaitAndFinishInit_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002F58")]
		[Address(RVA = "0x4159A40", Offset = "0x4159A40", VA = "0x4159A40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002F59")]
		[Address(RVA = "0x4159A50", Offset = "0x4159A50", VA = "0x4159A50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F5B")]
		[Address(RVA = "0x4159B60", Offset = "0x4159B60", VA = "0x4159B60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000482")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishSync_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40012E0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40012E1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40012E2")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x40012E3")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x40012E4")]
		[FieldOffset(Offset = "0x34")]
		public Quaternion rotation;

		[Token(Token = "0x1700092C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002F60")]
			[Address(RVA = "0x4159C20", Offset = "0x4159C20", VA = "0x4159C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700092D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F62")]
			[Address(RVA = "0x4159C70", Offset = "0x4159C70", VA = "0x4159C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F5D")]
		[Address(RVA = "0x4158BF0", Offset = "0x4158BF0", VA = "0x4158BF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishSync_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002F5E")]
		[Address(RVA = "0x4159BB0", Offset = "0x4159BB0", VA = "0x4159BB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002F5F")]
		[Address(RVA = "0x4159BC0", Offset = "0x4159BC0", VA = "0x4159BC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F61")]
		[Address(RVA = "0x4159C30", Offset = "0x4159C30", VA = "0x4159C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40012C7")]
	[FieldOffset(Offset = "0x28")]
	protected bool _syncTransforms;

	[Token(Token = "0x40012C8")]
	[FieldOffset(Offset = "0x29")]
	protected bool _syncVelocity;

	[Token(Token = "0x40012C9")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody _rigidbody;

	[Token(Token = "0x40012CA")]
	[FieldOffset(Offset = "0x38")]
	public int ObjectId;

	[Token(Token = "0x40012CB")]
	[FieldOffset(Offset = "0x40")]
	public PhotonView PhotonView;

	[Token(Token = "0x40012CF")]
	[FieldOffset(Offset = "0x60")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x40012D0")]
	[FieldOffset(Offset = "0x6C")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x40012D1")]
	[FieldOffset(Offset = "0x7C")]
	protected Vector3 _correctVelocity;

	[Token(Token = "0x40012D2")]
	[FieldOffset(Offset = "0x88")]
	protected bool _inited;

	[Token(Token = "0x40012D3")]
	[FieldOffset(Offset = "0x90")]
	protected object[] _streamObjs;

	[Token(Token = "0x40012D4")]
	[FieldOffset(Offset = "0x98")]
	protected bool _synced;

	[Token(Token = "0x40012D5")]
	[FieldOffset(Offset = "0x99")]
	protected bool _persistsOwnership;

	[Token(Token = "0x40012D6")]
	[FieldOffset(Offset = "0x9C")]
	protected SpawnIntent _spawnIntent;

	[Token(Token = "0x17000921")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6002F25")]
		[Address(RVA = "0x4157130", Offset = "0x4157130", VA = "0x4157130")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002F26")]
		[Address(RVA = "0x4157140", Offset = "0x4157140", VA = "0x4157140")]
		set
		{
		}
	}

	[Token(Token = "0x17000922")]
	public bool SyncVelocity
	{
		[Token(Token = "0x6002F27")]
		[Address(RVA = "0x4157160", Offset = "0x4157160", VA = "0x4157160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002F28")]
		[Address(RVA = "0x4157170", Offset = "0x4157170", VA = "0x4157170")]
		set
		{
		}
	}

	[Token(Token = "0x17000923")]
	protected Rigidbody Rigidbody
	{
		[Token(Token = "0x6002F29")]
		[Address(RVA = "0x4157190", Offset = "0x4157190", VA = "0x4157190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000924")]
	public MapObject MapObject
	{
		[Token(Token = "0x6002F2A")]
		[Address(RVA = "0x4157270", Offset = "0x4157270", VA = "0x4157270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F2B")]
		[Address(RVA = "0x4157280", Offset = "0x4157280", VA = "0x4157280")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000925")]
	public CustomLogicMapObjectBuiltin CustomLogicMapObjectBuiltin
	{
		[Token(Token = "0x6002F2C")]
		[Address(RVA = "0x4157290", Offset = "0x4157290", VA = "0x4157290")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F2D")]
		[Address(RVA = "0x41572A0", Offset = "0x41572A0", VA = "0x41572A0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000926")]
	public CustomLogicNetworkViewBuiltin NetworkView
	{
		[Token(Token = "0x6002F2E")]
		[Address(RVA = "0x41572B0", Offset = "0x41572B0", VA = "0x41572B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F2F")]
		[Address(RVA = "0x41572C0", Offset = "0x41572C0", VA = "0x41572C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000927")]
	public float SmoothingDelay
	{
		[Token(Token = "0x6002F30")]
		[Address(RVA = "0x41572D0", Offset = "0x41572D0", VA = "0x41572D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6002F31")]
	[Address(RVA = "0x41572E0", Offset = "0x41572E0", VA = "0x41572E0", Slot = "57")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6002F32")]
	[Address(RVA = "0x4157300", Offset = "0x4157300", VA = "0x4157300", Slot = "58")]
	public new virtual void OnEnable()
	{
	}

	[Token(Token = "0x6002F33")]
	[Address(RVA = "0x4157370", Offset = "0x4157370", VA = "0x4157370", Slot = "59")]
	public new virtual void OnDisable()
	{
	}

	[Token(Token = "0x6002F34")]
	[Address(RVA = "0x41573E0", Offset = "0x41573E0", VA = "0x41573E0", Slot = "56")]
	public void OnPhotonInstantiate(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F35")]
	[Address(RVA = "0x41574E0", Offset = "0x41574E0", VA = "0x41574E0")]
	public void Init(int mapObjectId, bool rigidbody)
	{
	}

	[Token(Token = "0x6002F36")]
	[Address(RVA = "0x41576C0", Offset = "0x41576C0", VA = "0x41576C0")]
	public void Init(int mapObjectId)
	{
	}

	[Token(Token = "0x6002F37")]
	[Address(RVA = "0x4157910", Offset = "0x4157910", VA = "0x4157910")]
	public void InitDynamic(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x6002F38")]
	[Address(RVA = "0x4157FB0", Offset = "0x4157FB0", VA = "0x4157FB0")]
	[PunRPC]
	public void InitRPC(int mapObjectId, bool syncVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F39")]
	[Address(RVA = "0x41580E0", Offset = "0x41580E0", VA = "0x41580E0")]
	[PunRPC]
	public void InitDynamicRPC(bool persistsOwnership, string csvScript, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F3A")]
	[Address(RVA = "0x4157A60", Offset = "0x4157A60", VA = "0x4157A60")]
	public void CreateAndSetupObject(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x6002F3B")]
	[Address(RVA = "0x41581B0", Offset = "0x41581B0", VA = "0x41581B0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDynamicInit_003Ed__45))]
	public IEnumerator WaitAndFinishDynamicInit(bool persistsOwnership, string csvScript)
	{
		return null;
	}

	[Token(Token = "0x6002F3C")]
	[Address(RVA = "0x4158060", Offset = "0x4158060", VA = "0x4158060")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishInit_003Ed__46))]
	public IEnumerator WaitAndFinishInit(int mapObjectId)
	{
		return null;
	}

	[Token(Token = "0x6002F3D")]
	[Address(RVA = "0x4158280", Offset = "0x4158280", VA = "0x4158280")]
	private void FinishInit(int mapObjectId)
	{
	}

	[Token(Token = "0x6002F3E")]
	[Address(RVA = "0x4158430", Offset = "0x4158430", VA = "0x4158430")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F3F")]
	[Address(RVA = "0x41584B0", Offset = "0x41584B0", VA = "0x41584B0")]
	public void SendMessage(Player player, string message)
	{
	}

	[Token(Token = "0x6002F40")]
	[Address(RVA = "0x4158580", Offset = "0x4158580", VA = "0x4158580")]
	public void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x6002F41")]
	[Address(RVA = "0x4158650", Offset = "0x4158650", VA = "0x4158650")]
	public void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x6002F42")]
	[Address(RVA = "0x4158720", Offset = "0x4158720", VA = "0x4158720", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6002F43")]
	[Address(RVA = "0x4158A60", Offset = "0x4158A60", VA = "0x4158A60")]
	[PunRPC]
	public void SyncRPC(Vector3 position, Quaternion rotation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F44")]
	[Address(RVA = "0x4158B40", Offset = "0x4158B40", VA = "0x4158B40")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishSync_003Ed__54))]
	public IEnumerator WaitAndFinishSync(Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6002F45")]
	[Address(RVA = "0x4158C10", Offset = "0x4158C10", VA = "0x4158C10", Slot = "60")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F46")]
	[Address(RVA = "0x41592C0", Offset = "0x41592C0", VA = "0x41592C0", Slot = "61")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6002F47")]
	[Address(RVA = "0x41588C0", Offset = "0x41588C0", VA = "0x41588C0")]
	private Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6002F48")]
	[Address(RVA = "0x4158990", Offset = "0x4158990", VA = "0x4158990")]
	private Quaternion GetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6002F49")]
	[Address(RVA = "0x41591B0", Offset = "0x41591B0", VA = "0x41591B0")]
	private Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6002F4A")]
	[Address(RVA = "0x41594E0", Offset = "0x41594E0", VA = "0x41594E0", Slot = "54")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002F4B")]
	[Address(RVA = "0x4159500", Offset = "0x4159500", VA = "0x4159500")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x6002F4C")]
	[Address(RVA = "0x41595A0", Offset = "0x41595A0", VA = "0x41595A0", Slot = "55")]
	private void Photon_002EPun_002EIOnPhotonViewOwnerChange_002EOnOwnerChange(Player newOwner, Player previousOwner)
	{
	}

	[Token(Token = "0x6002F4D")]
	[Address(RVA = "0x4159650", Offset = "0x4159650", VA = "0x4159650", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6002F4E")]
	[Address(RVA = "0x4159700", Offset = "0x4159700", VA = "0x4159700")]
	public void DestroyMe()
	{
	}

	[Token(Token = "0x6002F4F")]
	[Address(RVA = "0x4159780", Offset = "0x4159780", VA = "0x4159780")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6002F50")]
	[Address(RVA = "0x4159840", Offset = "0x4159840", VA = "0x4159840")]
	public CustomLogicPhotonSync()
	{
	}
}
