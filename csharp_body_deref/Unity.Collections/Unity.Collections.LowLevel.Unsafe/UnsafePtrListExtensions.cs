// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafePtrListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200011E")]
[GenerateTestsForBurstCompatibility]
internal static class UnsafePtrListExtensions
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C37")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static ref UnsafeList<IntPtr> ListData<T>(this ref UnsafePtrList<T> from) where T : struct
	{
		return ref *(UnsafeList<IntPtr>*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C38")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static UnsafeList<IntPtr> ListDataRO<T>(this UnsafePtrList<T> from) where T : struct
	{
		return default(UnsafeList<IntPtr>);
	}
}
