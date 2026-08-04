// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Burst;
using UnityEngine.Bindings;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000064")]
[UnityEngine.Bindings.StaticAccessor("UnsafeUtility", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Unsafe/UnsafeUtility.bindings.h")]
public static class UnsafeUtility
{
	[Token(Token = "0x2000065")]
	private struct AlignOfHelper<T> where T : struct
	{
		[Token(Token = "0x40000E2")]
		[FieldOffset(Offset = "0x0")]
		public byte dummy;

		[Token(Token = "0x40000E3")]
		[FieldOffset(Offset = "0x0")]
		public T data;
	}

	[Token(Token = "0x60000D0")]
	public static bool IsBlittable<T>() where T : struct
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4DAD8B0", Offset = "0x4DAD8B0", VA = "0x4DAD8B0")]
	[BurstAuthorizedExternalMethod]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	internal static extern int LeakRecord(IntPtr handle, LeakCategory category, int callstacksToSkip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4DAD8F0", Offset = "0x4DAD8F0", VA = "0x4DAD8F0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	[BurstAuthorizedExternalMethod]
	internal static extern int LeakErase(IntPtr handle, LeakCategory category);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4DAD930", Offset = "0x4DAD930", VA = "0x4DAD930")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4DAD650", Offset = "0x4DAD650", VA = "0x4DAD650")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void FreeTracked(void* memory, Allocator allocator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4DAD980", Offset = "0x4DAD980", VA = "0x4DAD980")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void* Malloc(long size, int alignment, Allocator allocator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4DAD9C0", Offset = "0x4DAD9C0", VA = "0x4DAD9C0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void Free(void* memory, Allocator allocator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4DAD420", Offset = "0x4DAD420", VA = "0x4DAD420")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpy(void* destination, void* source, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4DADA00", Offset = "0x4DADA00", VA = "0x4DADA00")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpyStride(void* destination, int destinationStride, void* source, int sourceStride, int elementSize, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4DADA60", Offset = "0x4DADA60", VA = "0x4DADA60")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemMove(void* destination, void* source, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4DADAA0", Offset = "0x4DADAA0", VA = "0x4DADAA0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemSet(void* destination, byte value, long size);

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4DADAE0", Offset = "0x4DADAE0", VA = "0x4DADAE0")]
	public unsafe static void MemClear(void* destination, long size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4DADB20", Offset = "0x4DADB20", VA = "0x4DADB20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int SizeOf(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4DADB50", Offset = "0x4DADB50", VA = "0x4DADB50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsBlittable(Type type);

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4DADB80", Offset = "0x4DADB80", VA = "0x4DADB80")]
	private static bool IsBlittableValueType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4DADBD0", Offset = "0x4DADBD0", VA = "0x4DADBD0")]
	private static string GetReasonForTypeNonBlittableImpl(Type t, string name)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4DADDE0", Offset = "0x4DADDE0", VA = "0x4DADDE0")]
	internal static bool IsArrayBlittable(Array arr)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E1")]
	internal static bool IsGenericListBlittable<T>() where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4DADE50", Offset = "0x4DADE50", VA = "0x4DADE50")]
	internal static string GetReasonForArrayNonBlittable(Array arr)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	internal static string GetReasonForGenericListNonBlittable<T>() where T : struct
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	public static int AlignOf<T>() where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E5")]
	public unsafe static T ReadArrayElement<T>(void* source, int index)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E6")]
	public unsafe static T ReadArrayElementWithStride<T>(void* source, int index, int stride)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E7")]
	public unsafe static void WriteArrayElement<T>(void* destination, int index, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E8")]
	public unsafe static void WriteArrayElementWithStride<T>(void* destination, int index, int stride, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000E9")]
	public unsafe static void* AddressOf<T>(ref T output) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EA")]
	public static int SizeOf<T>() where T : struct
	{
		return default(int);
	}

	[Token(Token = "0x60000EB")]
	public unsafe static ref T As<U, T>(ref U from)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	public unsafe static ref T AsRef<T>(void* ptr) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	public static int EnumToInt<T>(T enumValue) where T : struct, IConvertible
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EE")]
	private static void InternalEnumToInt<T>(ref T enumValue, ref int intValue)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EF")]
	public static bool EnumEquals<T>(T lhs, T rhs) where T : struct, IConvertible
	{
		return default(bool);
	}
}
