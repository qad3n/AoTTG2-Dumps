// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.Hierarchy
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6973050", Offset = "0x6972050", VA = "0x6973050")]
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
		[Address(RVA = "0x6971DF0", Offset = "0x6970DF0", VA = "0x6971DF0")]
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
		[Address(RVA = "0x6971E00", Offset = "0x6970E00", VA = "0x6971E00")]
		get
		{
			return ref *(HierarchyNode*)null;
		}
	}

	[Token(Token = "0x1700000C")]
	public bool UpdateNeeded
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x6971E10", Offset = "0x6970E10", VA = "0x6971E10")]
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
		[Address(RVA = "0x6971EA0", Offset = "0x6970EA0", VA = "0x6971EA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x6971EB0", Offset = "0x6970EB0", VA = "0x6971EB0")]
	public Hierarchy()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6971F80", Offset = "0x6970F80", VA = "0x6971F80")]
	private Hierarchy(IntPtr nativePtr, IntPtr rootPtr, IntPtr versionPtr)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x6971FC0", Offset = "0x6970FC0", VA = "0x6971FC0", Slot = "1")]
	~Hierarchy()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x69720D0", Offset = "0x69710D0", VA = "0x69720D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x6972080", Offset = "0x6971080", VA = "0x6972080")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x6972190", Offset = "0x6971190", VA = "0x6972190")]
	public HierarchyNodeTypeHandlerBaseEnumerable EnumerateNodeTypeHandlersBase()
	{
		return default(HierarchyNodeTypeHandlerBaseEnumerable);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x69721B0", Offset = "0x69711B0", VA = "0x69721B0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public bool Exists(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x6972250", Offset = "0x6971250", VA = "0x6972250")]
	public HierarchyNode Add(in HierarchyNode parent)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x6972330", Offset = "0x6971330", VA = "0x6972330")]
	public void SetParent(in HierarchyNode node, in HierarchyNode parent)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x6972410", Offset = "0x6971410", VA = "0x6972410")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public HierarchyNode GetParent(in HierarchyNode node)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x69724C0", Offset = "0x69714C0", VA = "0x69724C0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public HierarchyNode[] GetChildren(in HierarchyNode node)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x6972630", Offset = "0x6971630", VA = "0x6972630")]
	public HierarchyNodeChildren EnumerateChildren(in HierarchyNode node)
	{
		return default(HierarchyNodeChildren);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x6972730", Offset = "0x6971730", VA = "0x6972730")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public int GetChildrenCount(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x69727D0", Offset = "0x69717D0", VA = "0x69727D0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public void SetSortIndex(in HierarchyNode node, int sortIndex)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x6972870", Offset = "0x6971870", VA = "0x6972870")]
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
	[Address(RVA = "0x6972910", Offset = "0x6971910", VA = "0x6972910")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Update()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x69729A0", Offset = "0x69719A0", VA = "0x69729A0")]
	internal static Hierarchy FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x6971F40", Offset = "0x6970F40", VA = "0x6971F40")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::Create", IsThreadSafe = true)]
	private static extern IntPtr Create(IntPtr handlePtr, out IntPtr rootPtr, out IntPtr versionPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x6972160", Offset = "0x6971160", VA = "0x6972160")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x6971550", Offset = "0x6970550", VA = "0x6971550")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetNodeTypeHandlersBaseCount", HasExplicitThis = true, IsThreadSafe = true)]
	internal int GetNodeTypeHandlersBaseCount()
	{
		return default(int);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x69715B0", Offset = "0x69705B0", VA = "0x69715B0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetNodeTypeHandlersBaseSpan", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal int GetNodeTypeHandlersBaseSpan(Span<IntPtr> outHandlers)
	{
		return default(int);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x69722C0", Offset = "0x69712C0", VA = "0x69722C0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::AddNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private HierarchyNode AddNode(in HierarchyNode parent)
	{
		return default(HierarchyNode);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x69723A0", Offset = "0x69713A0", VA = "0x69723A0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::SetNodeParent", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetNodeParent(in HierarchyNode node, in HierarchyNode parent)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x69726D0", Offset = "0x69716D0", VA = "0x69726D0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::EnumerateChildrenPtr", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private IntPtr EnumerateChildrenPtr(in HierarchyNode node)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x6972B90", Offset = "0x6971B90", VA = "0x6972B90")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetOrCreateProperty", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private HierarchyPropertyId GetOrCreateProperty(string name, in HierarchyPropertyDescriptor descriptor)
	{
		return default(HierarchyPropertyId);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x6972DA0", Offset = "0x6971DA0", VA = "0x6972DA0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::SetPropertyRaw", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe void SetPropertyRaw(in HierarchyPropertyId property, in HierarchyNode node, void* ptr, int size)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x6972E70", Offset = "0x6971E70", VA = "0x6972E70")]
	[UnityEngine.Bindings.FreeFunction("HierarchyBindings::GetPropertyRaw", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	internal unsafe void* GetPropertyRaw(in HierarchyPropertyId property, in HierarchyNode node, out int size)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x6972F40", Offset = "0x6971F40", VA = "0x6972F40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateHierarchy(IntPtr nativePtr, IntPtr rootPtr, IntPtr versionPtr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x6972FC0", Offset = "0x6971FC0", VA = "0x6972FC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeHandlerCreated(IntPtr hierarchyPtr, IntPtr handlerPtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6971E70", Offset = "0x6970E70", VA = "0x6971E70")]
	private static extern bool get_UpdateNeeded_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6972210", Offset = "0x6971210", VA = "0x6972210")]
	private static extern bool Exists_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x6972480", Offset = "0x6971480", VA = "0x6972480")]
	private static extern void GetParent_Injected(IntPtr _unity_self, in HierarchyNode node, out HierarchyNode ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x69725F0", Offset = "0x69715F0", VA = "0x69725F0")]
	private static extern void GetChildren_Injected(IntPtr _unity_self, in HierarchyNode node, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x6972790", Offset = "0x6971790", VA = "0x6972790")]
	private static extern int GetChildrenCount_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x6972830", Offset = "0x6971830", VA = "0x6972830")]
	private static extern void SetSortIndex_Injected(IntPtr _unity_self, in HierarchyNode node, int sortIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x69728D0", Offset = "0x69718D0", VA = "0x69728D0")]
	private static extern void SortChildren_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x6972970", Offset = "0x6971970", VA = "0x6972970")]
	private static extern void Update_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x6972A60", Offset = "0x6971A60", VA = "0x6972A60")]
	private static extern int GetNodeTypeHandlersBaseCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x6972A90", Offset = "0x6971A90", VA = "0x6972A90")]
	private static extern int GetNodeTypeHandlersBaseSpan_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper outHandlers);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x6972AD0", Offset = "0x6971AD0", VA = "0x6972AD0")]
	private static extern void AddNode_Injected(IntPtr _unity_self, in HierarchyNode parent, out HierarchyNode ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x6972B10", Offset = "0x6971B10", VA = "0x6972B10")]
	private static extern void SetNodeParent_Injected(IntPtr _unity_self, in HierarchyNode node, in HierarchyNode parent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x6972B50", Offset = "0x6971B50", VA = "0x6972B50")]
	private static extern IntPtr EnumerateChildrenPtr_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x6972D50", Offset = "0x6971D50", VA = "0x6972D50")]
	private static extern void GetOrCreateProperty_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, in HierarchyPropertyDescriptor descriptor, out HierarchyPropertyId ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x6972E20", Offset = "0x6971E20", VA = "0x6972E20")]
	private unsafe static extern void SetPropertyRaw_Injected(IntPtr _unity_self, in HierarchyPropertyId property, in HierarchyNode node, void* ptr, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x6972EF0", Offset = "0x6971EF0", VA = "0x6972EF0")]
	private unsafe static extern void* GetPropertyRaw_Injected(IntPtr _unity_self, in HierarchyPropertyId property, in HierarchyNode node, out int size);
}
