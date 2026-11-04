// ==================== AoTTG2 cross-reference ====================
// Type: Unity.MemoryProfiler.MetadataCollect
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Profiling.Memory;

namespace Unity.MemoryProfiler;

[Token(Token = "0x2000003")]
public abstract class MetadataCollect : IDisposable
{
	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x10")]
	private bool disposed;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2AB8BE0", Offset = "0x2AB71E0", VA = "0x182AB8BE0")]
	protected MetadataCollect()
	{
	}

	[Token(Token = "0x6000004")]
	public abstract void CollectMetadata(MemorySnapshotMetadata data);

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2AB8AB0", Offset = "0x2AB70B0", VA = "0x182AB8AB0", Slot = "4")]
	public void Dispose()
	{
	}
}
