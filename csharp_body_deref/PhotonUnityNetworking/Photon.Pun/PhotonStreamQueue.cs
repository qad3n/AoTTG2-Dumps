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

[Token(Token = "0x2000019")]
public class PhotonStreamQueue
{
	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x10")]
	private int m_SampleRate;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x14")]
	private int m_SampleCount;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x18")]
	private int m_ObjectsPerSample;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x1C")]
	private float m_LastSampleTime;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x20")]
	private int m_LastFrameCount;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x24")]
	private int m_NextObjectIndex;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x28")]
	private List<object> m_Objects;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IsWriting;

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3EF8690", Offset = "0x3EF8690", VA = "0x3EF8690")]
	public PhotonStreamQueue(int sampleRate)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3EF8720", Offset = "0x3EF8720", VA = "0x3EF8720")]
	private void BeginWritePackage()
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3EF8A00", Offset = "0x3EF8A00", VA = "0x3EF8A00")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3EF8A60", Offset = "0x3EF8A60", VA = "0x3EF8A60")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3EF8B20", Offset = "0x3EF8B20", VA = "0x3EF8B20")]
	public bool HasQueuedObjects()
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3EF8B30", Offset = "0x3EF8B30", VA = "0x3EF8B30")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3EF8BA0", Offset = "0x3EF8BA0", VA = "0x3EF8BA0")]
	public void Serialize(PhotonStream stream)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3EF8CC0", Offset = "0x3EF8CC0", VA = "0x3EF8CC0")]
	public void Deserialize(PhotonStream stream)
	{
	}
}
