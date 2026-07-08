using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000036")]
[AddComponentMenu("Photon Networking/Photon Transform View Classic")]
public class PhotonTransformViewClassic : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	public PhotonTransformViewPositionModel m_PositionModel;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	public PhotonTransformViewRotationModel m_RotationModel;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	public PhotonTransformViewScaleModel m_ScaleModel;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x40")]
	private PhotonTransformViewPositionControl m_PositionControl;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x48")]
	private PhotonTransformViewRotationControl m_RotationControl;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x50")]
	private PhotonTransformViewScaleControl m_ScaleControl;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x58")]
	private PhotonView m_PhotonView;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x60")]
	private bool m_ReceivedNetworkUpdate;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x61")]
	private bool m_firstTake;

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3C1D3F0", Offset = "0x3C1D3F0", VA = "0x3C1D3F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3C1D6D0", Offset = "0x3C1D6D0", VA = "0x3C1D6D0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x3C1D6E0", Offset = "0x3C1D6E0", VA = "0x3C1D6E0")]
	private void Update()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3C1D7B0", Offset = "0x3C1D7B0", VA = "0x3C1D7B0")]
	private void UpdatePosition()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3C1D830", Offset = "0x3C1D830", VA = "0x3C1D830")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3C1D8B0", Offset = "0x3C1D8B0", VA = "0x3C1D8B0")]
	private void UpdateScale()
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3C1E730", Offset = "0x3C1E730", VA = "0x3C1E730")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3C1E760", Offset = "0x3C1E760", VA = "0x3C1E760", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3C1EC90", Offset = "0x3C1EC90", VA = "0x3C1EC90")]
	public PhotonTransformViewClassic()
	{
	}
}
