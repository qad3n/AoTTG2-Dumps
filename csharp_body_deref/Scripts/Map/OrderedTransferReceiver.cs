// ==================== AoTTG2 cross-reference ====================
// Type: Map.OrderedTransferReceiver
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/OrderedTransferReceiver.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000387")]
internal class OrderedTransferReceiver
{
	[Token(Token = "0x4001232")]
	public const long MaxTransferBytes = 2147483648L;

	[Token(Token = "0x4001233")]
	[FieldOffset(Offset = "0x10")]
	private readonly SortedDictionary<int, byte[][]> _pending;

	[Token(Token = "0x4001234")]
	[FieldOffset(Offset = "0x18")]
	private readonly long _maxTransferBytes;

	[Token(Token = "0x4001235")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxTransferMessages;

	[Token(Token = "0x4001236")]
	[FieldOffset(Offset = "0x24")]
	private int _expectedIndex;

	[Token(Token = "0x4001237")]
	[FieldOffset(Offset = "0x28")]
	private int _messageTotal;

	[Token(Token = "0x4001238")]
	[FieldOffset(Offset = "0x30")]
	private long _receivedBytes;

	[Token(Token = "0x4001239")]
	[FieldOffset(Offset = "0x38")]
	private bool _active;

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x1E93EB0", Offset = "0x1E924B0", VA = "0x181E93EB0")]
	public OrderedTransferReceiver(long maxTransferBytes = 2147483648L)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x1E93C80", Offset = "0x1E92280", VA = "0x181E93C80")]
	public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, Func<byte[][], int, int, bool> validator, Action<byte[][], int> processor, Action resetState)
	{
		return default(bool);
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x1E93C20", Offset = "0x1E92220", VA = "0x181E93C20")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x1E93BD0", Offset = "0x1E921D0", VA = "0x181E93BD0")]
	private bool IsValidEnvelope(byte[][] message, int messageIndex, int messageTotal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x1E93A40", Offset = "0x1E92040", VA = "0x181E93A40")]
	private void Drain(Action<byte[][], int> processor)
	{
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x1E93BF0", Offset = "0x1E921F0", VA = "0x181E93BF0")]
	private void Process(byte[][] message, int messageIndex, Action<byte[][], int> processor)
	{
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x1E93B00", Offset = "0x1E92100", VA = "0x181E93B00")]
	private bool Fail(Action resetState)
	{
		return default(bool);
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x1E93B80", Offset = "0x1E92180", VA = "0x181E93B80")]
	private static long GetMessageBytes(byte[][] message)
	{
		return default(long);
	}
}
