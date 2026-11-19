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
	[Address(RVA = "0x56FDE20", Offset = "0x56FCE20", VA = "0x56FDE20")]
	public PhotonTransformViewPositionControl(PhotonTransformViewPositionModel model)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x56FF6F0", Offset = "0x56FE6F0", VA = "0x56FF6F0")]
	private Vector3 GetOldestStoredNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x56FF070", Offset = "0x56FE070", VA = "0x56FF070")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x56FE270", Offset = "0x56FD270", VA = "0x56FE270")]
	public Vector3 UpdatePosition(Vector3 currentPosition)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x56FFBA0", Offset = "0x56FEBA0", VA = "0x56FFBA0")]
	public Vector3 GetNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x56FF750", Offset = "0x56FE750", VA = "0x56FF750")]
	public Vector3 GetExtrapolatedPositionOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x56FF280", Offset = "0x56FE280", VA = "0x56FF280")]
	public void OnPhotonSerializeView(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x56FFBB0", Offset = "0x56FEBB0", VA = "0x56FFBB0")]
	private void SerializeData(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x56FFCC0", Offset = "0x56FECC0", VA = "0x56FFCC0")]
	private void DeserializeData(PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
