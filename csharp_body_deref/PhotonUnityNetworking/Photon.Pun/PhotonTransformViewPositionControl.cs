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

[Token(Token = "0x200003A")]
public class PhotonTransformViewPositionControl
{
	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x10")]
	private PhotonTransformViewPositionModel m_Model;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x18")]
	private float m_CurrentSpeed;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x20")]
	private double m_LastSerializeTime;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x28")]
	private Vector3 m_SynchronizedSpeed;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x34")]
	private float m_SynchronizedTurnSpeed;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 m_NetworkPosition;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x48")]
	private Queue<Vector3> m_OldNetworkPositions;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x50")]
	private bool m_UpdatedPositionAfterOnSerialize;

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x3F12EB0", Offset = "0x3F12EB0", VA = "0x3F12EB0")]
	public PhotonTransformViewPositionControl(PhotonTransformViewPositionModel model)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3F14750", Offset = "0x3F14750", VA = "0x3F14750")]
	private Vector3 GetOldestStoredNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3F140A0", Offset = "0x3F140A0", VA = "0x3F140A0")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3F13280", Offset = "0x3F13280", VA = "0x3F13280")]
	public Vector3 UpdatePosition(Vector3 currentPosition)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3F14BC0", Offset = "0x3F14BC0", VA = "0x3F14BC0")]
	public Vector3 GetNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3F147B0", Offset = "0x3F147B0", VA = "0x3F147B0")]
	public Vector3 GetExtrapolatedPositionOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3F142F0", Offset = "0x3F142F0", VA = "0x3F142F0")]
	public void OnPhotonSerializeView(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3F14BD0", Offset = "0x3F14BD0", VA = "0x3F14BD0")]
	private void SerializeData(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3F14CE0", Offset = "0x3F14CE0", VA = "0x3F14CE0")]
	private void DeserializeData(PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
