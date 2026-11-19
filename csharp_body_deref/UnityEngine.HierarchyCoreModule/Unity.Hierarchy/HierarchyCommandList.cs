// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyCommandList
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
		[Address(RVA = "0x69734D0", Offset = "0x69724D0", VA = "0x69734D0")]
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
	[Address(RVA = "0x69731A0", Offset = "0x69721A0", VA = "0x69731A0")]
	private HierarchyCommandList(IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x69731D0", Offset = "0x69721D0", VA = "0x69731D0", Slot = "1")]
	~HierarchyCommandList()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x69732E0", Offset = "0x69722E0", VA = "0x69732E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6973290", Offset = "0x6972290", VA = "0x6973290")]
	private void Dispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x69733A0", Offset = "0x69723A0", VA = "0x69733A0")]
	internal static HierarchyCommandList FromIntPtr(IntPtr handlePtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6973370", Offset = "0x6972370", VA = "0x6973370")]
	[UnityEngine.Bindings.FreeFunction("HierarchyCommandListBindings::Destroy", IsThreadSafe = true)]
	private static extern void Destroy(IntPtr nativePtr);

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6973460", Offset = "0x6972460", VA = "0x6973460")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static IntPtr CreateCommandList(IntPtr nativePtr)
	{
		return default(IntPtr);
	}
}
