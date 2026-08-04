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
	[Address(RVA = "0x3F12FB0", Offset = "0x3F12FB0", VA = "0x3F12FB0")]
	public PhotonTransformViewScaleControl(PhotonTransformViewScaleModel model)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x3F14ED0", Offset = "0x3F14ED0", VA = "0x3F14ED0")]
	public Vector3 GetNetworkScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x3F13E30", Offset = "0x3F13E30", VA = "0x3F13E30")]
	public Vector3 GetScale(Vector3 currentScale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x3F144D0", Offset = "0x3F144D0", VA = "0x3F144D0")]
	public void OnPhotonSerializeView(Vector3 currentScale, PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
