// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewRotationControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x200003B")]
public class PhotonTransformViewRotationControl
{
	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x10")]
	private PhotonTransformViewRotationModel m_Model;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x18")]
	private Quaternion m_NetworkRotation;

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public PhotonTransformViewRotationControl(PhotonTransformViewRotationModel model)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
	public Quaternion GetNetworkRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x1D662C0", Offset = "0x1D648C0", VA = "0x181D662C0")]
	public Quaternion GetRotation(Quaternion currentRotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x1D66490", Offset = "0x1D64A90", VA = "0x181D66490")]
	public void OnPhotonSerializeView(Quaternion currentRotation, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
