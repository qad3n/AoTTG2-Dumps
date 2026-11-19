// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformView.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000033")]
[AddComponentMenu("Photon Networking/Photon Transform View")]
[HelpURL("https://doc.photonengine.com/en-us/pun/v2/gameplay/synchronization-and-state")]
public class PhotonTransformView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x28")]
	private float m_Distance;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Angle;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x30")]
	private Vector3 m_Direction;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 m_NetworkPosition;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x48")]
	private Vector3 m_StoredPosition;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x54")]
	private Quaternion m_NetworkRotation;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x64")]
	public bool m_SynchronizePosition;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x65")]
	public bool m_SynchronizeRotation;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x66")]
	public bool m_SynchronizeScale;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x67")]
	[Tooltip("Indicates if localPosition and localRotation should be used. Scale ignores this setting, and always uses localScale to avoid issues with lossyScale.")]
	public bool m_UseLocal;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x68")]
	private bool m_firstTake;

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x56FCF30", Offset = "0x56FBF30", VA = "0x56FCF30")]
	public void Awake()
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x56FCFE0", Offset = "0x56FBFE0", VA = "0x56FCFE0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x56FCFF0", Offset = "0x56FBFF0", VA = "0x56FCFF0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x56FD000", Offset = "0x56FC000", VA = "0x56FD000")]
	public void Update()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x56FD670", Offset = "0x56FC670", VA = "0x56FD670", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x56FDCA0", Offset = "0x56FCCA0", VA = "0x56FDCA0")]
	public PhotonTransformView()
	{
	}
}
