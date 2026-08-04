// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.NCommandPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3E68FD0", Offset = "0x3E68FD0", VA = "0x3E68FD0")]
	public NCommand Acquire(EnetPeer peer, byte[] inBuff, ref int readingOffset)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3E609F0", Offset = "0x3E609F0", VA = "0x3E609F0")]
	public NCommand Acquire(EnetPeer peer, byte commandType, StreamBuffer payload, byte channel)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3E6D080", Offset = "0x3E6D080", VA = "0x3E6D080")]
	public void Release(NCommand nCommand)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3E5F930", Offset = "0x3E5F930", VA = "0x3E5F930")]
	public NCommandPool()
	{
	}
}
