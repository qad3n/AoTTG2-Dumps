// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200028E")]
internal abstract class RenderGraphResourcePool<Type> : IRenderGraphResourcePool where Type : class
{
	[Token(Token = "0x200028F")]
	private struct ResourceLogInfo
	{
		[Token(Token = "0x4000B76")]
		[FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x4000B77")]
		[FieldOffset(Offset = "0x0")]
		public long size;
	}

	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x0")]
	protected Dictionary<int, SortedList<int, PooledResourceEntry<Type>>> m_ResourcePool;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x0")]
	private List<(int, Type)> m_FrameAllocatedResources;

	[Token(Token = "0x4000B74")]
	private const int kStaleResourceLifetime = 10;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0x0")]
	private static List<int> s_ToRemoveList;

	[Token(Token = "0x6001241")]
	protected abstract void ReleaseInternalResource(Type res);

	[Token(Token = "0x6001242")]
	protected abstract string GetResourceName(in Type res);

	[Token(Token = "0x6001243")]
	protected abstract long GetResourceSize(in Type res);

	[Token(Token = "0x6001244")]
	protected abstract string GetResourceTypeName();

	[Token(Token = "0x6001245")]
	protected abstract int GetSortIndex(Type res);

	[Token(Token = "0x6001246")]
	public void ReleaseResource(int hash, Type resource, int currentFrameIndex, int currentExecutionCount)
	{
	}

	[Token(Token = "0x6001247")]
	public bool TryGetResource(int hashCode, out Type resource, int currentFrameIndex, int currentExecutionCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6001248")]
	public override void Cleanup()
	{
	}

	[Token(Token = "0x6001249")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	public void RegisterFrameAllocation(int hash, Type value)
	{
	}

	[Token(Token = "0x600124A")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	public void UnregisterFrameAllocation(int hash, Type value)
	{
	}

	[Token(Token = "0x600124B")]
	public override void CheckFrameAllocation(bool onException, int frameIndex)
	{
	}

	[Token(Token = "0x600124C")]
	public override void LogResources(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600124D")]
	public float GetMemorySizeInMB()
	{
		return default(float);
	}

	[Token(Token = "0x600124E")]
	public int GetNumResourcesAvailable()
	{
		return default(int);
	}

	[Token(Token = "0x600124F")]
	public override void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x6001250")]
	protected RenderGraphResourcePool()
	{
	}
}
