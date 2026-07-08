using Il2CppDummyDll;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x2000009")]
[JobProducerType(typeof(IJobExtensions.JobStruct<>))]
public interface IJob
{
	[Token(Token = "0x6000009")]
	void Execute();
}
