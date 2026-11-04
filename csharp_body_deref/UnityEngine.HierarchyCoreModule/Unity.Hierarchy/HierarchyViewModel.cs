// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyViewModel
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
			[Address(RVA = "0x2F7C4B0", Offset = "0x2F7AAB0", VA = "0x182F7C4B0")]
			get
			{
				return ref *(HierarchyNode*)null;
			}
		}

		[Token(Token = "0x6000124")]
		[Address(RVA = "0x2F7C1C0", Offset = "0x2F7A7C0", VA = "0x182F7C1C0")]
		internal Enumerator(HierarchyViewModel hierarchyViewModel)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x2F7BDF0", Offset = "0x2F7A3F0", VA = "0x182F7BDF0")]
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
		[Address(RVA = "0x2F7D790", Offset = "0x2F7BD90", VA = "0x182F7D790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public int Count
	{
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x2F81720", Offset = "0x2F7FD20", VA = "0x182F81720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool UpdateNeeded
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x2F81890", Offset = "0x2F7FE90", VA = "0x182F81890")]
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
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
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
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
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
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
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
		[Address(RVA = "0x2F817F0", Offset = "0x2F7FDF0", VA = "0x182F817F0")]
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
		[Address(RVA = "0x2F81760", Offset = "0x2F7FD60", VA = "0x182F81760")]
		get
		{
			return ref *(HierarchyNode*)null;
		}
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2F81540", Offset = "0x2F7FB40", VA = "0x182F81540")]
	public HierarchyViewModel(HierarchyFlattened hierarchyFlattened, HierarchyNodeFlags defaultFlags = HierarchyNodeFlags.None)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x2F81410", Offset = "0x2F7FA10", VA = "0x182F81410")]
	private HierarchyViewModel(IntPtr nativePtr, HierarchyFlattened hierarchyFlattened, IntPtr flattenedNodesPtr, int flattenedNodesCount, IntPtr nodesPtr, int nodesCount, int version)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2F80B30", Offset = "0x2F7F130", VA = "0x182F80B30", Slot = "1")]
	~HierarchyViewModel()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2F80860", Offset = "0x2F7EE60", VA = "0x182F80860", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2F80900", Offset = "0x2F7EF00", VA = "0x182F80900")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x2F80E30", Offset = "0x2F7F430", VA = "0x182F80E30")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public int IndexOf(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2F805A0", Offset = "0x2F7EBA0", VA = "0x182F805A0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public bool Contains(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x2F810B0", Offset = "0x2F7F6B0", VA = "0x182F810B0")]
	public void SetFlags(HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x2F81170", Offset = "0x2F7F770", VA = "0x182F81170")]
	public void SetFlags(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x2F81230", Offset = "0x2F7F830", VA = "0x182F81230")]
	public void SetFlagsRecursive(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2F80D70", Offset = "0x2F7F370", VA = "0x182F80D70")]
	public bool HasAllFlags(in HierarchyNode node, HierarchyNodeFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2F80410", Offset = "0x2F7EA10", VA = "0x182F80410")]
	public void ClearFlags(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2F804D0", Offset = "0x2F7EAD0", VA = "0x182F804D0")]
	public void ClearFlagsRecursive(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2F80970", Offset = "0x2F7EF70", VA = "0x182F80970")]
	public HierarchyViewModelNodesEnumerable EnumerateNodesWithAllFlags(HierarchyNodeFlags flags)
	{
		return default(HierarchyViewModelNodesEnumerable);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2F813B0", Offset = "0x2F7F9B0", VA = "0x182F813B0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Update()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2F80CB0", Offset = "0x2F7F2B0", VA = "0x182F80CB0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2F80BE0", Offset = "0x2F7F1E0", VA = "0x182F80BE0")]
	internal static HierarchyViewModel FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2F807C0", Offset = "0x2F7EDC0", VA = "0x182F807C0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::Create", IsThreadSafe = true)]
	private static IntPtr Create(IntPtr handlePtr, HierarchyFlattened hierarchyFlattened, HierarchyNodeFlags defaultFlags, out IntPtr nodesPtr, out int nodesCount, out IntPtr indicesPtr, out int indicesCount, out int version)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2F80820", Offset = "0x2F7EE20", VA = "0x182F80820")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2F810B0", Offset = "0x2F7F6B0", VA = "0x182F810B0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::SetFlagsAll", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetFlagsAll(HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2F81170", Offset = "0x2F7F770", VA = "0x182F81170")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::SetFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetFlagsNode(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2F81230", Offset = "0x2F7F830", VA = "0x182F81230")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::SetFlagsRecursiveNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void SetFlagsRecursiveNode(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2F80D70", Offset = "0x2F7F370", VA = "0x182F80D70")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::HasAllFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private bool HasAllFlagsNode(in HierarchyNode node, HierarchyNodeFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2F80410", Offset = "0x2F7EA10", VA = "0x182F80410")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::ClearFlagsNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void ClearFlagsNode(in HierarchyNode node, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2F804D0", Offset = "0x2F7EAD0", VA = "0x182F804D0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyViewModelBindings::ClearFlagsRecursiveNode", HasExplicitThis = true, IsThreadSafe = true, ThrowsException = true)]
	private void ClearFlagsRecursiveNode(in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x2F80600", Offset = "0x2F7EC00", VA = "0x182F80600")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateHierarchyViewModel(IntPtr nativePtr, IntPtr flattenedPtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, IntPtr nodesPtr, int nodesCount, int version)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x2F812B0", Offset = "0x2F7F8B0", VA = "0x182F812B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void UpdateHierarchyViewModel(IntPtr handlePtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, IntPtr nodesPtr, int nodesCount, int version)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2F80E90", Offset = "0x2F7F490", VA = "0x182F80E90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFlagsChanged(IntPtr handlePtr, HierarchyNodeFlags flags)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x2F80ED0", Offset = "0x2F7F4D0", VA = "0x182F80ED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SearchBegin(IntPtr handlePtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x2F81850", Offset = "0x2F7FE50", VA = "0x182F81850")]
	private static extern bool get_UpdateNeeded_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x2F817B0", Offset = "0x2F7FDB0", VA = "0x182F817B0")]
	private static extern HierarchySearchQueryDescriptor get_Query_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x2F80DE0", Offset = "0x2F7F3E0", VA = "0x182F80DE0")]
	private static extern int IndexOf_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000118")]
	[Address(RVA = "0x2F80550", Offset = "0x2F7EB50", VA = "0x182F80550")]
	private static extern bool Contains_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x2F81370", Offset = "0x2F7F970", VA = "0x182F81370")]
	private static extern void Update_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2F80770", Offset = "0x2F7ED70", VA = "0x182F80770")]
	private static extern IntPtr Create_Injected(IntPtr handlePtr, IntPtr hierarchyFlattened, HierarchyNodeFlags defaultFlags, out IntPtr nodesPtr, out int nodesCount, out IntPtr indicesPtr, out int indicesCount, out int version);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x2F81070", Offset = "0x2F7F670", VA = "0x182F81070")]
	private static extern void SetFlagsAll_Injected(IntPtr _unity_self, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x2F81110", Offset = "0x2F7F710", VA = "0x182F81110")]
	private static extern void SetFlagsNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x2F811E0", Offset = "0x2F7F7E0", VA = "0x182F811E0")]
	private static extern void SetFlagsRecursiveNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011E")]
	[Address(RVA = "0x2F80D10", Offset = "0x2F7F310", VA = "0x182F80D10")]
	private static extern bool HasAllFlagsNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011F")]
	[Address(RVA = "0x2F803B0", Offset = "0x2F7E9B0", VA = "0x182F803B0")]
	private static extern void ClearFlagsNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2F80480", Offset = "0x2F7EA80", VA = "0x182F80480")]
	private static extern void ClearFlagsRecursiveNode_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags flags, HierarchyTraversalDirection direction);
}
