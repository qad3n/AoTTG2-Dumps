using System.Net.Sockets;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003D")]
public class PingMono : PhotonPing
{
	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x30")]
	private Socket sock;

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3BDA350", Offset = "0x3BDA350", VA = "0x3BDA350", Slot = "5")]
	public override bool StartPing(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3BDA6B0", Offset = "0x3BDA6B0", VA = "0x3BDA6B0", Slot = "6")]
	public override bool Done()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3BDA8F0", Offset = "0x3BDA8F0", VA = "0x3BDA8F0", Slot = "7")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3BDA9A0", Offset = "0x3BDA9A0", VA = "0x3BDA9A0")]
	public PingMono()
	{
	}
}
