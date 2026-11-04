// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.Hierarchy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Hierarchy;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000016")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyNodeTypeHandlerBase.h")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/Hierarchy.h")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/HierarchyBindings.h")]
public sealed class Hierarchy : IDisposable
{
	[Token(Token = "0x2000017")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToUnmanaged(Hierarchy hierarchy)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x2000018")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal delegate void HandlerCreatedEventHandler(HierarchyNodeTypeHandlerBase handler);

	[Token(Token = "0x400002F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly IntPtr m_RootPtr;

	[Token(Token = "0x4000031")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly IntPtr m_VersionPtr;

	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool m_IsOwner;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private HandlerCreatedEventHandler HandlerCreated;

	[Token(Token = "0x1700000A")]
	public bool IsCreated
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2F7D790", Offset = "0x2F7BD90", VA = "0x182F7D790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	public unsafe ref readonly HierarchyNode Root
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x2F82C30", Offset = "0x2F81230", VA = "0x182F82C30")]
		get
		{
			return ref *(HierarchyNode*)null;
		}
	}

	[Token(Token = "0x1700000C")]
	public bool UpdateNeeded
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2F82C80", Offset = "0x2F81280", VA = "0x182F82C80")]
		[UnityEngine.Bindings.NativeMethod("UpdateNeeded", IsThreadSafe = true)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	internal int Version
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x2F82CE0", Offset = "0x2F812E0", VA = "0x182F82CE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2F82B60", Offset = "0x2F81160", VA = "0x182F82B60")]
	public Hierarchy()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2F82BF0", Offset = "0x2F811F0", VA = "0x182F82BF0")]
	private Hierarchy(IntPtr nativePtr, IntPtr rootPtr, IntPtr versionPtr)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2F81DD0", Offset = "0x2F803D0", VA = "0x182F81DD0", Slot = "1")]
	~Hierarchy()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2F81B40", Offset = "0x2F80140", VA = "0x182F81B40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2F81AE0", Offset = "0x2F800E0", VA = "0x182F81AE0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
	public HierarchyNodeTypeHandlerBaseEnumerable EnumerateNodeTypeHandlersBase()
	{
		return default(HierarchyNodeTypeHandlerBaseEnumerable);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2F81D70", Offset = "0x2F80370", VA = "0x182F81D70")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public bool Exists(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2F81950", Offset = "0x2F7FF50", VA = "0x182F81950")]
	public HierarchyNode Add(in HierarchyNode parent)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2F82800", Offset = "0x2F80E00", VA = "0x182F82800")]
	public void SetParent(in HierarchyNode node, in HierarchyNode parent)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2F825D0", Offset = "0x2F80BD0", VA = "0x182F825D0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public HierarchyNode GetParent(in HierarchyNode node)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2F82050", Offset = "0x2F80650", VA = "0x182F82050")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public HierarchyNode[] GetChildren(in HierarchyNode node)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2F81C80", Offset = "0x2F80280", VA = "0x182F81C80")]
	public HierarchyNodeChildren EnumerateChildren(in HierarchyNode node)
	{
		return default(HierarchyNodeChildren);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2F81F90", Offset = "0x2F80590", VA = "0x182F81F90")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public int GetChildrenCount(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2F829A0", Offset = "0x2F80FA0", VA = "0x182F829A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public void SetSortIndex(in HierarchyNode node, int sortIndex)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2F82A60", Offset = "0x2F81060", VA = "0x182F82A60")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public void SortChildren(in HierarchyNode node)
	{
	}

	[Token(Token = "0x6000065")]
	public HierarchyPropertyUnmanaged<T> GetOrCreatePropertyUnmanaged<T>(string name, HierarchyPropertyStorageType type = HierarchyPropertyStorageType.Dense) where T : struct
	{
		return default(HierarchyPropertyUnmanaged<T>);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2F82B00", Offset = "0x2F81100", VA = "0x182F82B00")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Update()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2F81E70", Offset = "0x2F80470", VA = "0x182F81E70")]
	internal static Hierarchy FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2F81A40", Offset = "0x2F80040", VA = "0x182F81A40")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::Create", IsThreadSafe = true)]
	private static extern IntPtr Create(IntPtr handlePtr, out IntPtr rootPtr, out IntPtr versionPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2F81AA0", Offset = "0x2F800A0", VA = "0x182F81AA0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2F82190", Offset = "0x2F80790", VA = "0x182F82190")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetNodeTypeHandlersBaseCount", HasExplicitThis = true, IsThreadSafe = true)]
	internal int GetNodeTypeHandlersBaseCount()
	{
		return default(int);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2F82240", Offset = "0x2F80840", VA = "0x182F82240")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetNodeTypeHandlersBaseSpan", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal int GetNodeTypeHandlersBaseSpan(Span<IntPtr> outHandlers)
	{
		return default(int);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2F81950", Offset = "0x2F7FF50", VA = "0x182F81950")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::AddNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private HierarchyNode AddNode(in HierarchyNode parent)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2F82800", Offset = "0x2F80E00", VA = "0x182F82800")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::SetNodeParent", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetNodeParent(in HierarchyNode node, in HierarchyNode parent)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2F81C20", Offset = "0x2F80220", VA = "0x182F81C20")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::EnumerateChildrenPtr", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private IntPtr EnumerateChildrenPtr(in HierarchyNode node)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2F82370", Offset = "0x2F80970", VA = "0x182F82370")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetOrCreateProperty", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private HierarchyPropertyId GetOrCreateProperty(string name, in HierarchyPropertyDescriptor descriptor)
	{
		return default(HierarchyPropertyId);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2F828C0", Offset = "0x2F80EC0", VA = "0x182F828C0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::SetPropertyRaw", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe void SetPropertyRaw(in HierarchyPropertyId property, in HierarchyNode node, void* ptr, int size)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2F82690", Offset = "0x2F80C90", VA = "0x182F82690")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetPropertyRaw", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe void* GetPropertyRaw(in HierarchyPropertyId property, in HierarchyNode node, out int size)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2F819C0", Offset = "0x2F7FFC0", VA = "0x182F819C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateHierarchy(IntPtr nativePtr, IntPtr rootPtr, IntPtr versionPtr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2F82710", Offset = "0x2F80D10", VA = "0x182F82710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeHandlerCreated(IntPtr hierarchyPtr, IntPtr handlerPtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2F82C40", Offset = "0x2F81240", VA = "0x182F82C40")]
	private static extern bool get_UpdateNeeded_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2F81D20", Offset = "0x2F80320", VA = "0x182F81D20")]
	private static extern bool Exists_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2F82570", Offset = "0x2F80B70", VA = "0x182F82570")]
	private static extern void GetParent_Injected(IntPtr _unity_self, in HierarchyNode node, out HierarchyNode ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2F81FF0", Offset = "0x2F805F0", VA = "0x182F81FF0")]
	private static extern void GetChildren_Injected(IntPtr _unity_self, in HierarchyNode node, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2F81F40", Offset = "0x2F80540", VA = "0x182F81F40")]
	private static extern int GetChildrenCount_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2F82940", Offset = "0x2F80F40", VA = "0x182F82940")]
	private static extern void SetSortIndex_Injected(IntPtr _unity_self, in HierarchyNode node, int sortIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2F82A10", Offset = "0x2F81010", VA = "0x182F82A10")]
	private static extern void SortChildren_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2F82AC0", Offset = "0x2F810C0", VA = "0x182F82AC0")]
	private static extern void Update_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2F82150", Offset = "0x2F80750", VA = "0x182F82150")]
	private static extern int GetNodeTypeHandlersBaseCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2F821F0", Offset = "0x2F807F0", VA = "0x182F821F0")]
	private static extern int GetNodeTypeHandlersBaseSpan_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper outHandlers);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2F818F0", Offset = "0x2F7FEF0", VA = "0x182F818F0")]
	private static extern void AddNode_Injected(IntPtr _unity_self, in HierarchyNode parent, out HierarchyNode ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2F827A0", Offset = "0x2F80DA0", VA = "0x182F827A0")]
	private static extern void SetNodeParent_Injected(IntPtr _unity_self, in HierarchyNode node, in HierarchyNode parent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2F81BD0", Offset = "0x2F801D0", VA = "0x182F81BD0")]
	private static extern IntPtr EnumerateChildrenPtr_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2F82320", Offset = "0x2F80920", VA = "0x182F82320")]
	private static extern void GetOrCreateProperty_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, in HierarchyPropertyDescriptor descriptor, out HierarchyPropertyId ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2F82870", Offset = "0x2F80E70", VA = "0x182F82870")]
	private unsafe static extern void SetPropertyRaw_Injected(IntPtr _unity_self, in HierarchyPropertyId property, in HierarchyNode node, void* ptr, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2F82640", Offset = "0x2F80C40", VA = "0x182F82640")]
	private unsafe static extern void* GetPropertyRaw_Injected(IntPtr _unity_self, in HierarchyPropertyId property, in HierarchyNode node, out int size);
}
