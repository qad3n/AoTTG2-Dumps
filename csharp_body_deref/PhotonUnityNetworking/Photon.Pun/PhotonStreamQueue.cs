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
	[Address(RVA = "0x3C15190", Offset = "0x3C15190", VA = "0x3C15190")]
	public PhotonStreamQueue(int sampleRate)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3C15220", Offset = "0x3C15220", VA = "0x3C15220")]
	private void BeginWritePackage()
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3C15500", Offset = "0x3C15500", VA = "0x3C15500")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3C15560", Offset = "0x3C15560", VA = "0x3C15560")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3C15620", Offset = "0x3C15620", VA = "0x3C15620")]
	public bool HasQueuedObjects()
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3C15630", Offset = "0x3C15630", VA = "0x3C15630")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3C156A0", Offset = "0x3C156A0", VA = "0x3C156A0")]
	public void Serialize(PhotonStream stream)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3C157C0", Offset = "0x3C157C0", VA = "0x3C157C0")]
	public void Deserialize(PhotonStream stream)
	{
	}
}
