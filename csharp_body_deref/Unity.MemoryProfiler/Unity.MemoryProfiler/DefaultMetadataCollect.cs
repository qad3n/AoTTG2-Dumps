// ==================== AoTTG2 cross-reference ====================
// Type: Unity.MemoryProfiler.DefaultMetadataCollect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Profiling.Memory;

namespace Unity.MemoryProfiler;

[Token(Token = "0x2000004")]
internal class DefaultMetadataCollect : MetadataCollect
{
	[Token(Token = "0x6000006")]
	[Address(RVA = "0x64A4480", Offset = "0x64A3480", VA = "0x64A4480")]
	public DefaultMetadataCollect()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x64A45C0", Offset = "0x64A35C0", VA = "0x64A45C0", Slot = "5")]
	public override void CollectMetadata(MemorySnapshotMetadata data)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x64A4840", Offset = "0x64A3840", VA = "0x64A4840")]
	private string FormatSecondsToTime(double timeInSeconds)
	{
		return null;
	}
}
