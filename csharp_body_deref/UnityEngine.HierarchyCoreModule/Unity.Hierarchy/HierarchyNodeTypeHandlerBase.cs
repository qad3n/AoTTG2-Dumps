// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeTypeHandlerBase
// Update status: NEW in this game update
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
			[Address(RVA = "0x2F7BC00", Offset = "0x2F7A200", VA = "0x182F7BC00")]
			set
			{
			}
		}

		[Token(Token = "0x17000004")]
		private static Hierarchy Hierarchy
		{
			[Token(Token = "0x6000030")]
			[Address(RVA = "0x2F7BBA0", Offset = "0x2F7A1A0", VA = "0x182F7BBA0")]
			set
			{
			}
		}

		[Token(Token = "0x17000005")]
		private static HierarchyCommandList CommandList
		{
			[Token(Token = "0x6000031")]
			[Address(RVA = "0x2F7BB40", Offset = "0x2F7A140", VA = "0x182F7BB40")]
			set
			{
			}
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x2F7BA60", Offset = "0x2F7A060", VA = "0x182F7BA60")]
		public ConstructorScope(IntPtr nativePtr, Hierarchy hierarchy, HierarchyCommandList cmdList)
		{
		}

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2F7B990", Offset = "0x2F79F90", VA = "0x182F7B990", Slot = "4")]
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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	protected virtual void Initialize()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2F7E0F0", Offset = "0x2F7C6F0", VA = "0x182F7E0F0", Slot = "6")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public virtual string GetNodeTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2F7E000", Offset = "0x2F7C600", VA = "0x182F7E000", Slot = "7")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public virtual int GetNodeHashCode(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2F7DF00", Offset = "0x2F7C500", VA = "0x182F7DF00", Slot = "8")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public virtual HierarchyNodeFlags GetDefaultNodeFlags(in HierarchyNode node, HierarchyNodeFlags defaultFlags = HierarchyNodeFlags.None)
	{
		return default(HierarchyNodeFlags);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void SearchBegin(HierarchySearchQueryDescriptor query)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "10")]
	protected virtual bool SearchMatch(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	protected virtual void SearchEnd()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	protected virtual void ViewModelPostUpdate(HierarchyViewModel viewModel)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2F7DDB0", Offset = "0x2F7C3B0", VA = "0x182F7DDB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal static HierarchyNodeTypeHandlerBase FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2845320", Offset = "0x2843920", VA = "0x182845320")]
	internal void Internal_SearchBegin(HierarchySearchQueryDescriptor query)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2F7DB50", Offset = "0x2F7C150", VA = "0x182F7DB50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateNodeTypeHandlerFromType(IntPtr nativePtr, Type handlerType, IntPtr hierarchyPtr, IntPtr cmdListPtr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2F7E820", Offset = "0x2F7CE20", VA = "0x182F7E820")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool TryGetStaticNodeType(Type handlerType, out int nodeType)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2F7E5A0", Offset = "0x2F7CBA0", VA = "0x182F7E5A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeInitialize(IntPtr handlePtr)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2F7E380", Offset = "0x2F7C980", VA = "0x182F7E380")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeDispose(IntPtr handlePtr)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2F7E530", Offset = "0x2F7CB30", VA = "0x182F7E530")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static string InvokeGetNodeTypeName(IntPtr handlePtr)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2F7E4B0", Offset = "0x2F7CAB0", VA = "0x182F7E4B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int InvokeGetNodeHashCode(IntPtr handlePtr, in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2F7E420", Offset = "0x2F7CA20", VA = "0x182F7E420")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static HierarchyNodeFlags InvokeGetDefaultNodeFlags(IntPtr handlePtr, in HierarchyNode node, HierarchyNodeFlags defaultFlags)
	{
		return default(HierarchyNodeFlags);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2F7E310", Offset = "0x2F7C910", VA = "0x182F7E310")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool InvokeChangesPending(IntPtr handlePtr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2F7E610", Offset = "0x2F7CC10", VA = "0x182F7E610")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool InvokeIntegrateChanges(IntPtr handlePtr, IntPtr cmdListPtr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2F7E710", Offset = "0x2F7CD10", VA = "0x182F7E710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool InvokeSearchMatch(IntPtr handlePtr, in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2F7E6A0", Offset = "0x2F7CCA0", VA = "0x182F7E6A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeSearchEnd(IntPtr handlePtr)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2F7E790", Offset = "0x2F7CD90", VA = "0x182F7E790")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeViewModelPostUpdate(IntPtr handlePtr, IntPtr viewModelPtr)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2F7DAC0", Offset = "0x2F7C0C0", VA = "0x182F7DAC0", Slot = "13")]
	[UnityEngine.Bindings.FreeFunction("HierarchyNodeTypeHandlerBaseBindings::ChangesPending", HasExplicitThis = true, IsThreadSafe = true)]
	[Obsolete("ChangesPending is obsolete, it is replaced by adding commands into the hierarchy node type handler's CommandList.", false)]
	protected virtual bool ChangesPending()
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2F7E260", Offset = "0x2F7C860", VA = "0x182F7E260", Slot = "14")]
	[Obsolete("IntegrateChanges is obsolete, it is replaced by adding commands into the hierarchy node type handler's CommandList.", false)]
	[UnityEngine.Bindings.FreeFunction("HierarchyNodeTypeHandlerBaseBindings::IntegrateChanges", HasExplicitThis = true, IsThreadSafe = true)]
	protected virtual bool IntegrateChanges(HierarchyCommandList cmdList)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2F7E0A0", Offset = "0x2F7C6A0", VA = "0x182F7E0A0")]
	private static extern void GetNodeTypeName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2F7DFB0", Offset = "0x2F7C5B0", VA = "0x182F7DFB0")]
	private static extern int GetNodeHashCode_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2F7DEA0", Offset = "0x2F7C4A0", VA = "0x182F7DEA0")]
	private static extern HierarchyNodeFlags GetDefaultNodeFlags_Injected(IntPtr _unity_self, in HierarchyNode node, HierarchyNodeFlags defaultFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2F7DA80", Offset = "0x2F7C080", VA = "0x182F7DA80")]
	private static extern bool ChangesPending_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2F7E210", Offset = "0x2F7C810", VA = "0x182F7E210")]
	private static extern bool IntegrateChanges_Injected(IntPtr _unity_self, IntPtr cmdList);
}
