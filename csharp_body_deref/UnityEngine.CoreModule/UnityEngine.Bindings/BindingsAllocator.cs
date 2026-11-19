// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.BindingsAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200023C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/Marshalling/BindingsAllocator.h")]
[UnityEngine.Bindings.VisibleToOtherModules]
[UnityEngine.Bindings.StaticAccessor("Marshalling::BindingsAllocator", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
internal static class BindingsAllocator
{
	[Token(Token = "0x200023D")]
	private struct NativeOwnedMemory
	{
		[Token(Token = "0x400073A")]
		[FieldOffset(Offset = "0x0")]
		public unsafe void* data;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600118C")]
	[Address(RVA = "0x69359C0", Offset = "0x69349C0", VA = "0x69359C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void Free(void* ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600118D")]
	[Address(RVA = "0x69359F0", Offset = "0x69349F0", VA = "0x69359F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void FreeNativeOwnedMemory(void* ptr);

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x6935A20", Offset = "0x6934A20", VA = "0x6935A20")]
	public unsafe static void* GetNativeOwnedDataPointer(void* ptr)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
