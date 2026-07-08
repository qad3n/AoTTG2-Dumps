using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000040")]
public class PhotonTransformViewScaleControl
{
	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x10")]
	private PhotonTransformViewScaleModel m_Model;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 m_NetworkScale;

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x3C1D660", Offset = "0x3C1D660", VA = "0x3C1D660")]
	public PhotonTransformViewScaleControl(PhotonTransformViewScaleModel model)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x3C1F580", Offset = "0x3C1F580", VA = "0x3C1F580")]
	public Vector3 GetNetworkScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x3C1E4E0", Offset = "0x3C1E4E0", VA = "0x3C1E4E0")]
	public Vector3 GetScale(Vector3 currentScale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x3C1EB80", Offset = "0x3C1EB80", VA = "0x3C1EB80")]
	public void OnPhotonSerializeView(Vector3 currentScale, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
