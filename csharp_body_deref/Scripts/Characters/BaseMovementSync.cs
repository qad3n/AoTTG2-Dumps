// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseMovementSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseMovementSync.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseMovementSync.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000695")]
internal class BaseMovementSync : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4001DB5")]
	[FieldOffset(Offset = "0x28")]
	public bool Disabled;

	[Token(Token = "0x4001DB6")]
	[FieldOffset(Offset = "0x2C")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x4001DB7")]
	[FieldOffset(Offset = "0x38")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x4001DB8")]
	[FieldOffset(Offset = "0x48")]
	public Vector3 _correctVelocity;

	[Token(Token = "0x4001DB9")]
	[FieldOffset(Offset = "0x54")]
	public Quaternion _correctCamera;

	[Token(Token = "0x4001DBA")]
	[FieldOffset(Offset = "0x64")]
	protected bool _syncVelocity;

	[Token(Token = "0x4001DBB")]
	[FieldOffset(Offset = "0x65")]
	protected bool _syncCamera;

	[Token(Token = "0x4001DBC")]
	[FieldOffset(Offset = "0x68")]
	protected float MaxPredictionTime;

	[Token(Token = "0x4001DBD")]
	[FieldOffset(Offset = "0x70")]
	protected Transform _transform;

	[Token(Token = "0x4001DBE")]
	[FieldOffset(Offset = "0x78")]
	protected Rigidbody _rigidbody;

	[Token(Token = "0x4001DBF")]
	[FieldOffset(Offset = "0x80")]
	protected PhotonView _photonView;

	[Token(Token = "0x4001DC0")]
	[FieldOffset(Offset = "0x88")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001DC1")]
	[FieldOffset(Offset = "0x90")]
	protected float _timeSinceLastMessage;

	[Token(Token = "0x17000B1A")]
	protected float SmoothingDelay
	{
		[Token(Token = "0x6004008")]
		[Address(RVA = "0x5ABBCF0", Offset = "0x5ABACF0", VA = "0x5ABBCF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004009")]
	[Address(RVA = "0x5ABBD00", Offset = "0x5ABAD00", VA = "0x5ABBD00", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600400A")]
	[Address(RVA = "0x5ABBE60", Offset = "0x5ABAE60", VA = "0x5ABBE60", Slot = "6")]
	protected virtual void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600400B")]
	[Address(RVA = "0x5ABBE70", Offset = "0x5ABAE70", VA = "0x5ABBE70", Slot = "7")]
	protected virtual void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600400C")]
	[Address(RVA = "0x5ABBE80", Offset = "0x5ABAE80", VA = "0x5ABBE80", Slot = "8")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600400D")]
	[Address(RVA = "0x5ABC6B0", Offset = "0x5ABB6B0", VA = "0x5ABC6B0", Slot = "9")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600400E")]
	[Address(RVA = "0x5ABC890", Offset = "0x5ABB890", VA = "0x5ABC890", Slot = "4")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600400F")]
	[Address(RVA = "0x5ABC8B0", Offset = "0x5ABB8B0", VA = "0x5ABC8B0")]
	public BaseMovementSync()
	{
	}
}
