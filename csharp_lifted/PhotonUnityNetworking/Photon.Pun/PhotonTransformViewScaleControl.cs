// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewScaleControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x200003E")]
public class PhotonTransformViewScaleControl
{
	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x10")]
	private PhotonTransformViewScaleModel m_Model;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 m_NetworkScale;

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x56FDF20", Offset = "0x56FCF20", VA = "0x56FDF20")]
	public PhotonTransformViewScaleControl(PhotonTransformViewScaleModel model)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x56FFEA0", Offset = "0x56FEEA0", VA = "0x56FFEA0")]
	public Vector3 GetNetworkScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x56FEE00", Offset = "0x56FDE00", VA = "0x56FEE00")]
	public Vector3 GetScale(Vector3 currentScale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x56FF460", Offset = "0x56FE460", VA = "0x56FF460")]
	public void OnPhotonSerializeView(Vector3 currentScale, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
