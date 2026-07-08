using Il2CppDummyDll;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x200000D")]
[JobProducerType(typeof(IJobParallelForExtensions.ParallelForJobStruct<>))]
public interface IJobParallelFor
{
	[Token(Token = "0x6000010")]
	void Execute(int index);
}
