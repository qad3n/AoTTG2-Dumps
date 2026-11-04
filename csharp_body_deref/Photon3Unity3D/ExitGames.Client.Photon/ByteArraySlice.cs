// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.ByteArraySlice
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1CBB7D0", Offset = "0x1CB9DD0", VA = "0x181CBB7D0")]
	internal ByteArraySlice(ByteArraySlicePool returnPool, int stackIndex)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x1CBB870", Offset = "0x1CB9E70", VA = "0x181CBB870")]
	public ByteArraySlice(byte[] buffer, int offset = 0, int count = 0)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x1CBB8D0", Offset = "0x1CB9ED0", VA = "0x181CBB8D0")]
	public ByteArraySlice()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x1CBB740", Offset = "0x1CB9D40", VA = "0x181CBB740", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x1CBB780", Offset = "0x1CB9D80", VA = "0x181CBB780")]
	public bool Release()
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x1CBB7C0", Offset = "0x1CB9DC0", VA = "0x181CBB7C0")]
	public void Reset()
	{
	}
}
