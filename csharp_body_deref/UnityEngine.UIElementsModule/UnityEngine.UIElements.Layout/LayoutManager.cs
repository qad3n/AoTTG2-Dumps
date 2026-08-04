// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004FA")]
internal class LayoutManager : IDisposable
{
	[Token(Token = "0x4001094")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_Initialized;

	[Token(Token = "0x4001095")]
	[FieldOffset(Offset = "0x1")]
	private static bool s_AppDomainUnloadRegistered;

	[Token(Token = "0x4001096")]
	[FieldOffset(Offset = "0x8")]
	private static LayoutManager s_SharedInstance;

	[Token(Token = "0x4001097")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<LayoutManager> s_Managers;

	[Token(Token = "0x4001098")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Index;

	[Token(Token = "0x4001099")]
	[FieldOffset(Offset = "0x18")]
	private LayoutDataStore m_Nodes;

	[Token(Token = "0x400109A")]
	[FieldOffset(Offset = "0x28")]
	private LayoutDataStore m_Configs;

	[Token(Token = "0x400109B")]
	[FieldOffset(Offset = "0x38")]
	private readonly object m_SyncRoot;

	[Token(Token = "0x400109C")]
	[FieldOffset(Offset = "0x40")]
	private readonly Stack<LayoutHandle> m_NodesToFree;

	[Token(Token = "0x400109D")]
	[FieldOffset(Offset = "0x48")]
	private readonly LayoutHandle m_DefaultConfig;

	[Token(Token = "0x400109E")]
	[FieldOffset(Offset = "0x50")]
	private readonly ManagedObjectStore<LayoutMeasureFunction> m_ManagedMeasureFunctions;

	[Token(Token = "0x400109F")]
	[FieldOffset(Offset = "0x58")]
	private readonly ManagedObjectStore<LayoutBaselineFunction> m_ManagedBaselineFunctions;

	[Token(Token = "0x40010A0")]
	[FieldOffset(Offset = "0x60")]
	private readonly ManagedObjectStore<WeakReference<VisualElement>> m_ManagedOwners;

	[Token(Token = "0x40010A1")]
	[FieldOffset(Offset = "0x68")]
	private int m_HighMark;

	[Token(Token = "0x170007A6")]
	public static LayoutManager SharedManager
	{
		[Token(Token = "0x6001E99")]
		[Address(RVA = "0x4FB46A0", Offset = "0x4FB46A0", VA = "0x4FB46A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x4FB4710", Offset = "0x4FB4710", VA = "0x4FB4710")]
	static LayoutManager()
	{
	}

	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x4FB4790", Offset = "0x4FB4790", VA = "0x4FB4790")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6001E9C")]
	[Address(RVA = "0x4FB4E20", Offset = "0x4FB4E20", VA = "0x4FB4E20")]
	private static void Shutdown()
	{
	}

	[Token(Token = "0x6001E9D")]
	[Address(RVA = "0x4FB5040", Offset = "0x4FB5040", VA = "0x4FB5040")]
	internal static LayoutManager GetManager(int index)
	{
		return null;
	}

	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x4FB49A0", Offset = "0x4FB49A0", VA = "0x4FB49A0")]
	public LayoutManager(Allocator allocator)
	{
	}

	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x4FB4EC0", Offset = "0x4FB4EC0", VA = "0x4FB4EC0", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x4FB5560", Offset = "0x4FB5560", VA = "0x4FB5560")]
	private LayoutDataAccess GetAccess()
	{
		return default(LayoutDataAccess);
	}

	[Token(Token = "0x6001EA1")]
	[Address(RVA = "0x4FB55C0", Offset = "0x4FB55C0", VA = "0x4FB55C0")]
	public LayoutConfig GetDefaultConfig()
	{
		return default(LayoutConfig);
	}

	[Token(Token = "0x6001EA2")]
	[Address(RVA = "0x4FB5380", Offset = "0x4FB5380", VA = "0x4FB5380")]
	public LayoutConfig CreateConfig()
	{
		return default(LayoutConfig);
	}

	[Token(Token = "0x6001EA3")]
	[Address(RVA = "0x4FB5620", Offset = "0x4FB5620", VA = "0x4FB5620")]
	public void DestroyConfig(ref LayoutConfig config)
	{
	}

	[Token(Token = "0x6001EA4")]
	[Address(RVA = "0x4FB5770", Offset = "0x4FB5770", VA = "0x4FB5770")]
	public LayoutNode CreateNode()
	{
		return default(LayoutNode);
	}

	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x4FB57C0", Offset = "0x4FB57C0", VA = "0x4FB57C0")]
	private LayoutNode CreateNodeInternal(LayoutHandle configHandle)
	{
		return default(LayoutNode);
	}

	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x4FB5A80", Offset = "0x4FB5A80", VA = "0x4FB5A80")]
	private void TryFreeNodes()
	{
	}

	[Token(Token = "0x6001EA7")]
	[Address(RVA = "0x4FB5F90", Offset = "0x4FB5F90", VA = "0x4FB5F90")]
	public void DestroyNode(ref LayoutNode node)
	{
	}

	[Token(Token = "0x6001EA8")]
	[Address(RVA = "0x4FB5E60", Offset = "0x4FB5E60", VA = "0x4FB5E60")]
	private void FreeNode(LayoutHandle handle)
	{
	}

	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x4FB61E0", Offset = "0x4FB61E0", VA = "0x4FB61E0")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x4FB6290", Offset = "0x4FB6290", VA = "0x4FB6290")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x4FB6350", Offset = "0x4FB6350", VA = "0x4FB6350")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x4FB6480", Offset = "0x4FB6480", VA = "0x4FB6480")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[Token(Token = "0x6001EAD")]
	[Address(RVA = "0x4FB6590", Offset = "0x4FB6590", VA = "0x4FB6590")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
