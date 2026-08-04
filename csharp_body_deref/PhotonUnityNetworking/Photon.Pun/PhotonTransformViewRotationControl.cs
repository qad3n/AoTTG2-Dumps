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

[Token(Token = "0x200003D")]
public class PhotonTransformViewRotationControl
{
	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x10")]
	private PhotonTransformViewRotationModel m_Model;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x18")]
	private Quaternion m_NetworkRotation;

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x3F12F80", Offset = "0x3F12F80", VA = "0x3F12F80")]
	public PhotonTransformViewRotationControl(PhotonTransformViewRotationModel model)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x3F14EC0", Offset = "0x3F14EC0", VA = "0x3F14EC0")]
	public Quaternion GetNetworkRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x3F13CB0", Offset = "0x3F13CB0", VA = "0x3F13CB0")]
	public Quaternion GetRotation(Quaternion currentRotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x3F143E0", Offset = "0x3F143E0", VA = "0x3F143E0")]
	public void OnPhotonSerializeView(Quaternion currentRotation, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
