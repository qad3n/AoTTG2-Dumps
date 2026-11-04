// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonStreamQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PhotonStreamQueue.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000017")]
public class PhotonStreamQueue
{
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x10")]
	private int m_SampleRate;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x14")]
	private int m_SampleCount;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x18")]
	private int m_ObjectsPerSample;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x1C")]
	private float m_LastSampleTime;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x20")]
	private int m_LastFrameCount;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x24")]
	private int m_NextObjectIndex;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x28")]
	private List<object> m_Objects;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IsWriting;

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x1D4BEC0", Offset = "0x1D4A4C0", VA = "0x181D4BEC0")]
	public PhotonStreamQueue(int sampleRate)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x1D4B6E0", Offset = "0x1D49CE0", VA = "0x181D4B6E0")]
	private void BeginWritePackage()
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x1D4BC70", Offset = "0x1D4A270", VA = "0x181D4BC70")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x1D4BCE0", Offset = "0x1D4A2E0", VA = "0x181D4BCE0")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1D4BBD0", Offset = "0x1D4A1D0", VA = "0x181D4BBD0")]
	public bool HasQueuedObjects()
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x1D4BBE0", Offset = "0x1D4A1E0", VA = "0x181D4BBE0")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x1D4BD60", Offset = "0x1D4A360", VA = "0x181D4BD60")]
	public void Serialize(PhotonStream stream)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x1D4B990", Offset = "0x1D49F90", VA = "0x181D4B990")]
	public void Deserialize(PhotonStream stream)
	{
	}
}
