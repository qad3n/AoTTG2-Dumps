using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000033")]
[RequireComponent(typeof(Rigidbody2D))]
[AddComponentMenu("Photon Networking/Photon Rigidbody 2D View")]
public class PhotonRigidbody2DView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x28")]
	private float m_Distance;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Angle;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody2D m_Body;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 m_NetworkPosition;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x40")]
	private float m_NetworkRotation;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x44")]
	[HideInInspector]
	public bool m_SynchronizeVelocity;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x45")]
	[HideInInspector]
	public bool m_SynchronizeAngularVelocity;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x46")]
	[HideInInspector]
	public bool m_TeleportEnabled;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	public float m_TeleportIfDistanceGreaterThan;

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x3C1B490", Offset = "0x3C1B490", VA = "0x3C1B490")]
	public void Awake()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3C1B4E0", Offset = "0x3C1B4E0", VA = "0x3C1B4E0")]
	public void FixedUpdate()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x3C1B720", Offset = "0x3C1B720", VA = "0x3C1B720", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x3C1BC10", Offset = "0x3C1BC10", VA = "0x3C1BC10")]
	public PhotonRigidbody2DView()
	{
	}
}
