using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000035")]
[AddComponentMenu("Photon Networking/Photon Transform View")]
[HelpURL("https://doc.photonengine.com/en-us/pun/v2/gameplay/synchronization-and-state")]
public class PhotonTransformView : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x28")]
	private float m_Distance;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Angle;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x30")]
	private Vector3 m_Direction;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 m_NetworkPosition;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x48")]
	private Vector3 m_StoredPosition;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x54")]
	private Quaternion m_NetworkRotation;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x64")]
	public bool m_SynchronizePosition;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x65")]
	public bool m_SynchronizeRotation;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x66")]
	public bool m_SynchronizeScale;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x67")]
	[Tooltip("Indicates if localPosition and localRotation should be used. Scale ignores this setting, and always uses localScale to avoid issues with lossyScale.")]
	public bool m_UseLocal;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x68")]
	private bool m_firstTake;

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3C1C690", Offset = "0x3C1C690", VA = "0x3C1C690")]
	public void Awake()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3C1C730", Offset = "0x3C1C730", VA = "0x3C1C730")]
	private void Reset()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3C1C740", Offset = "0x3C1C740", VA = "0x3C1C740")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3C1C750", Offset = "0x3C1C750", VA = "0x3C1C750")]
	public void Update()
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3C1CDF0", Offset = "0x3C1CDF0", VA = "0x3C1CDF0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3C1D3E0", Offset = "0x3C1D3E0", VA = "0x3C1D3E0")]
	public PhotonTransformView()
	{
	}
}
