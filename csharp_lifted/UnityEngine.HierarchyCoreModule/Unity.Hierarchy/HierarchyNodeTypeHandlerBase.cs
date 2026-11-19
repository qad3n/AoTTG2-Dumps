// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeTypeHandlerBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Scripting.LifecycleManagement;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Hierarchy;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyNodeTypeHandlerBase.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/HierarchyNodeTypeHandlerBaseBindings.h")]
public abstract class HierarchyNodeTypeHandlerBase
{
	[Token(Token = "0x200000A")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x6971090", Offset = "0x6970090", VA = "0x6971090")]
		public static IntPtr ConvertToUnmanaged(HierarchyNodeTypeHandlerBase handler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x200000B")]
	private struct ConstructorScope : IDisposable
	{
		[Token(Token = "0x400001A")]
		[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
		[ThreadStatic]
		private static IntPtr m_Ptr;

		[Token(Token = "0x400001B")]
		[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
		[ThreadStatic]
		private static Hierarchy m_Hierarchy;

		[Token(Token = "0x400001C")]
		[Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanup]
		[ThreadStatic]
		private static HierarchyCommandList m_CommandList;

		[Token(Token = "0x17000003")]
		private static IntPtr Ptr
		{
			[Token(Token = "0x600002F")]
			[Address(RVA = "0x69710B0", Offset = "0x69700B0", VA = "0x69710B0")]
			set
			{
			}
		}

		[Token(Token = "0x17000004")]
		private static Hierarchy Hierarchy
		{
			[Token(Token = "0x6000030")]
			[Address(RVA = "0x69710F0", Offset = "0x69700F0", VA = "0x69710F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000005")]
		private static HierarchyCommandList CommandList
		{
			[Token(Token = "0x6000031")]
			[Address(RVA = "0x6971150", Offset = "0x6970150", VA = "0x6971150")]
			set
			{
			}
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x69706E0", Offset = "0x696F6E0", VA = "0x69706E0")]
		public ConstructorScope(IntPtr nativePtr, Hierarchy hierarchy, HierarchyCommandList cmdList)
		{
		}

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x69711B0", Offset = "0x69701B0", VA = "0x69711B0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal readonly IntPtr m_Ptr;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HierarchyCommandList m_CommandList;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[Unity.Scripting.LifecycleManagement.AutoStaticsCleanupOnCodeReload]
	private static readonly Dictionary<Type, int> s_NodeTypes;

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6970040", Offset = "0x696F040", VA = "0x6970040", Slot = "4")]
	protected virtual void Initialize()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6970050", Offset = "0x696F050", VA = "0x6970050", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6970060", Offset = "0x696F060", VA = "0x6970060", Slot = "6")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public virtual string GetNodeTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x69701C0", Offset = "0x696F1C0", VA = "0x69701C0", Slot = "7")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public virtual int GetNodeHashCode(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x69702B0", Offset = "0x696F2B0", VA = "0x69702B0", Slot = "8")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public virtual HierarchyNodeFlags GetDefaultNodeFlags(in HierarchyNode node, HierarchyNodeFlags defaultFlags = HierarchyNodeFlags.None)
	{
		return default(HierarchyNodeFlags);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x69703B0", Offset = "0x696F3B0", VA = "0x69703B0", Slot = "9")]
	protected virtual void SearchBegin(HierarchySearchQueryDescriptor query)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x69703C0", Offset = "0x696F3C0", VA = "0x69703C0", Slot = "10")]
	protected virtual bool SearchMatch(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x69703D0", Offset = "0x696F3D0", VA = "0x69703D0", Slot = "11")]
	protected virtual void SearchEnd()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x69703E0", Offset = "0x696F3E0", VA = "0x69703E0", Slot = "12")]
	protected virtual void ViewModelPostUpdate(HierarchyViewModel viewModel)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69703F0", Offset = "0x696F3F0", VA = "0x69703F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal static HierarchyNodeTypeHandlerBase FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x69704D0", Offset = "0x696F4D0", VA = "0x69704D0")]
	internal void Internal_SearchBegin(HierarchySearchQueryDescriptor query)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x69704F0", Offset = "0x696F4F0", VA = "0x69704F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateNodeTypeHandlerFromType(IntPtr nativePtr, Type handlerType, IntPtr hierarchyPtr, IntPtr cmdListPtr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x69707B0", Offset = "0x696F7B0", VA = "0x69707B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool TryGetStaticNodeType(Type handlerType, out int nodeType)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6970950", Offset = "0x696F950", VA = "0x6970950")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeInitialize(IntPtr handlePtr)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x69709C0", Offset = "0x696F9C0", VA = "0x69709C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeDispose(IntPtr handlePtr)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6970A70", Offset = "0x696FA70", VA = "0x6970A70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static string InvokeGetNodeTypeName(IntPtr handlePtr)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6970AE0", Offset = "0x696FAE0", VA = "0x6970AE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int InvokeGetNodeHashCode(IntPtr handlePtr, in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6970B60", Offset = "0x696FB60", VA = "0x6970B60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static HierarchyNodeFlags InvokeGetDefaultNodeFlags(IntPtr handlePtr, in HierarchyNode node, HierarchyNodeFlags defaultFlags)
	{
		return default(HierarchyNodeFlags);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6970BE0", Offset = "0x696FBE0", VA = "0x6970BE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool InvokeChangesPending(IntPtr handlePtr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6970C50", Offset = "0x696FC50", VA = "0x6970C50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool InvokeIntegrateChanges(IntPtr handlePtr, IntPtr cmdListPtr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6970CD0", Offset = "0x696FCD0", VA = "0x6970CD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool InvokeSearchMatch(IntPtr handlePtr, in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6970D50", Offset = "0x696FD50", VA = "0x6970D50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeSearchEnd(IntPtr handlePtr)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6970DC0", Offset = "0x696FDC0", VA = "0x6970DC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeViewModelPostUpdate(IntPtr handlePtr, IntPtr viewModelPtr)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6970E40", Offset = "0x696FE40", VA = "0x6970E40", Slot = "13")]
	[UnityEngine.Bindings.FreeFunction("HierarchyNodeTypeHandlerBaseBindings::ChangesPending", HasExplicitThis = true, IsThreadSafe = true)]
	[Obsolete("ChangesPending is obsolete, it is replaced by adding commands into the hierarchy node type handler's CommandList.", false)]
	protected virtual bool ChangesPending()
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6970F20", Offset = "0x696FF20", VA = "0x6970F20", Slot = "14")]
	[Obsolete("IntegrateChanges is obsolete, it is replaced by adding commands into the hierarchy node type handler's CommandList.", false)]
	[UnityEngine.Bindings.FreeFunction("HierarchyNodeTypeHandlerBaseBindings::IntegrateChanges", HasExplicitThis = true, IsThreadSafe = true)]
	protected virtual bool IntegrateChanges(HierarchyCommandList cmdList)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6970180", Offset = "0x696F180", VA = "0x6970180")]
	private static extern void GetNodeTypeName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6970270", Offset = "0x696F270", VA = "0x6970270")]
	private static extern int GetNodeHashCode_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6970370", Offset = "0x696F370", VA = "0x6970370")]
	private static extern HierarchyNodeFlags GetDefaultNodeFlags_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags defaultFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6970EF0", Offset = "0x696FEF0", VA = "0x6970EF0")]
	private static extern bool ChangesPending_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6970FD0", Offset = "0x696FFD0", VA = "0x6970FD0")]
	private static extern bool IntegrateChanges_Injected(IntPtr _unity_self, IntPtr cmdList);
}
