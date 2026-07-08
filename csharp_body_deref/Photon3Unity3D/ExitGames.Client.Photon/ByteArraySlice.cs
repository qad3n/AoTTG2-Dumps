using System;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000002")]
public class ByteArraySlice : IDisposable
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	public byte[] Buffer;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x18")]
	public int Offset;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x1C")]
	public int Count;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByteArraySlicePool returnPool;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x28")]
	private readonly int stackIndex;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x3B66E30", Offset = "0x3B66E30", VA = "0x3B66E30")]
	internal ByteArraySlice(ByteArraySlicePool returnPool, int stackIndex)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x3B66ED0", Offset = "0x3B66ED0", VA = "0x3B66ED0")]
	public ByteArraySlice(byte[] buffer, int offset = 0, int count = 0)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3B66F30", Offset = "0x3B66F30", VA = "0x3B66F30")]
	public ByteArraySlice()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3B66F60", Offset = "0x3B66F60", VA = "0x3B66F60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3B66F90", Offset = "0x3B66F90", VA = "0x3B66F90")]
	public bool Release()
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3B671E0", Offset = "0x3B671E0", VA = "0x3B671E0")]
	public void Reset()
	{
	}
}
