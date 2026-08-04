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

[Token(Token = "0x20004DD")]
internal class BaseMovementSync : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x400159C")]
	[FieldOffset(Offset = "0x28")]
	public bool Disabled;

	[Token(Token = "0x400159D")]
	[FieldOffset(Offset = "0x2C")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x400159E")]
	[FieldOffset(Offset = "0x38")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x400159F")]
	[FieldOffset(Offset = "0x48")]
	public Vector3 _correctVelocity;

	[Token(Token = "0x40015A0")]
	[FieldOffset(Offset = "0x54")]
	public Quaternion _correctCamera;

	[Token(Token = "0x40015A1")]
	[FieldOffset(Offset = "0x64")]
	protected bool _syncVelocity;

	[Token(Token = "0x40015A2")]
	[FieldOffset(Offset = "0x65")]
	protected bool _syncCamera;

	[Token(Token = "0x40015A3")]
	[FieldOffset(Offset = "0x68")]
	protected float MaxPredictionTime;

	[Token(Token = "0x40015A4")]
	[FieldOffset(Offset = "0x70")]
	protected Transform _transform;

	[Token(Token = "0x40015A5")]
	[FieldOffset(Offset = "0x78")]
	protected Rigidbody _rigidbody;

	[Token(Token = "0x40015A6")]
	[FieldOffset(Offset = "0x80")]
	protected PhotonView _photonView;

	[Token(Token = "0x40015A7")]
	[FieldOffset(Offset = "0x88")]
	protected BaseCharacter _character;

	[Token(Token = "0x40015A8")]
	[FieldOffset(Offset = "0x90")]
	protected float _timeSinceLastMessage;

	[Token(Token = "0x170009C2")]
	protected float SmoothingDelay
	{
		[Token(Token = "0x6003394")]
		[Address(RVA = "0x41A7F50", Offset = "0x41A7F50", VA = "0x41A7F50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003395")]
	[Address(RVA = "0x41A7F60", Offset = "0x41A7F60", VA = "0x41A7F60", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003396")]
	[Address(RVA = "0x41A80C0", Offset = "0x41A80C0", VA = "0x41A80C0", Slot = "6")]
	protected virtual void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003397")]
	[Address(RVA = "0x41A80D0", Offset = "0x41A80D0", VA = "0x41A80D0", Slot = "7")]
	protected virtual void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003398")]
	[Address(RVA = "0x41A80E0", Offset = "0x41A80E0", VA = "0x41A80E0", Slot = "8")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003399")]
	[Address(RVA = "0x41A8970", Offset = "0x41A8970", VA = "0x41A8970", Slot = "9")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600339A")]
	[Address(RVA = "0x41A8B50", Offset = "0x41A8B50", VA = "0x41A8B50", Slot = "4")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600339B")]
	[Address(RVA = "0x41A8B70", Offset = "0x41A8B70", VA = "0x41A8B70")]
	public BaseMovementSync()
	{
	}
}
