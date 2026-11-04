// ==================== AoTTG2 cross-reference ====================
// Type: Unity.MemoryProfiler.DefaultMetadataCollect
// Update status: NEW in this game update
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
	[Address(RVA = "0x2AB8950", Offset = "0x2AB6F50", VA = "0x182AB8950")]
	public DefaultMetadataCollect()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2AB8440", Offset = "0x2AB6A40", VA = "0x182AB8440", Slot = "5")]
	public override void CollectMetadata(MemorySnapshotMetadata data)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2AB86C0", Offset = "0x2AB6CC0", VA = "0x182AB86C0")]
	private string FormatSecondsToTime(double timeInSeconds)
	{
		return null;
	}
}
