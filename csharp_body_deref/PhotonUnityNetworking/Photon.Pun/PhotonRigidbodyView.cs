using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000034")]
[RequireComponent(typeof(Rigidbody))]
[AddComponentMenu("Photon Networking/Photon Rigidbody View")]
public class PhotonRigidbodyView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x28")]
	private float m_Distance;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Angle;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody m_Body;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 m_NetworkPosition;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x44")]
	private Quaternion m_NetworkRotation;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x54")]
	[HideInInspector]
	public bool m_SynchronizeVelocity;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x55")]
	[HideInInspector]
	public bool m_SynchronizeAngularVelocity;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x56")]
	[HideInInspector]
	public bool m_TeleportEnabled;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x58")]
	[HideInInspector]
	public float m_TeleportIfDistanceGreaterThan;

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3C1BC30", Offset = "0x3C1BC30", VA = "0x3C1BC30")]
	public void Awake()
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3C1BC80", Offset = "0x3C1BC80", VA = "0x3C1BC80")]
	public void FixedUpdate()
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3C1BFA0", Offset = "0x3C1BFA0", VA = "0x3C1BFA0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3C1C670", Offset = "0x3C1C670", VA = "0x3C1C670")]
	public PhotonRigidbodyView()
	{
	}
}
