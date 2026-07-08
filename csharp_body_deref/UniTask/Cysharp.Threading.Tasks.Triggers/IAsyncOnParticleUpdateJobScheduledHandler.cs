using Il2CppDummyDll;
using UnityEngine.ParticleSystemJobs;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D9")]
public interface IAsyncOnParticleUpdateJobScheduledHandler
{
	[Token(Token = "0x6000B5E")]
	UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync();
}
