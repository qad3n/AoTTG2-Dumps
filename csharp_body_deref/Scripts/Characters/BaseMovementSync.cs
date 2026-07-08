using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000498")]
internal class BaseMovementSync : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x400148B")]
	[FieldOffset(Offset = "0x28")]
	public bool Disabled;

	[Token(Token = "0x400148C")]
	[FieldOffset(Offset = "0x2C")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x400148D")]
	[FieldOffset(Offset = "0x38")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x400148E")]
	[FieldOffset(Offset = "0x48")]
	public Vector3 _correctVelocity;

	[Token(Token = "0x400148F")]
	[FieldOffset(Offset = "0x54")]
	public Quaternion _correctCamera;

	[Token(Token = "0x4001490")]
	[FieldOffset(Offset = "0x64")]
	protected bool _syncVelocity;

	[Token(Token = "0x4001491")]
	[FieldOffset(Offset = "0x65")]
	protected bool _syncCamera;

	[Token(Token = "0x4001492")]
	[FieldOffset(Offset = "0x68")]
	protected float MaxPredictionTime;

	[Token(Token = "0x4001493")]
	[FieldOffset(Offset = "0x70")]
	protected Transform _transform;

	[Token(Token = "0x4001494")]
	[FieldOffset(Offset = "0x78")]
	protected Rigidbody _rigidbody;

	[Token(Token = "0x4001495")]
	[FieldOffset(Offset = "0x80")]
	protected PhotonView _photonView;

	[Token(Token = "0x4001496")]
	[FieldOffset(Offset = "0x88")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001497")]
	[FieldOffset(Offset = "0x90")]
	protected float _timeSinceLastMessage;

	[Token(Token = "0x17000958")]
	protected float SmoothingDelay
	{
		[Token(Token = "0x6003186")]
		[Address(RVA = "0x3E9B6B0", Offset = "0x3E9B6B0", VA = "0x3E9B6B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003187")]
	[Address(RVA = "0x3E9B6C0", Offset = "0x3E9B6C0", VA = "0x3E9B6C0", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003188")]
	[Address(RVA = "0x3E9B820", Offset = "0x3E9B820", VA = "0x3E9B820", Slot = "6")]
	protected virtual void SendCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6003189")]
	[Address(RVA = "0x3E9B830", Offset = "0x3E9B830", VA = "0x3E9B830", Slot = "7")]
	protected virtual void ReceiveCustomStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600318A")]
	[Address(RVA = "0x3E9B840", Offset = "0x3E9B840", VA = "0x3E9B840", Slot = "8")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600318B")]
	[Address(RVA = "0x3E9C0D0", Offset = "0x3E9C0D0", VA = "0x3E9C0D0", Slot = "9")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600318C")]
	[Address(RVA = "0x3E9C2B0", Offset = "0x3E9C2B0", VA = "0x3E9C2B0", Slot = "4")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600318D")]
	[Address(RVA = "0x3E9C2D0", Offset = "0x3E9C2D0", VA = "0x3E9C2D0")]
	public BaseMovementSync()
	{
	}
}
