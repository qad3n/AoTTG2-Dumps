// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyViewModel
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
[Token(Token = "0x200002A")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyViewModel.h")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/HierarchyViewModelBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class HierarchyViewModel : IDisposable
{
	[Token(Token = "0x200002B")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x6976FD0", Offset = "0x6975FD0", VA = "0x6976FD0")]
		public static IntPtr ConvertToUnmanaged(HierarchyViewModel viewModel)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x200002C")]
	public delegate void FlagsChangedEventHandler(HierarchyNodeFlags flags);

	[Token(Token = "0x200002D")]
	public struct Enumerator
	{
		[Token(Token = "0x4000083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly HierarchyViewModel m_ViewModel;

		[Token(Token = "0x4000084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly ReadOnlyNativeVector<HierarchyNode> m_Nodes;

		[Token(Token = "0x4000085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly int m_Version;

		[Token(Token = "0x4000086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int m_Index;

		[Token(Token = "0x17000034")]
		public unsafe ref readonly HierarchyNode Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000125")]
			[Address(RVA = "0x69770B0", Offset = "0x69760B0", VA = "0x69770B0")]
			get
			{
				return ref *(HierarchyNode*)null;
			}
		}

		[Token(Token = "0x6000124")]
		[Address(RVA = "0x6976950", Offset = "0x6975950", VA = "0x6976950")]
		internal Enumerator(HierarchyViewModel hierarchyViewModel)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x69771A0", Offset = "0x69761A0", VA = "0x69771A0")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400007A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x400007B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x400007C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal readonly HierarchyFlattened m_HierarchyFlattened;

	[Token(Token = "0x400007D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ReadOnlyNativeVector<HierarchyFlattenedNode> m_FlattenedNodes;

	[Token(Token = "0x400007E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ReadOnlyNativeVector<HierarchyNode> m_Nodes;

	[Token(Token = "0x400007F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_Version;

	[Token(Token = "0x4000080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private readonly bool m_IsOwner;

	[Token(Token = "0x4000081")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private FlagsChangedEventHandler FlagsChanged;

	[Token(Token = "0x1700002C")]
	public bool IsCreated
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x69759A0", Offset = "0x69749A0", VA = "0x69759A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public int Count
	{
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x69759B0", Offset = "0x69749B0", VA = "0x69759B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool UpdateNeeded
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x69759E0", Offset = "0x69749E0", VA = "0x69759E0")]
		[UnityEngine.Bindings.NativeMethod("UpdateNeeded", IsThreadSafe = true)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002F")]
	internal ReadOnlyNativeVector<HierarchyFlattenedNode> FlattenedNodes
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x6975A70", Offset = "0x6974A70", VA = "0x6975A70")]
		get
		{
			return default(ReadOnlyNativeVector<HierarchyFlattenedNode>);
		}
	}

	[Token(Token = "0x17000030")]
	internal int Version
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x6975A80", Offset = "0x6974A80", VA = "0x6975A80")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000031")]
	internal IHierarchySearchQueryParser QueryParser
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x6975A90", Offset = "0x6974A90", VA = "0x6975A90")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.HierarchyModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	internal HierarchySearchQueryDescriptor Query
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x6975AA0", Offset = "0x6974AA0", VA = "0x6975AA0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
		[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	public unsafe ref readonly HierarchyNode this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x69760C0", Offset = "0x69750C0", VA = "0x69760C0")]
		get
		{
			return ref *(HierarchyNode*)null;
		}
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x6975B30", Offset = "0x6974B30", VA = "0x6975B30")]
	public HierarchyViewModel(HierarchyFlattened hierarchyFlattened, HierarchyNodeFlags defaultFlags = HierarchyNodeFlags.None)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x6975D80", Offset = "0x6974D80", VA = "0x6975D80")]
	private HierarchyViewModel(IntPtr nativePtr, HierarchyFlattened hierarchyFlattened, IntPtr flattenedNodesPtr, int flattenedNodesCount, IntPtr nodesPtr, int nodesCount, int version)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x6975EC0", Offset = "0x6974EC0", VA = "0x6975EC0", Slot = "1")]
	~HierarchyViewModel()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x6975FF0", Offset = "0x6974FF0", VA = "0x6975FF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x6975F90", Offset = "0x6974F90", VA = "0x6975F90")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x6976150", Offset = "0x6975150", VA = "0x6976150")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public int IndexOf(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x69761F0", Offset = "0x69751F0", VA = "0x69761F0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public bool Contains(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x6976290", Offset = "0x6975290", VA = "0x6976290")]
	public void SetFlags(HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x6976350", Offset = "0x6975350", VA = "0x6976350")]
	public void SetFlags(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x6976410", Offset = "0x6975410", VA = "0x6976410")]
	public void SetFlagsRecursive(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x69764F0", Offset = "0x69754F0", VA = "0x69764F0")]
	public bool HasAllFlags(in HierarchyNode node, HierarchyNodeFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x69765B0", Offset = "0x69755B0", VA = "0x69765B0")]
	public void ClearFlags(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x6976670", Offset = "0x6975670", VA = "0x6976670")]
	public void ClearFlagsRecursive(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x6976750", Offset = "0x6975750", VA = "0x6976750")]
	public HierarchyViewModelNodesEnumerable EnumerateNodesWithAllFlags(HierarchyNodeFlags flags)
	{
		return default(HierarchyViewModelNodesEnumerable);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x6976870", Offset = "0x6975870", VA = "0x6976870")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Update()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x6976900", Offset = "0x6975900", VA = "0x6976900")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x6976990", Offset = "0x6975990", VA = "0x6976990")]
	internal static HierarchyViewModel FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x6975D00", Offset = "0x6974D00", VA = "0x6975D00")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::Create", IsThreadSafe = true)]
	private static IntPtr Create(IntPtr handlePtr, HierarchyFlattened hierarchyFlattened, HierarchyNodeFlags defaultFlags, out IntPtr nodesPtr, out int nodesCount, out IntPtr indicesPtr, out int indicesCount, out int version)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x6976090", Offset = "0x6975090", VA = "0x6976090")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x69762F0", Offset = "0x69752F0", VA = "0x69762F0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::SetFlagsAll", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetFlagsAll(HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x69763B0", Offset = "0x69753B0", VA = "0x69763B0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::SetFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetFlagsNode(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x6976480", Offset = "0x6975480", VA = "0x6976480")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::SetFlagsRecursiveNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetFlagsRecursiveNode(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x6976550", Offset = "0x6975550", VA = "0x6976550")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::HasAllFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private bool HasAllFlagsNode(in HierarchyNode node, HierarchyNodeFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x6976610", Offset = "0x6975610", VA = "0x6976610")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::ClearFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void ClearFlagsNode(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x69766E0", Offset = "0x69756E0", VA = "0x69766E0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::ClearFlagsRecursiveNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void ClearFlagsRecursiveNode(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x6976C50", Offset = "0x6975C50", VA = "0x6976C50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateHierarchyViewModel(IntPtr nativePtr, IntPtr flattenedPtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, IntPtr nodesPtr, int nodesCount, int version)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x6976D00", Offset = "0x6975D00", VA = "0x6976D00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void UpdateHierarchyViewModel(IntPtr handlePtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, IntPtr nodesPtr, int nodesCount, int version)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x6976DD0", Offset = "0x6975DD0", VA = "0x6976DD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFlagsChanged(IntPtr handlePtr, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x6976E00", Offset = "0x6975E00", VA = "0x6976E00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SearchBegin(IntPtr handlePtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x6975A40", Offset = "0x6974A40", VA = "0x6975A40")]
	private static extern bool get_UpdateNeeded_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x6975B00", Offset = "0x6974B00", VA = "0x6975B00")]
	private static extern HierarchySearchQueryDescriptor get_Query_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x69761B0", Offset = "0x69751B0", VA = "0x69761B0")]
	private static extern int IndexOf_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000118")]
	[Address(RVA = "0x6976250", Offset = "0x6975250", VA = "0x6976250")]
	private static extern bool Contains_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x69768D0", Offset = "0x69758D0", VA = "0x69768D0")]
	private static extern void Update_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x6976A50", Offset = "0x6975A50", VA = "0x6976A50")]
	private static extern IntPtr Create_Injected(IntPtr handlePtr, IntPtr hierarchyFlattened, HierarchyNodeFlags defaultFlags, out IntPtr nodesPtr, out int nodesCount, out IntPtr indicesPtr, out int indicesCount, out int version);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x6976AB0", Offset = "0x6975AB0", VA = "0x6976AB0")]
	private static extern void SetFlagsAll_Injected(IntPtr _unity_self, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x6976AF0", Offset = "0x6975AF0", VA = "0x6976AF0")]
	private static extern void SetFlagsNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x6976B30", Offset = "0x6975B30", VA = "0x6976B30")]
	private static extern void SetFlagsRecursiveNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011E")]
	[Address(RVA = "0x6976B80", Offset = "0x6975B80", VA = "0x6976B80")]
	private static extern bool HasAllFlagsNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x6976BC0", Offset = "0x6975BC0", VA = "0x6976BC0")]
	private static extern void ClearFlagsNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x6976C00", Offset = "0x6975C00", VA = "0x6976C00")]
	private static extern void ClearFlagsRecursiveNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction);
}
