// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewPositionControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000038")]
public class PhotonTransformViewPositionControl
{
	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x10")]
	private PhotonTransformViewPositionModel m_Model;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x18")]
	private float m_CurrentSpeed;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x20")]
	private double m_LastSerializeTime;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x28")]
	private Vector3 m_SynchronizedSpeed;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x34")]
	private float m_SynchronizedTurnSpeed;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 m_NetworkPosition;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x48")]
	private Queue<Vector3> m_OldNetworkPositions;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x50")]
	private bool m_UpdatedPositionAfterOnSerialize;

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x1D661A0", Offset = "0x1D647A0", VA = "0x181D661A0")]
	public PhotonTransformViewPositionControl(PhotonTransformViewPositionModel model)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x1D65990", Offset = "0x1D63F90", VA = "0x181D65990")]
	private Vector3 GetOldestStoredNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x1D65CC0", Offset = "0x1D642C0", VA = "0x181D65CC0")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x1D65CE0", Offset = "0x1D642E0", VA = "0x181D65CE0")]
	public Vector3 UpdatePosition(Vector3 currentPosition)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x1D65970", Offset = "0x1D63F70", VA = "0x181D65970")]
	public Vector3 GetNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x1D65590", Offset = "0x1D63B90", VA = "0x181D65590")]
	public Vector3 GetExtrapolatedPositionOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x1D65A20", Offset = "0x1D64020", VA = "0x181D65A20")]
	public void OnPhotonSerializeView(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x1D65BB0", Offset = "0x1D641B0", VA = "0x181D65BB0")]
	private void SerializeData(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x1D65390", Offset = "0x1D63990", VA = "0x181D65390")]
	private void DeserializeData(PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
