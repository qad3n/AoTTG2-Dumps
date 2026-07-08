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

[Token(Token = "0x200043A")]
internal class CustomLogicPhotonSync : MonoBehaviourPunCallbacks, IPunObservable, IOnPhotonViewOwnerChange, IPhotonViewCallback, IPunInstantiateMagicCallback
{
	[Token(Token = "0x200043B")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDynamicInit_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011CD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011CE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011CF")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x40011D0")]
		[FieldOffset(Offset = "0x28")]
		public bool persistsOwnership;

		[Token(Token = "0x40011D1")]
		[FieldOffset(Offset = "0x30")]
		public string csvScript;

		[Token(Token = "0x170008BE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002D4C")]
			[Address(RVA = "0x3E4E4C0", Offset = "0x3E4E4C0", VA = "0x3E4E4C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008BF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002D4E")]
			[Address(RVA = "0x3E4E510", Offset = "0x3E4E510", VA = "0x3E4E510", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D49")]
		[Address(RVA = "0x3E4CDC0", Offset = "0x3E4CDC0", VA = "0x3E4CDC0")]
		[DebuggerHidden]
		public _003CWaitAndFinishDynamicInit_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002D4A")]
		[Address(RVA = "0x3E4E400", Offset = "0x3E4E400", VA = "0x3E4E400", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002D4B")]
		[Address(RVA = "0x3E4E410", Offset = "0x3E4E410", VA = "0x3E4E410", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D4D")]
		[Address(RVA = "0x3E4E4D0", Offset = "0x3E4E4D0", VA = "0x3E4E4D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200043C")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishInit_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011D2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011D3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011D4")]
		[FieldOffset(Offset = "0x20")]
		public int mapObjectId;

		[Token(Token = "0x40011D5")]
		[FieldOffset(Offset = "0x28")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x170008C0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002D52")]
			[Address(RVA = "0x3E4E630", Offset = "0x3E4E630", VA = "0x3E4E630", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008C1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002D54")]
			[Address(RVA = "0x3E4E680", Offset = "0x3E4E680", VA = "0x3E4E680", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D4F")]
		[Address(RVA = "0x3E4CDE0", Offset = "0x3E4CDE0", VA = "0x3E4CDE0")]
		[DebuggerHidden]
		public _003CWaitAndFinishInit_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002D50")]
		[Address(RVA = "0x3E4E520", Offset = "0x3E4E520", VA = "0x3E4E520", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002D51")]
		[Address(RVA = "0x3E4E530", Offset = "0x3E4E530", VA = "0x3E4E530", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D53")]
		[Address(RVA = "0x3E4E640", Offset = "0x3E4E640", VA = "0x3E4E640", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200043D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishSync_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011D6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011D7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011D8")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x40011D9")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x40011DA")]
		[FieldOffset(Offset = "0x34")]
		public Quaternion rotation;

		[Token(Token = "0x170008C2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002D58")]
			[Address(RVA = "0x3E4E700", Offset = "0x3E4E700", VA = "0x3E4E700", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008C3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002D5A")]
			[Address(RVA = "0x3E4E750", Offset = "0x3E4E750", VA = "0x3E4E750", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D55")]
		[Address(RVA = "0x3E4D770", Offset = "0x3E4D770", VA = "0x3E4D770")]
		[DebuggerHidden]
		public _003CWaitAndFinishSync_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002D56")]
		[Address(RVA = "0x3E4E690", Offset = "0x3E4E690", VA = "0x3E4E690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002D57")]
		[Address(RVA = "0x3E4E6A0", Offset = "0x3E4E6A0", VA = "0x3E4E6A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D59")]
		[Address(RVA = "0x3E4E710", Offset = "0x3E4E710", VA = "0x3E4E710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011BD")]
	[FieldOffset(Offset = "0x28")]
	protected bool _syncTransforms;

	[Token(Token = "0x40011BE")]
	[FieldOffset(Offset = "0x29")]
	protected bool _syncVelocity;

	[Token(Token = "0x40011BF")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody _rigidbody;

	[Token(Token = "0x40011C0")]
	[FieldOffset(Offset = "0x38")]
	public int ObjectId;

	[Token(Token = "0x40011C1")]
	[FieldOffset(Offset = "0x40")]
	public PhotonView PhotonView;

	[Token(Token = "0x40011C5")]
	[FieldOffset(Offset = "0x60")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x40011C6")]
	[FieldOffset(Offset = "0x6C")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x40011C7")]
	[FieldOffset(Offset = "0x7C")]
	protected Vector3 _correctVelocity;

	[Token(Token = "0x40011C8")]
	[FieldOffset(Offset = "0x88")]
	protected bool _inited;

	[Token(Token = "0x40011C9")]
	[FieldOffset(Offset = "0x90")]
	protected object[] _streamObjs;

	[Token(Token = "0x40011CA")]
	[FieldOffset(Offset = "0x98")]
	protected bool _synced;

	[Token(Token = "0x40011CB")]
	[FieldOffset(Offset = "0x99")]
	protected bool _persistsOwnership;

	[Token(Token = "0x40011CC")]
	[FieldOffset(Offset = "0x9C")]
	protected SpawnIntent _spawnIntent;

	[Token(Token = "0x170008B7")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6002D1D")]
		[Address(RVA = "0x3E4BCB0", Offset = "0x3E4BCB0", VA = "0x3E4BCB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002D1E")]
		[Address(RVA = "0x3E4BCC0", Offset = "0x3E4BCC0", VA = "0x3E4BCC0")]
		set
		{
		}
	}

	[Token(Token = "0x170008B8")]
	public bool SyncVelocity
	{
		[Token(Token = "0x6002D1F")]
		[Address(RVA = "0x3E4BCE0", Offset = "0x3E4BCE0", VA = "0x3E4BCE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002D20")]
		[Address(RVA = "0x3E4BCF0", Offset = "0x3E4BCF0", VA = "0x3E4BCF0")]
		set
		{
		}
	}

	[Token(Token = "0x170008B9")]
	protected Rigidbody Rigidbody
	{
		[Token(Token = "0x6002D21")]
		[Address(RVA = "0x3E4BD10", Offset = "0x3E4BD10", VA = "0x3E4BD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008BA")]
	public MapObject MapObject
	{
		[Token(Token = "0x6002D22")]
		[Address(RVA = "0x3E4BDF0", Offset = "0x3E4BDF0", VA = "0x3E4BDF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D23")]
		[Address(RVA = "0x3E4BE00", Offset = "0x3E4BE00", VA = "0x3E4BE00")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170008BB")]
	public CustomLogicMapObjectBuiltin CustomLogicMapObjectBuiltin
	{
		[Token(Token = "0x6002D24")]
		[Address(RVA = "0x3E4BE10", Offset = "0x3E4BE10", VA = "0x3E4BE10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D25")]
		[Address(RVA = "0x3E4BE20", Offset = "0x3E4BE20", VA = "0x3E4BE20")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170008BC")]
	public CustomLogicNetworkViewBuiltin NetworkView
	{
		[Token(Token = "0x6002D26")]
		[Address(RVA = "0x3E4BE30", Offset = "0x3E4BE30", VA = "0x3E4BE30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D27")]
		[Address(RVA = "0x3E4BE40", Offset = "0x3E4BE40", VA = "0x3E4BE40")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170008BD")]
	public float SmoothingDelay
	{
		[Token(Token = "0x6002D28")]
		[Address(RVA = "0x3E4BE50", Offset = "0x3E4BE50", VA = "0x3E4BE50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6002D29")]
	[Address(RVA = "0x3E4BE60", Offset = "0x3E4BE60", VA = "0x3E4BE60", Slot = "57")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6002D2A")]
	[Address(RVA = "0x3E4BE80", Offset = "0x3E4BE80", VA = "0x3E4BE80", Slot = "58")]
	public new virtual void OnEnable()
	{
	}

	[Token(Token = "0x6002D2B")]
	[Address(RVA = "0x3E4BEF0", Offset = "0x3E4BEF0", VA = "0x3E4BEF0", Slot = "59")]
	public new virtual void OnDisable()
	{
	}

	[Token(Token = "0x6002D2C")]
	[Address(RVA = "0x3E4BF60", Offset = "0x3E4BF60", VA = "0x3E4BF60", Slot = "56")]
	public void OnPhotonInstantiate(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D2D")]
	[Address(RVA = "0x3E4C060", Offset = "0x3E4C060", VA = "0x3E4C060")]
	public void Init(int mapObjectId, bool rigidbody)
	{
	}

	[Token(Token = "0x6002D2E")]
	[Address(RVA = "0x3E4C240", Offset = "0x3E4C240", VA = "0x3E4C240")]
	public void Init(int mapObjectId)
	{
	}

	[Token(Token = "0x6002D2F")]
	[Address(RVA = "0x3E4C490", Offset = "0x3E4C490", VA = "0x3E4C490")]
	public void InitDynamic(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x6002D30")]
	[Address(RVA = "0x3E4CB30", Offset = "0x3E4CB30", VA = "0x3E4CB30")]
	[PunRPC]
	public void InitRPC(int mapObjectId, bool syncVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D31")]
	[Address(RVA = "0x3E4CC60", Offset = "0x3E4CC60", VA = "0x3E4CC60")]
	[PunRPC]
	public void InitDynamicRPC(bool persistsOwnership, string csvScript, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D32")]
	[Address(RVA = "0x3E4C5E0", Offset = "0x3E4C5E0", VA = "0x3E4C5E0")]
	public void CreateAndSetupObject(bool persistsOwnership, string csvScript)
	{
	}

	[Token(Token = "0x6002D33")]
	[Address(RVA = "0x3E4CD30", Offset = "0x3E4CD30", VA = "0x3E4CD30")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDynamicInit_003Ed__45))]
	public IEnumerator WaitAndFinishDynamicInit(bool persistsOwnership, string csvScript)
	{
		return null;
	}

	[Token(Token = "0x6002D34")]
	[Address(RVA = "0x3E4CBE0", Offset = "0x3E4CBE0", VA = "0x3E4CBE0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishInit_003Ed__46))]
	public IEnumerator WaitAndFinishInit(int mapObjectId)
	{
		return null;
	}

	[Token(Token = "0x6002D35")]
	[Address(RVA = "0x3E4CE00", Offset = "0x3E4CE00", VA = "0x3E4CE00")]
	private void FinishInit(int mapObjectId)
	{
	}

	[Token(Token = "0x6002D36")]
	[Address(RVA = "0x3E4CFB0", Offset = "0x3E4CFB0", VA = "0x3E4CFB0")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D37")]
	[Address(RVA = "0x3E4D030", Offset = "0x3E4D030", VA = "0x3E4D030")]
	public void SendMessage(Player player, string message)
	{
	}

	[Token(Token = "0x6002D38")]
	[Address(RVA = "0x3E4D100", Offset = "0x3E4D100", VA = "0x3E4D100")]
	public void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x6002D39")]
	[Address(RVA = "0x3E4D1D0", Offset = "0x3E4D1D0", VA = "0x3E4D1D0")]
	public void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x6002D3A")]
	[Address(RVA = "0x3E4D2A0", Offset = "0x3E4D2A0", VA = "0x3E4D2A0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x3E4D5E0", Offset = "0x3E4D5E0", VA = "0x3E4D5E0")]
	[PunRPC]
	public void SyncRPC(Vector3 position, Quaternion rotation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x3E4D6C0", Offset = "0x3E4D6C0", VA = "0x3E4D6C0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishSync_003Ed__54))]
	public IEnumerator WaitAndFinishSync(Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6002D3D")]
	[Address(RVA = "0x3E4D790", Offset = "0x3E4D790", VA = "0x3E4D790", Slot = "60")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D3E")]
	[Address(RVA = "0x3E4DDA0", Offset = "0x3E4DDA0", VA = "0x3E4DDA0", Slot = "61")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6002D3F")]
	[Address(RVA = "0x3E4D440", Offset = "0x3E4D440", VA = "0x3E4D440")]
	private Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6002D40")]
	[Address(RVA = "0x3E4D510", Offset = "0x3E4D510", VA = "0x3E4D510")]
	private Quaternion GetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6002D41")]
	[Address(RVA = "0x3E4DCB0", Offset = "0x3E4DCB0", VA = "0x3E4DCB0")]
	private Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6002D42")]
	[Address(RVA = "0x3E4DFC0", Offset = "0x3E4DFC0", VA = "0x3E4DFC0", Slot = "54")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002D43")]
	[Address(RVA = "0x3E4DFE0", Offset = "0x3E4DFE0", VA = "0x3E4DFE0")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x6002D44")]
	[Address(RVA = "0x3E4E080", Offset = "0x3E4E080", VA = "0x3E4E080", Slot = "55")]
	private void Photon_002EPun_002EIOnPhotonViewOwnerChange_002EOnOwnerChange(Player newOwner, Player previousOwner)
	{
	}

	[Token(Token = "0x6002D45")]
	[Address(RVA = "0x3E4E130", Offset = "0x3E4E130", VA = "0x3E4E130", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6002D46")]
	[Address(RVA = "0x3E4E1E0", Offset = "0x3E4E1E0", VA = "0x3E4E1E0")]
	public void DestroyMe()
	{
	}

	[Token(Token = "0x6002D47")]
	[Address(RVA = "0x3E4E260", Offset = "0x3E4E260", VA = "0x3E4E260")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6002D48")]
	[Address(RVA = "0x3E4E320", Offset = "0x3E4E320", VA = "0x3E4E320")]
	public CustomLogicPhotonSync()
	{
	}
}
