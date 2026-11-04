// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000149")]
[GenerateTestsForBurstCompatibility]
public static class UnsafeUtilityExtensions
{
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x29C1180", Offset = "0x29BF780", VA = "0x1829C1180")]
	internal unsafe static void MemSwap(void* ptr, void* otherPtr, long size)
	{
	}

	[Token(Token = "0x6000DD1")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static T ReadArrayElementBoundsChecked<T>(void* source, int index, int capacity) where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x6000DD2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static void WriteArrayElementBoundsChecked<T>(void* destination, int index, T value, int capacity) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD3")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static void* AddressOf<T>(in T value) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static ref T AsRef<T>(in T value) where T : struct
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x29C1110", Offset = "0x29BF710", VA = "0x1829C1110")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private unsafe static void CheckMemSwapOverlap(byte* dst, byte* src, long size)
	{
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x29C1040", Offset = "0x29BF640", VA = "0x1829C1040")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckIndexRange(int index, int capacity)
	{
	}
}
