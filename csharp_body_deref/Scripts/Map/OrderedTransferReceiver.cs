// ==================== AoTTG2 cross-reference ====================
// Type: Map.OrderedTransferReceiver
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/OrderedTransferReceiver.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003E2")]
internal class OrderedTransferReceiver
{
	[Token(Token = "0x40013C3")]
	public const long MaxTransferBytes = 2147483648L;

	[Token(Token = "0x40013C4")]
	[FieldOffset(Offset = "0x10")]
	private readonly SortedDictionary<int, byte[][]> _pending;

	[Token(Token = "0x40013C5")]
	[FieldOffset(Offset = "0x18")]
	private readonly long _maxTransferBytes;

	[Token(Token = "0x40013C6")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxTransferMessages;

	[Token(Token = "0x40013C7")]
	[FieldOffset(Offset = "0x24")]
	private int _expectedIndex;

	[Token(Token = "0x40013C8")]
	[FieldOffset(Offset = "0x28")]
	private int _messageTotal;

	[Token(Token = "0x40013C9")]
	[FieldOffset(Offset = "0x30")]
	private long _receivedBytes;

	[Token(Token = "0x40013CA")]
	[FieldOffset(Offset = "0x38")]
	private bool _active;

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x586C470", Offset = "0x586B470", VA = "0x586C470")]
	public OrderedTransferReceiver(long maxTransferBytes = 2147483648L)
	{
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x586C040", Offset = "0x586B040", VA = "0x586C040")]
	public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, Func<byte[][], int, int, bool> validator, Action<byte[][], int> processor, Action resetState)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x586C3A0", Offset = "0x586B3A0", VA = "0x586C3A0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x586C780", Offset = "0x586B780", VA = "0x586C780")]
	private bool IsValidEnvelope(byte[][] message, int messageIndex, int messageTotal)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x586C8A0", Offset = "0x586B8A0", VA = "0x586C8A0")]
	private void Drain(Action<byte[][], int> processor)
	{
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x586CA00", Offset = "0x586BA00", VA = "0x586CA00")]
	private void Process(byte[][] message, int messageIndex, Action<byte[][], int> processor)
	{
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x586C7B0", Offset = "0x586B7B0", VA = "0x586C7B0")]
	private bool Fail(Action resetState)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x586C9B0", Offset = "0x586B9B0", VA = "0x586C9B0")]
	private static long GetMessageBytes(byte[][] message)
	{
		return default(long);
	}
}
