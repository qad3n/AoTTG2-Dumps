// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.IRenderGraphResourcePool
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200028C")]
internal abstract class IRenderGraphResourcePool
{
	[Token(Token = "0x17000256")]
	public bool IntraFrameMemoryAliasing
	{
		[Token(Token = "0x600123D")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600123E")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001239")]
	public abstract void PurgeUnusedResources(int currentFrameIndex);

	[Token(Token = "0x600123A")]
	public abstract void Cleanup();

	[Token(Token = "0x600123B")]
	public abstract void CheckFrameAllocation(bool onException, int frameIndex);

	[Token(Token = "0x600123C")]
	public abstract void LogResources(RenderGraphLogger logger);

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x2B8AA50", Offset = "0x2B89050", VA = "0x182B8AA50")]
	protected IRenderGraphResourcePool()
	{
	}
}
