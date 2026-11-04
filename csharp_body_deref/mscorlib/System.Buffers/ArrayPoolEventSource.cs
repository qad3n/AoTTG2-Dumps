// ==================== AoTTG2 cross-reference ====================
// Type: System.Buffers.ArrayPoolEventSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.Tracing;
using Il2CppDummyDll;

namespace System.Buffers;

[Token(Token = "0x2000651")]
[EventSource(Guid = "0866B2B8-5CEF-5DB9-2612-0C0FFD814A44", Name = "System.Buffers.ArrayPoolEventSource")]
internal sealed class ArrayPoolEventSource : EventSource
{
	[Token(Token = "0x2000652")]
	internal enum BufferAllocatedReason
	{
		[Token(Token = "0x4001976")]
		Pooled,
		[Token(Token = "0x4001977")]
		OverMaximumSize,
		[Token(Token = "0x4001978")]
		PoolExhausted
	}

	[Token(Token = "0x4001974")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Buffers.ArrayPoolEventSource Log;

	[Token(Token = "0x6003062")]
	[Address(RVA = "0x1ACCE70", Offset = "0x1ACB470", VA = "0x181ACCE70")]
	private ArrayPoolEventSource()
	{
	}

	[Token(Token = "0x6003063")]
	[Address(RVA = "0x1ACCBF0", Offset = "0x1ACB1F0", VA = "0x181ACCBF0")]
	[Event(1, Level = EventLevel.Verbose)]
	internal void BufferRented(int bufferId, int bufferSize, int poolId, int bucketId)
	{
	}

	[Token(Token = "0x6003064")]
	[Address(RVA = "0x1ACCAE0", Offset = "0x1ACB0E0", VA = "0x181ACCAE0")]
	[Event(2, Level = EventLevel.Informational)]
	internal void BufferAllocated(int bufferId, int bufferSize, int poolId, int bucketId, BufferAllocatedReason reason)
	{
	}

	[Token(Token = "0x6003065")]
	[Address(RVA = "0x1ACCCE0", Offset = "0x1ACB2E0", VA = "0x181ACCCE0")]
	[Event(3, Level = EventLevel.Verbose)]
	internal void BufferReturned(int bufferId, int bufferSize, int poolId)
	{
	}

	[Token(Token = "0x6003066")]
	[Address(RVA = "0x1ACCD40", Offset = "0x1ACB340", VA = "0x181ACCD40")]
	[Event(4, Level = EventLevel.Informational)]
	internal void BufferTrimmed(int bufferId, int bufferSize, int poolId)
	{
	}

	[Token(Token = "0x6003067")]
	[Address(RVA = "0x1ACCD10", Offset = "0x1ACB310", VA = "0x181ACCD10")]
	[Event(5, Level = EventLevel.Informational)]
	internal void BufferTrimPoll(int milliseconds, int pressure)
	{
	}
}
