// ==================== AoTTG2 cross-reference ====================
// Type: Unity.MemoryProfiler.MetadataCollect
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x64A44C0", Offset = "0x64A34C0", VA = "0x64A44C0")]
	protected MetadataCollect()
	{
	}

	[Token(Token = "0x6000004")]
	public abstract void CollectMetadata(MemorySnapshotMetadata data);

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x64A4300", Offset = "0x64A3300", VA = "0x64A4300", Slot = "4")]
	public void Dispose()
	{
	}
}
