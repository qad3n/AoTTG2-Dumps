// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Profiling;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005F0")]
internal class LayoutManager : IDisposable
{
	[Token(Token = "0x20005F1")]
	private enum SharedManagerState
	{
		[Token(Token = "0x4001636")]
		Uninitialized,
		[Token(Token = "0x4001637")]
		Initialized,
		[Token(Token = "0x4001638")]
		Shutdown
	}

	[Token(Token = "0x4001627")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static SharedManagerState s_Initialized;

	[Token(Token = "0x4001628")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static bool s_AppDomainUnloadRegistered;

	[Token(Token = "0x4001629")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LayoutManager s_SharedInstance;

	[Token(Token = "0x400162A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<LayoutManager> s_Managers;

	[Token(Token = "0x400162B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly int m_Index;

	[Token(Token = "0x400162C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private LayoutDataStore m_Nodes;

	[Token(Token = "0x400162D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private LayoutDataStore m_Configs;

	[Token(Token = "0x400162E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly ConcurrentQueue<LayoutHandle> m_NodesToFree;

	[Token(Token = "0x400162F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly LayoutHandle m_DefaultConfig;

	[Token(Token = "0x4001630")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly ManagedObjectStore<LayoutMeasureFunction> m_ManagedMeasureFunctions;

	[Token(Token = "0x4001631")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly ManagedObjectStore<LayoutBaselineFunction> m_ManagedBaselineFunctions;

	[Token(Token = "0x4001632")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly ManagedObjectStore<GCHandle> m_ManagedOwners;

	[Token(Token = "0x4001633")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly ProfilerMarker m_CollectMarker;

	[Token(Token = "0x4001634")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int m_HighMark;

	[Token(Token = "0x17000AB6")]
	public static bool IsSharedManagerCreated
	{
		[Token(Token = "0x6002BD8")]
		[Address(RVA = "0x31A5E80", Offset = "0x31A4480", VA = "0x1831A5E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AB7")]
	public static LayoutManager SharedManager
	{
		[Token(Token = "0x6002BD9")]
		[Address(RVA = "0x31A5EE0", Offset = "0x31A44E0", VA = "0x1831A5EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AB8")]
	private static int DefaultCapacity
	{
		[Token(Token = "0x6002BDC")]
		[Address(RVA = "0x846EF0", Offset = "0x8454F0", VA = "0x180846EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002BDA")]
	[Address(RVA = "0x31A4EB0", Offset = "0x31A34B0", VA = "0x1831A4EB0")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6002BDB")]
	[Address(RVA = "0x31A52C0", Offset = "0x31A38C0", VA = "0x1831A52C0")]
	private static void Shutdown()
	{
	}

	[Token(Token = "0x6002BDD")]
	[Address(RVA = "0x31A4B70", Offset = "0x31A3170", VA = "0x1831A4B70")]
	internal static LayoutManager GetManager(int index)
	{
		return null;
	}

	[Token(Token = "0x6002BDE")]
	[Address(RVA = "0x31A5E20", Offset = "0x31A4420", VA = "0x1831A5E20")]
	public LayoutManager(Allocator allocator)
	{
	}

	[Token(Token = "0x6002BDF")]
	[Address(RVA = "0x31A5740", Offset = "0x31A3D40", VA = "0x1831A5740")]
	public LayoutManager(Allocator allocator, int initialNodeCapacity)
	{
	}

	[Token(Token = "0x6002BE0")]
	[Address(RVA = "0x31A4520", Offset = "0x31A2B20", VA = "0x1831A4520", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002BE1")]
	[Address(RVA = "0x31A1E70", Offset = "0x31A0470", VA = "0x1831A1E70")]
	private LayoutDataAccess GetAccess()
	{
		return default(LayoutDataAccess);
	}

	[Token(Token = "0x6002BE2")]
	[Address(RVA = "0x31A4AE0", Offset = "0x31A30E0", VA = "0x1831A4AE0")]
	public LayoutConfig GetDefaultConfig()
	{
		return default(LayoutConfig);
	}

	[Token(Token = "0x6002BE3")]
	[Address(RVA = "0x31A3FF0", Offset = "0x31A25F0", VA = "0x1831A3FF0")]
	public LayoutConfig CreateConfig()
	{
		return default(LayoutConfig);
	}

	[Token(Token = "0x6002BE4")]
	[Address(RVA = "0x31A44D0", Offset = "0x31A2AD0", VA = "0x1831A44D0")]
	public void DestroyConfig(ref LayoutConfig config)
	{
	}

	[Token(Token = "0x6002BE5")]
	[Address(RVA = "0x31A4470", Offset = "0x31A2A70", VA = "0x1831A4470")]
	public LayoutNode CreateNode()
	{
		return default(LayoutNode);
	}

	[Token(Token = "0x6002BE6")]
	[Address(RVA = "0x31A40E0", Offset = "0x31A26E0", VA = "0x1831A40E0")]
	private LayoutNode CreateNodeInternal(LayoutHandle configHandle)
	{
		return default(LayoutNode);
	}

	[Token(Token = "0x6002BE7")]
	[Address(RVA = "0x31A5640", Offset = "0x31A3C40", VA = "0x1831A5640")]
	private void TryRecycleSingleNode()
	{
	}

	[Token(Token = "0x6002BE8")]
	[Address(RVA = "0x31A5360", Offset = "0x31A3960", VA = "0x1831A5360")]
	private void TryRecycleNodes()
	{
	}

	[Token(Token = "0x6002BE9")]
	[Address(RVA = "0x31A4740", Offset = "0x31A2D40", VA = "0x1831A4740")]
	public void EnqueueNodeForRecycling(ref LayoutNode node)
	{
	}

	[Token(Token = "0x6002BEA")]
	[Address(RVA = "0x31A47D0", Offset = "0x31A2DD0", VA = "0x1831A47D0")]
	private void FreeNode(LayoutHandle handle)
	{
	}

	[Token(Token = "0x6002BEB")]
	[Address(RVA = "0x31A3F60", Offset = "0x31A2560", VA = "0x1831A3F60")]
	public void Collect()
	{
	}

	[Token(Token = "0x6002BEC")]
	[Address(RVA = "0x31A4CE0", Offset = "0x31A32E0", VA = "0x1831A4CE0")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002BED")]
	[Address(RVA = "0x31A51B0", Offset = "0x31A37B0", VA = "0x1831A51B0")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[Token(Token = "0x6002BEE")]
	[Address(RVA = "0x31A4C30", Offset = "0x31A3230", VA = "0x1831A4C30")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002BEF")]
	[Address(RVA = "0x31A5110", Offset = "0x31A3710", VA = "0x1831A5110")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[Token(Token = "0x6002BF0")]
	[Address(RVA = "0x31A4A30", Offset = "0x31A3030", VA = "0x1831A4A30")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
