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
	[Address(RVA = "0x3E5C780", Offset = "0x3E5C780", VA = "0x3E5C780")]
	internal ByteArraySlice(ByteArraySlicePool returnPool, int stackIndex)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x3E5C820", Offset = "0x3E5C820", VA = "0x3E5C820")]
	public ByteArraySlice(byte[] buffer, int offset = 0, int count = 0)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3E5C880", Offset = "0x3E5C880", VA = "0x3E5C880")]
	public ByteArraySlice()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3E5C8B0", Offset = "0x3E5C8B0", VA = "0x3E5C8B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3E5C8E0", Offset = "0x3E5C8E0", VA = "0x3E5C8E0")]
	public bool Release()
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3E5CB30", Offset = "0x3E5CB30", VA = "0x3E5CB30")]
	public void Reset()
	{
	}
}
