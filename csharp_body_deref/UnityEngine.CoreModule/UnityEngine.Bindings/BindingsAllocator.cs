// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.BindingsAllocator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200023C")]
[UnityEngine.Bindings.StaticAccessor("Marshalling::BindingsAllocator", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.VisibleToOtherModules]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/Marshalling/BindingsAllocator.h")]
internal static class BindingsAllocator
{
	[Token(Token = "0x200023D")]
	private struct NativeOwnedMemory
	{
		[Token(Token = "0x400073C")]
		[FieldOffset(Offset = "0x0")]
		public unsafe void* data;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001178")]
	[Address(RVA = "0x2F2F6C0", Offset = "0x2F2DCC0", VA = "0x182F2F6C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void Free(void* ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001179")]
	[Address(RVA = "0x2F2F680", Offset = "0x2F2DC80", VA = "0x182F2F680")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void FreeNativeOwnedMemory(void* ptr);

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x738680", Offset = "0x736C80", VA = "0x180738680")]
	public unsafe static void* GetNativeOwnedDataPointer(void* ptr)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
