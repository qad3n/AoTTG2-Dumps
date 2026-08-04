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
	[Address(RVA = "0x3F10DE0", Offset = "0x3F10DE0", VA = "0x3F10DE0")]
	public void Awake()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3F10E30", Offset = "0x3F10E30", VA = "0x3F10E30")]
	public void FixedUpdate()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x3F11070", Offset = "0x3F11070", VA = "0x3F11070", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x3F11560", Offset = "0x3F11560", VA = "0x3F11560")]
	public PhotonRigidbody2DView()
	{
	}
}
