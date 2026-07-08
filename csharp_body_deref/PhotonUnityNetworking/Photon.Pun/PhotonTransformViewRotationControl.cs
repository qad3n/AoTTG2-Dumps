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
	[Address(RVA = "0x3C1D630", Offset = "0x3C1D630", VA = "0x3C1D630")]
	public PhotonTransformViewRotationControl(PhotonTransformViewRotationModel model)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x3C1F570", Offset = "0x3C1F570", VA = "0x3C1F570")]
	public Quaternion GetNetworkRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x3C1E360", Offset = "0x3C1E360", VA = "0x3C1E360")]
	public Quaternion GetRotation(Quaternion currentRotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x3C1EA90", Offset = "0x3C1EA90", VA = "0x3C1EA90")]
	public void OnPhotonSerializeView(Quaternion currentRotation, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
