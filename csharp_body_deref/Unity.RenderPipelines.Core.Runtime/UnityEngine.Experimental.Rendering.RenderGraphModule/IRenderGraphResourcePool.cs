// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B8EA30", Offset = "0x4B8EA30", VA = "0x4B8EA30")]
	protected IRenderGraphResourcePool()
	{
	}
}
