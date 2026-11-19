// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewClassic
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000034")]
[AddComponentMenu("Photon Networking/Photon Transform View Classic")]
public class PhotonTransformViewClassic : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	public PhotonTransformViewPositionModel m_PositionModel;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	public PhotonTransformViewRotationModel m_RotationModel;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	public PhotonTransformViewScaleModel m_ScaleModel;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x40")]
	private PhotonTransformViewPositionControl m_PositionControl;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x48")]
	private PhotonTransformViewRotationControl m_RotationControl;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x50")]
	private PhotonTransformViewScaleControl m_ScaleControl;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x58")]
	private PhotonView m_PhotonView;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x60")]
	private bool m_ReceivedNetworkUpdate;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x61")]
	private bool m_firstTake;

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x56FDCB0", Offset = "0x56FCCB0", VA = "0x56FDCB0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x56FDF90", Offset = "0x56FCF90", VA = "0x56FDF90")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x56FDFA0", Offset = "0x56FCFA0", VA = "0x56FDFA0")]
	private void Update()
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x56FE0F0", Offset = "0x56FD0F0", VA = "0x56FE0F0")]
	private void UpdatePosition()
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x56FE170", Offset = "0x56FD170", VA = "0x56FE170")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x56FE1F0", Offset = "0x56FD1F0", VA = "0x56FE1F0")]
	private void UpdateScale()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x56FF050", Offset = "0x56FE050", VA = "0x56FF050")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x56FF080", Offset = "0x56FE080", VA = "0x56FF080", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x56FF560", Offset = "0x56FE560", VA = "0x56FF560")]
	public PhotonTransformViewClassic()
	{
	}
}
