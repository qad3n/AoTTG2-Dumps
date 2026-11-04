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

[Token(Token = "0x2000636")]
internal class BaseMovementSync : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4001C0E")]
	[FieldOffset(Offset = "0x28")]
	public bool Disabled;

	[Token(Token = "0x4001C0F")]
	[FieldOffset(Offset = "0x2C")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x4001C10")]
	[FieldOffset(Offset = "0x38")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x4001C11")]
	[FieldOffset(Offset = "0x48")]
	public Vector3 _correctVelocity;

	[Token(Token = "0x4001C12")]
	[FieldOffset(Offset = "0x54")]
	public Quaternion _correctCamera;

	[Token(Token = "0x4001C13")]
	[FieldOffset(Offset = "0x64")]
	protected bool _syncVelocity;

	[Token(Token = "0x4001C14")]
	[FieldOffset(Offset = "0x65")]
	protected bool _syncCamera;

	[Token(Token = "0x4001C15")]
	[FieldOffset(Offset = "0x68")]
	protected float MaxPredictionTime;

	[Token(Token = "0x4001C16")]
	[FieldOffset(Offset = "0x70")]
	protected Transform _transform;

	[Token(Token = "0x4001C17")]
	[FieldOffset(Offset = "0x78")]
	protected Rigidbody _rigidbody;

	[Token(Token = "0x4001C18")]
	[FieldOffset(Offset = "0x80")]
	protected PhotonView _photonView;

	[Token(Token = "0x4001C19")]
	[FieldOffset(Offset = "0x88")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001C1A")]
	[FieldOffset(Offset = "0x90")]
	protected float _timeSinceLastMessage;

	[Token(Token = "0x17000AD2")]
	protected float SmoothingDelay
	{
		[Token(Token = "0x6003D76")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003D77")]
	[Address(RVA = "0x2112570", Offset = "0x2110B70", VA = "0x182112570", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003D78")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	protected virtual void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003D79")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003D7A")]
	[Address(RVA = "0x21126F0", Offset = "0x2110CF0", VA = "0x1821126F0", Slot = "8")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003D7B")]
	[Address(RVA = "0x2112C70", Offset = "0x2111270", VA = "0x182112C70", Slot = "9")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003D7C")]
	[Address(RVA = "0x2112C30", Offset = "0x2111230", VA = "0x182112C30", Slot = "4")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003D7D")]
	[Address(RVA = "0x2112EC0", Offset = "0x21114C0", VA = "0x182112EC0")]
	public BaseMovementSync()
	{
	}
}
