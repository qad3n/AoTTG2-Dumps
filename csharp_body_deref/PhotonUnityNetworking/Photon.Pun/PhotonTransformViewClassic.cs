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
	[Address(RVA = "0x3F12D40", Offset = "0x3F12D40", VA = "0x3F12D40")]
	private void Awake()
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3F13020", Offset = "0x3F13020", VA = "0x3F13020")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x3F13030", Offset = "0x3F13030", VA = "0x3F13030")]
	private void Update()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3F13100", Offset = "0x3F13100", VA = "0x3F13100")]
	private void UpdatePosition()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3F13180", Offset = "0x3F13180", VA = "0x3F13180")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3F13200", Offset = "0x3F13200", VA = "0x3F13200")]
	private void UpdateScale()
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3F14080", Offset = "0x3F14080", VA = "0x3F14080")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3F140B0", Offset = "0x3F140B0", VA = "0x3F140B0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3F145E0", Offset = "0x3F145E0", VA = "0x3F145E0")]
	public PhotonTransformViewClassic()
	{
	}
}
