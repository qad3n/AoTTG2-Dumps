// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200004D")]
internal abstract class RenderGraphResourcePool<Type> : IRenderGraphResourcePool where Type : class
{
	[Token(Token = "0x200004E")]
	private struct ResourceLogInfo
	{
		[Token(Token = "0x400012A")]
		[FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x400012B")]
		[FieldOffset(Offset = "0x0")]
		public long size;
	}

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x0")]
	protected Dictionary<int, SortedList<int, (Type resource, int frameIndex)>> m_ResourcePool;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x0")]
	protected List<int> m_RemoveList;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x0")]
	private List<(int, Type)> m_FrameAllocatedResources;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x0")]
	protected static int s_CurrentFrameIndex;

	[Token(Token = "0x4000129")]
	private const int kStaleResourceLifetime = 10;

	[Token(Token = "0x60004A4")]
	protected abstract void ReleaseInternalResource(Type res);

	[Token(Token = "0x60004A5")]
	protected abstract string GetResourceName(Type res);

	[Token(Token = "0x60004A6")]
	protected abstract long GetResourceSize(Type res);

	[Token(Token = "0x60004A7")]
	protected abstract string GetResourceTypeName();

	[Token(Token = "0x60004A8")]
	protected abstract int GetSortIndex(Type res);

	[Token(Token = "0x60004A9")]
	public void ReleaseResource(int hash, Type resource, int currentFrameIndex)
	{
	}

	[Token(Token = "0x60004AA")]
	public bool TryGetResource(int hashCode, out Type resource)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AB")]
	public override void Cleanup()
	{
	}

	[Token(Token = "0x60004AC")]
	public void RegisterFrameAllocation(int hash, Type value)
	{
	}

	[Token(Token = "0x60004AD")]
	public void UnregisterFrameAllocation(int hash, Type value)
	{
	}

	[Token(Token = "0x60004AE")]
	public override void CheckFrameAllocation(bool onException, int frameIndex)
	{
	}

	[Token(Token = "0x60004AF")]
	public override void LogResources(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x60004B0")]
	protected static bool ShouldReleaseResource(int lastUsedFrameIndex, int currentFrameIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B1")]
	protected RenderGraphResourcePool()
	{
	}
}
