// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyCommandList
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
[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyCommandList.h")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/HierarchyCommandListBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class HierarchyCommandList : IDisposable
{
	[Token(Token = "0x200001A")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToUnmanaged(HierarchyCommandList cmdList)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000034")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly bool m_IsOwner;

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2F03470", Offset = "0x2F01A70", VA = "0x182F03470")]
	private HierarchyCommandList(IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2F7C6F0", Offset = "0x2F7ACF0", VA = "0x182F7C6F0", Slot = "1")]
	~HierarchyCommandList()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2F7C660", Offset = "0x2F7AC60", VA = "0x182F7C660", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2F7C600", Offset = "0x2F7AC00", VA = "0x182F7C600")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2F7C790", Offset = "0x2F7AD90", VA = "0x182F7C790")]
	internal static HierarchyCommandList FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2F7C5C0", Offset = "0x2F7ABC0", VA = "0x182F7C5C0")]
	[UnityEngine.Bindings.FreeFunction("HierarchyCommandListBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2F7C550", Offset = "0x2F7AB50", VA = "0x182F7C550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateCommandList(IntPtr nativePtr)
	{
		return default(IntPtr);
	}
}
