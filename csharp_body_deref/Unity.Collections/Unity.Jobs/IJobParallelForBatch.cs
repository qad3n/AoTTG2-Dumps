// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobParallelForBatch
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x200000D")]
[JobProducerType(typeof(IJobParallelForBatchExtensions.JobParallelForBatchProducer<>))]
public interface IJobParallelForBatch
{
	[Token(Token = "0x6000023")]
	void Execute(int startIndex, int count);
}
