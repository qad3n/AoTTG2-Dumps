// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutManager
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6BBB970", Offset = "0x6BBA970", VA = "0x6BBB970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AB7")]
	public static LayoutManager SharedManager
	{
		[Token(Token = "0x6002BD9")]
		[Address(RVA = "0x6BBB9C0", Offset = "0x6BBA9C0", VA = "0x6BBB9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AB8")]
	private static int DefaultCapacity
	{
		[Token(Token = "0x6002BDC")]
		[Address(RVA = "0x6BBBFC0", Offset = "0x6BBAFC0", VA = "0x6BBBFC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002BDA")]
	[Address(RVA = "0x6BBBA10", Offset = "0x6BBAA10", VA = "0x6BBBA10")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6002BDB")]
	[Address(RVA = "0x6BBBCD0", Offset = "0x6BBACD0", VA = "0x6BBBCD0")]
	private static void Shutdown()
	{
	}

	[Token(Token = "0x6002BDD")]
	[Address(RVA = "0x6BBBFD0", Offset = "0x6BBAFD0", VA = "0x6BBBFD0")]
	internal static LayoutManager GetManager(int index)
	{
		return null;
	}

	[Token(Token = "0x6002BDE")]
	[Address(RVA = "0x6BBBC70", Offset = "0x6BBAC70", VA = "0x6BBBC70")]
	public LayoutManager(Allocator allocator)
	{
	}

	[Token(Token = "0x6002BDF")]
	[Address(RVA = "0x6BBC0C0", Offset = "0x6BBB0C0", VA = "0x6BBC0C0")]
	public LayoutManager(Allocator allocator, int initialNodeCapacity)
	{
	}

	[Token(Token = "0x6002BE0")]
	[Address(RVA = "0x6BBBD70", Offset = "0x6BBAD70", VA = "0x6BBBD70", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002BE1")]
	[Address(RVA = "0x6BBC8C0", Offset = "0x6BBB8C0", VA = "0x6BBC8C0")]
	private LayoutDataAccess GetAccess()
	{
		return default(LayoutDataAccess);
	}

	[Token(Token = "0x6002BE2")]
	[Address(RVA = "0x6BBC950", Offset = "0x6BBB950", VA = "0x6BBC950")]
	public LayoutConfig GetDefaultConfig()
	{
		return default(LayoutConfig);
	}

	[Token(Token = "0x6002BE3")]
	[Address(RVA = "0x6BBC7A0", Offset = "0x6BBB7A0", VA = "0x6BBC7A0")]
	public LayoutConfig CreateConfig()
	{
		return default(LayoutConfig);
	}

	[Token(Token = "0x6002BE4")]
	[Address(RVA = "0x6BBC9F0", Offset = "0x6BBB9F0", VA = "0x6BBC9F0")]
	public void DestroyConfig(ref LayoutConfig config)
	{
	}

	[Token(Token = "0x6002BE5")]
	[Address(RVA = "0x6BBCA30", Offset = "0x6BBBA30", VA = "0x6BBCA30")]
	public LayoutNode CreateNode()
	{
		return default(LayoutNode);
	}

	[Token(Token = "0x6002BE6")]
	[Address(RVA = "0x6BBCA70", Offset = "0x6BBBA70", VA = "0x6BBCA70")]
	private LayoutNode CreateNodeInternal(LayoutHandle configHandle)
	{
		return default(LayoutNode);
	}

	[Token(Token = "0x6002BE7")]
	[Address(RVA = "0x6BBCEC0", Offset = "0x6BBBEC0", VA = "0x6BBCEC0")]
	private void TryRecycleSingleNode()
	{
	}

	[Token(Token = "0x6002BE8")]
	[Address(RVA = "0x6BBD220", Offset = "0x6BBC220", VA = "0x6BBD220")]
	private void TryRecycleNodes()
	{
	}

	[Token(Token = "0x6002BE9")]
	[Address(RVA = "0x6BBD2A0", Offset = "0x6BBC2A0", VA = "0x6BBD2A0")]
	public void EnqueueNodeForRecycling(ref LayoutNode node)
	{
	}

	[Token(Token = "0x6002BEA")]
	[Address(RVA = "0x6BBCF30", Offset = "0x6BBBF30", VA = "0x6BBCF30")]
	private void FreeNode(LayoutHandle handle)
	{
	}

	[Token(Token = "0x6002BEB")]
	[Address(RVA = "0x6BBD330", Offset = "0x6BBC330", VA = "0x6BBD330")]
	public void Collect()
	{
	}

	[Token(Token = "0x6002BEC")]
	[Address(RVA = "0x6BBD440", Offset = "0x6BBC440", VA = "0x6BBD440")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002BED")]
	[Address(RVA = "0x6BBD670", Offset = "0x6BBC670", VA = "0x6BBD670")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[Token(Token = "0x6002BEE")]
	[Address(RVA = "0x6BBD7D0", Offset = "0x6BBC7D0", VA = "0x6BBD7D0")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002BEF")]
	[Address(RVA = "0x6BBD8B0", Offset = "0x6BBC8B0", VA = "0x6BBD8B0")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[Token(Token = "0x6002BF0")]
	[Address(RVA = "0x6BBD9A0", Offset = "0x6BBC9A0", VA = "0x6BBD9A0")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
