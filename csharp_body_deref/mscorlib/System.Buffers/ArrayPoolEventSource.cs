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

[Token(Token = "0x200067D")]
[EventSource(Guid = "0866B2B8-5CEF-5DB9-2612-0C0FFD814A44", Name = "System.Buffers.ArrayPoolEventSource")]
internal sealed class ArrayPoolEventSource : EventSource
{
	[Token(Token = "0x200067E")]
	internal enum BufferAllocatedReason
	{
		[Token(Token = "0x4001B74")]
		Pooled,
		[Token(Token = "0x4001B75")]
		OverMaximumSize,
		[Token(Token = "0x4001B76")]
		PoolExhausted
	}

	[Token(Token = "0x4001B72")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Buffers.ArrayPoolEventSource Log;

	[Token(Token = "0x6003348")]
	[Address(RVA = "0x3C8F070", Offset = "0x3C8F070", VA = "0x3C8F070")]
	private ArrayPoolEventSource()
	{
	}

	[Token(Token = "0x6003349")]
	[Address(RVA = "0x3C8F110", Offset = "0x3C8F110", VA = "0x3C8F110")]
	[Event(1, Level = EventLevel.Verbose)]
	internal void BufferRented(int bufferId, int bufferSize, int poolId, int bucketId)
	{
	}

	[Token(Token = "0x600334A")]
	[Address(RVA = "0x3C8F1E0", Offset = "0x3C8F1E0", VA = "0x3C8F1E0")]
	[Event(2, Level = EventLevel.Informational)]
	internal void BufferAllocated(int bufferId, int bufferSize, int poolId, int bucketId, BufferAllocatedReason reason)
	{
	}

	[Token(Token = "0x600334B")]
	[Address(RVA = "0x3C8F2D0", Offset = "0x3C8F2D0", VA = "0x3C8F2D0")]
	[Event(3, Level = EventLevel.Verbose)]
	internal void BufferReturned(int bufferId, int bufferSize, int poolId)
	{
	}

	[Token(Token = "0x600334C")]
	[Address(RVA = "0x3C8F2E0", Offset = "0x3C8F2E0", VA = "0x3C8F2E0")]
	[Event(4, Level = EventLevel.Informational)]
	internal void BufferTrimmed(int bufferId, int bufferSize, int poolId)
	{
	}

	[Token(Token = "0x600334D")]
	[Address(RVA = "0x3C8F2F0", Offset = "0x3C8F2F0", VA = "0x3C8F2F0")]
	[Event(5, Level = EventLevel.Informational)]
	internal void BufferTrimPoll(int milliseconds, int pressure)
	{
	}
}
