using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000019")]
internal class NCommandPool
{
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x10")]
	private readonly Stack<NCommand> pool;

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3B73680", Offset = "0x3B73680", VA = "0x3B73680")]
	public NCommand Acquire(EnetPeer peer, byte[] inBuff, ref int readingOffset)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3B6B0A0", Offset = "0x3B6B0A0", VA = "0x3B6B0A0")]
	public NCommand Acquire(EnetPeer peer, byte commandType, StreamBuffer payload, byte channel)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3B77730", Offset = "0x3B77730", VA = "0x3B77730")]
	public void Release(NCommand nCommand)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3B69FE0", Offset = "0x3B69FE0", VA = "0x3B69FE0")]
	public NCommandPool()
	{
	}
}
