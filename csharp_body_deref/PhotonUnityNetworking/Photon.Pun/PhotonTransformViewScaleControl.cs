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
	[Address(RVA = "0x1D66850", Offset = "0x1D64E50", VA = "0x181D66850")]
	public PhotonTransformViewScaleControl(PhotonTransformViewScaleModel model)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x111AD10", Offset = "0x1119310", VA = "0x18111AD10")]
	public Vector3 GetNetworkScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x1D66580", Offset = "0x1D64B80", VA = "0x181D66580")]
	public Vector3 GetScale(Vector3 currentScale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x1D66740", Offset = "0x1D64D40", VA = "0x181D66740")]
	public void OnPhotonSerializeView(Vector3 currentScale, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
