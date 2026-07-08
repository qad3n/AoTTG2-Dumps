using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200004C")]
internal abstract class IRenderGraphResourcePool
{
	[Token(Token = "0x600049F")]
	public abstract void PurgeUnusedResources(int currentFrameIndex);

	[Token(Token = "0x60004A0")]
	public abstract void Cleanup();

	[Token(Token = "0x60004A1")]
	public abstract void CheckFrameAllocation(bool onException, int frameIndex);

	[Token(Token = "0x60004A2")]
	public abstract void LogResources(RenderGraphLogger logger);

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4869940", Offset = "0x4869940", VA = "0x4869940")]
	protected IRenderGraphResourcePool()
	{
	}
}
