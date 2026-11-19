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

[Token(Token = "0x200062C")]
[EventSource(Guid = "0866B2B8-5CEF-5DB9-2612-0C0FFD814A44", Name = "System.Buffers.ArrayPoolEventSource")]
internal sealed class ArrayPoolEventSource : EventSource
{
	[Token(Token = "0x200062D")]
	internal enum BufferAllocatedReason
	{
		[Token(Token = "0x40018DD")]
		Pooled,
		[Token(Token = "0x40018DE")]
		OverMaximumSize,
		[Token(Token = "0x40018DF")]
		PoolExhausted
	}

	[Token(Token = "0x40018DB")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Buffers.ArrayPoolEventSource Log;

	[Token(Token = "0x6003041")]
	[Address(RVA = "0x5461E80", Offset = "0x5460E80", VA = "0x5461E80")]
	private ArrayPoolEventSource()
	{
	}

	[Token(Token = "0x6003042")]
	[Address(RVA = "0x5461F10", Offset = "0x5460F10", VA = "0x5461F10")]
	[Event(1, Level = EventLevel.Verbose)]
	internal void BufferRented(int bufferId, int bufferSize, int poolId, int bucketId)
	{
	}

	[Token(Token = "0x6003043")]
	[Address(RVA = "0x5462000", Offset = "0x5461000", VA = "0x5462000")]
	[Event(2, Level = EventLevel.Informational)]
	internal void BufferAllocated(int bufferId, int bufferSize, int poolId, int bucketId, BufferAllocatedReason reason)
	{
	}

	[Token(Token = "0x6003044")]
	[Address(RVA = "0x5462110", Offset = "0x5461110", VA = "0x5462110")]
	[Event(3, Level = EventLevel.Verbose)]
	internal void BufferReturned(int bufferId, int bufferSize, int poolId)
	{
	}

	[Token(Token = "0x6003045")]
	[Address(RVA = "0x5462130", Offset = "0x5461130", VA = "0x5462130")]
	[Event(4, Level = EventLevel.Informational)]
	internal void BufferTrimmed(int bufferId, int bufferSize, int poolId)
	{
	}

	[Token(Token = "0x6003046")]
	[Address(RVA = "0x5462150", Offset = "0x5461150", VA = "0x5462150")]
	[Event(5, Level = EventLevel.Informational)]
	internal void BufferTrimPoll(int milliseconds, int pressure)
	{
	}
}
