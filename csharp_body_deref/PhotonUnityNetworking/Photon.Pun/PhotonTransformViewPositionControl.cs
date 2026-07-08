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
	[Address(RVA = "0x3C1D560", Offset = "0x3C1D560", VA = "0x3C1D560")]
	public PhotonTransformViewPositionControl(PhotonTransformViewPositionModel model)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3C1EE00", Offset = "0x3C1EE00", VA = "0x3C1EE00")]
	private Vector3 GetOldestStoredNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3C1E750", Offset = "0x3C1E750", VA = "0x3C1E750")]
	public void SetSynchronizedValues(Vector3 speed, float turnSpeed)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3C1D930", Offset = "0x3C1D930", VA = "0x3C1D930")]
	public Vector3 UpdatePosition(Vector3 currentPosition)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3C1F270", Offset = "0x3C1F270", VA = "0x3C1F270")]
	public Vector3 GetNetworkPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3C1EE60", Offset = "0x3C1EE60", VA = "0x3C1EE60")]
	public Vector3 GetExtrapolatedPositionOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3C1E9A0", Offset = "0x3C1E9A0", VA = "0x3C1E9A0")]
	public void OnPhotonSerializeView(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3C1F280", Offset = "0x3C1F280", VA = "0x3C1F280")]
	private void SerializeData(Vector3 currentPosition, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3C1F390", Offset = "0x3C1F390", VA = "0x3C1F390")]
	private void DeserializeData(PhotonStream stream, PhotonMessageInfo info)
	{
	}
}
