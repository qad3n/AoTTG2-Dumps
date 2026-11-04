// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyFlattened
// Update status: NEW in this game update
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
			[Address(RVA = "0x2F7C2F0", Offset = "0x2F7A8F0", VA = "0x182F7C2F0")]
			get
			{
				return ref *(HierarchyFlattenedNode*)null;
			}
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x2F7C2A0", Offset = "0x2F7A8A0", VA = "0x182F7C2A0")]
		internal Enumerator(HierarchyFlattened hierarchyFlattened)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x2F7BE30", Offset = "0x2F7A430", VA = "0x182F7BE30")]
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
		[Address(RVA = "0x2F7D790", Offset = "0x2F7BD90", VA = "0x182F7D790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool UpdateNeeded
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x2F7D830", Offset = "0x2F7BE30", VA = "0x182F7D830")]
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
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
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
		[Address(RVA = "0x2F7D7A0", Offset = "0x2F7BDA0", VA = "0x182F7D7A0")]
		get
		{
			return ref *(HierarchyFlattenedNode*)null;
		}
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2F7D680", Offset = "0x2F7BC80", VA = "0x182F7D680")]
	public HierarchyFlattened(Hierarchy hierarchy)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2F7D5E0", Offset = "0x2F7BBE0", VA = "0x182F7D5E0")]
	private HierarchyFlattened(IntPtr nativePtr, Hierarchy hierarchy, IntPtr flattenedNodesPtr, int flattenedNodesCount, int version)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2F7D240", Offset = "0x2F7B840", VA = "0x182F7D240", Slot = "1")]
	~HierarchyFlattened()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2F7D110", Offset = "0x2F7B710", VA = "0x182F7D110", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2F7D1B0", Offset = "0x2F7B7B0", VA = "0x182F7D1B0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2F7D460", Offset = "0x2F7BA60", VA = "0x182F7D460")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public int IndexOf(in HierarchyNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2F7CEE0", Offset = "0x2F7B4E0", VA = "0x182F7CEE0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	public bool Contains(in HierarchyNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2F7D210", Offset = "0x2F7B810", VA = "0x182F7D210")]
	public HierarchyFlattenedChildrenEnumerable EnumerateChildren(in HierarchyNode node)
	{
		return default(HierarchyFlattenedChildrenEnumerable);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2F7D580", Offset = "0x2F7BB80", VA = "0x182F7D580")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void Update()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2F7D3B0", Offset = "0x2F7B9B0", VA = "0x182F7D3B0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2F7D2E0", Offset = "0x2F7B8E0", VA = "0x182F7D2E0")]
	internal static HierarchyFlattened FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2F7D070", Offset = "0x2F7B670", VA = "0x182F7D070")]
	[UnityEngine.Bindings.FreeFunction("HierarchyFlattenedBindings::Create", IsThreadSafe = true)]
	private static IntPtr Create(IntPtr handlePtr, Hierarchy hierarchy, out IntPtr nodesPtr, out int nodesCount, out int version)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2F7D0D0", Offset = "0x2F7B6D0", VA = "0x182F7D0D0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyFlattenedBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2F7CF40", Offset = "0x2F7B540", VA = "0x182F7CF40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateHierarchyFlattened(IntPtr nativePtr, IntPtr hierarchyPtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, int version)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2F7D4C0", Offset = "0x2F7BAC0", VA = "0x182F7D4C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void UpdateHierarchyFlattened(IntPtr handlePtr, IntPtr flattenedNodesPtr, int flattenedNodesCount, int version)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2F7D7F0", Offset = "0x2F7BDF0", VA = "0x182F7D7F0")]
	private static extern bool get_UpdateNeeded_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2F7D410", Offset = "0x2F7BA10", VA = "0x182F7D410")]
	private static extern int IndexOf_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2F7CE90", Offset = "0x2F7B490", VA = "0x182F7CE90")]
	private static extern bool Contains_Injected(IntPtr _unity_self, in HierarchyNode node);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2F7D540", Offset = "0x2F7BB40", VA = "0x182F7D540")]
	private static extern void Update_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2F7D020", Offset = "0x2F7B620", VA = "0x182F7D020")]
	private static extern IntPtr Create_Injected(IntPtr handlePtr, IntPtr hierarchy, out IntPtr nodesPtr, out int nodesCount, out int version);
}
