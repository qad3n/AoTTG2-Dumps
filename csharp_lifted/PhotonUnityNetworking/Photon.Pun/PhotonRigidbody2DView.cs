// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonRigidbody2DView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonRigidbody2DView.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000031")]
[RequireComponent(typeof(Rigidbody2D))]
[AddComponentMenu("Photon Networking/Photon Rigidbody 2D View")]
public class PhotonRigidbody2DView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x28")]
	private float m_Distance;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Angle;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody2D m_Body;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 m_NetworkPosition;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x40")]
	private float m_NetworkRotation;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x44")]
	[HideInInspector]
	public bool m_SynchronizeVelocity;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x45")]
	[HideInInspector]
	public bool m_SynchronizeAngularVelocity;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x46")]
	[HideInInspector]
	public bool m_TeleportEnabled;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	public float m_TeleportIfDistanceGreaterThan;

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x56FBC80", Offset = "0x56FAC80", VA = "0x56FBC80")]
	public void Awake()
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x56FBCD0", Offset = "0x56FACD0", VA = "0x56FBCD0")]
	public void FixedUpdate()
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x56FBF20", Offset = "0x56FAF20", VA = "0x56FBF20", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x56FC450", Offset = "0x56FB450", VA = "0x56FC450")]
	public PhotonRigidbody2DView()
	{
	}
}
