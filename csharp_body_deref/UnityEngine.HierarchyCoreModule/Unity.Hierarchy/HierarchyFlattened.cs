// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyFlattened
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Hierarchy;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200001B")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/HierarchyFlattenedBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyFlattened.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class HierarchyFlattened : IDisposable
{
	[Token(Token = "0x200001C")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x6973E80", Offset = "0x6972E80", VA = "0x6973E80")]
		public static IntPtr ConvertToUnmanaged(HierarchyFlattened hierarchyFlattened)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x200001D")]
	public struct Enumerator
	{
		[Token(Token = "0x400003B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly HierarchyFlattened m_HierarchyFlattened;

		[Token(Token = "0x400003C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly ReadOnlyNativeVector<HierarchyFlattenedNode> m_FlattenedNodes;

		[Token(Token = "0x400003D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly int m_Version;

		[Token(Token = "0x400003E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int m_Index;

		[Token(Token = "0x17000012")]
		public unsafe ref readonly HierarchyFlattenedNode Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60000A9")]
			[Address(RVA = "0x6973EA0", Offset = "0x6972EA0", VA = "0x6973EA0")]
			get
			{
				return ref *(HierarchyFlattenedNode*)null;
			}
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x6973BB0", Offset = "0x6972BB0", VA = "0x6973BB0")]
		internal Enumerator(HierarchyFlattened hierarchyFlattened)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x6973F90", Offset = "0x6972F90", VA = "0x6973F90")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000036")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000037")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x4000038")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ReadOnlyNativeVector<HierarchyFlattenedNode> m_FlattenedNodes;

	[Token(Token = "0x4000039")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int m_Version;

	[Token(Token = "0x400003A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly bool m_IsOwner;

	[Token(Token = "0x1700000E")]
	public bool IsCreated
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x696F900", Offset = "0x696E900", VA = "0x696F900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool UpdateNeeded
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x69734F0", Offset = "0x69724F0", VA = "0x69734F0")]
		[UnityEngine.Bindings.NativeMethod("UpdateNeeded", IsThreadSafe = true)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	internal int Version
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x6973580", Offset = "0x6972580", VA = "0x6973580")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000011")]
	public unsafe ref readonly HierarchyFlattenedNode this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x69739A0", Offset = "0x69729A0", VA = "0x69739A0")]
		get
		{
			return ref *(HierarchyFlattenedNode*)null;
		}
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6973590", Offset = "0x6972590", VA = "0x6973590")]
	public HierarchyFlattened(Hierarchy hierarchy)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6973710", Offset = "0x6972710", VA = "0x6973710")]
	private HierarchyFlattened(IntPtr nativePtr, Hierarchy hierarchy, IntPtr flattenedNodesPtr, int flattenedNodesCount, int version)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x69737B0", Offset = "0x69727B0", VA = "0x69737B0", Slot = "1")]
	~HierarchyFlattened()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x69738E0", Offset = "0x69728E0", VA = "0x69738E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6973880", Offset = "0x6972880", VA = "0x6973880")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x696F9C0", Offset = "0x696E9C0", VA = "0x696F9C0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public int IndexOf(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x696F960", Offset = "0x696E960", VA = "0x696F960")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public bool Contains(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6973AB0", Offset = "0x6972AB0", VA = "0x6973AB0")]
	public HierarchyFlattenedChildrenEnumerable EnumerateChildren(in HierarchyNode node)
	{
		return default(HierarchyFlattenedChildrenEnumerable);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6973AD0", Offset = "0x6972AD0", VA = "0x6973AD0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Update()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6973B60", Offset = "0x6972B60", VA = "0x6973B60")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6973BF0", Offset = "0x6972BF0", VA = "0x6973BF0")]
	internal static HierarchyFlattened FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x69736A0", Offset = "0x69726A0", VA = "0x69736A0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyFlattenedBindings::Create", IsThreadSafe = true)]
	private static IntPtr Create(IntPtr handlePtr, Hierarchy hierarchy, out IntPtr nodesPtr, out int nodesCount, out int version)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6973970", Offset = "0x6972970", VA = "0x6973970")]
	[UnityEngine.Bindings.FreeFunction("HierarchyFlattenedBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x6973D10", Offset = "0x6972D10", VA = "0x6973D10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateHierarchyFlattened(IntPtr nativePtr, IntPtr hierarchyPtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, int version)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x6973E00", Offset = "0x6972E00", VA = "0x6973E00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void UpdateHierarchyFlattened(IntPtr handlePtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, int version)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x6973550", Offset = "0x6972550", VA = "0x6973550")]
	private static extern bool get_UpdateNeeded_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x6973A30", Offset = "0x6972A30", VA = "0x6973A30")]
	private static extern int IndexOf_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x6973A70", Offset = "0x6972A70", VA = "0x6973A70")]
	private static extern bool Contains_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x6973B30", Offset = "0x6972B30", VA = "0x6973B30")]
	private static extern void Update_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x6973CB0", Offset = "0x6972CB0", VA = "0x6973CB0")]
	private static extern IntPtr Create_Injected(IntPtr handlePtr, IntPtr hierarchy, out IntPtr nodesPtr, out int nodesCount, out int version);
}
