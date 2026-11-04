// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobFilter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x2000008")]
[JobProducerType(typeof(IJobFilterExtensions.JobFilterProducer<>))]
public interface IJobFilter
{
	[Token(Token = "0x600000F")]
	bool Execute(int index);
}
