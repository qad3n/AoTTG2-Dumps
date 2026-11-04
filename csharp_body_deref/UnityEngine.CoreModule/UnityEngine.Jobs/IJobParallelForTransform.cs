// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Jobs.IJobParallelForTransform
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Jobs.LowLevel.Unsafe;

namespace UnityEngine.Jobs;

[Token(Token = "0x20001F2")]
[JobProducerType(typeof(IJobParallelForTransformExtensions.TransformParallelForLoopStruct<>))]
public interface IJobParallelForTransform
{
	[Token(Token = "0x600107A")]
	void Execute(int index, TransformAccess transform);
}
