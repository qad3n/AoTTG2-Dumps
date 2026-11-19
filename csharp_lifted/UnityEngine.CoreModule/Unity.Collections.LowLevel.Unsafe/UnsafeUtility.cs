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

[Token(Token = "0x2000078")]
[UnityEngine.Bindings.StaticAccessor("UnsafeUtility", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Unsafe/UnsafeUtility.bindings.h")]
public static class UnsafeUtility
{
	[Token(Token = "0x2000079")]
	internal struct TypeFlagsCache<T>
	{
		[Token(Token = "0x4000117")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly int flags;

		[Token(Token = "0x6000192")]
		static TypeFlagsCache()
		{
		}

		[Token(Token = "0x6000193")]
		[BurstDiscard]
		private static void Init(ref int flags)
		{
		}
	}

	[Token(Token = "0x200007A")]
	private struct AlignOfHelper<T> where T : struct
	{
		[Token(Token = "0x4000118")]
		[FieldOffset(Offset = "0x0")]
		public byte dummy;

		[Token(Token = "0x4000119")]
		[FieldOffset(Offset = "0x0")]
		public T data;
	}

	[Token(Token = "0x6000164")]
	public static bool IsBlittable<T>() where T : struct
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x68B7D50", Offset = "0x68B6D50", VA = "0x68B7D50")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	[BurstAuthorizedExternalMethod]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AIModule" })]
	internal static extern int LeakRecord(IntPtr handle, LeakCategory category, int callstacksToSkip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x68B7D90", Offset = "0x68B6D90", VA = "0x68B7D90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AIModule" })]
	[BurstAuthorizedExternalMethod]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	internal static extern int LeakErase(IntPtr handle, LeakCategory category);

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x68B7DD0", Offset = "0x68B6DD0", VA = "0x68B7DD0")]
	public unsafe static void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x68B7E20", Offset = "0x68B6E20", VA = "0x68B7E20")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	internal unsafe static extern void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip, IntPtr label);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x68B7AE0", Offset = "0x68B6AE0", VA = "0x68B7AE0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void FreeTracked(void* memory, Allocator allocator);

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x68B7E70", Offset = "0x68B6E70", VA = "0x68B7E70")]
	public unsafe static void* Malloc(long size, int alignment, Allocator allocator)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x68B7F00", Offset = "0x68B6F00", VA = "0x68B7F00")]
	public unsafe static void* Malloc(long size, int alignment, MemoryLabel label)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x68B7EB0", Offset = "0x68B6EB0", VA = "0x68B7EB0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	private unsafe static extern void* Malloc(long size, int alignment, Allocator allocator, IntPtr label);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x68B7F50", Offset = "0x68B6F50", VA = "0x68B7F50")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void Free(void* memory, Allocator allocator);

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x68B7F90", Offset = "0x68B6F90", VA = "0x68B7F90")]
	public unsafe static void Free(void* memory, MemoryLabel label)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x68B6830", Offset = "0x68B5830", VA = "0x68B6830")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpy(void* destination, void* source, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x68B7FD0", Offset = "0x68B6FD0", VA = "0x68B7FD0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpyReplicate(void* destination, void* source, int size, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x68B8020", Offset = "0x68B7020", VA = "0x68B8020")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpyStride(void* destination, int destinationStride, void* source, int sourceStride, int elementSize, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x68B8080", Offset = "0x68B7080", VA = "0x68B8080")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemMove(void* destination, void* source, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x68B80C0", Offset = "0x68B70C0", VA = "0x68B80C0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemSet(void* destination, byte value, long size);

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x68B8100", Offset = "0x68B7100", VA = "0x68B8100")]
	public unsafe static void MemClear(void* destination, long size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000175")]
	[Address(RVA = "0x68B8140", Offset = "0x68B7140", VA = "0x68B8140")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern int MemCmp(void* ptr1, void* ptr2, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000176")]
	[Address(RVA = "0x68B8180", Offset = "0x68B7180", VA = "0x68B8180")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int SizeOf(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000177")]
	[Address(RVA = "0x68B81B0", Offset = "0x68B71B0", VA = "0x68B81B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsBlittable(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000178")]
	[Address(RVA = "0x68B81E0", Offset = "0x68B71E0", VA = "0x68B81E0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal static extern int GetScriptingTypeFlags(Type type);

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x68B8210", Offset = "0x68B7210", VA = "0x68B8210")]
	private static bool IsBlittableValueType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x68B8260", Offset = "0x68B7260", VA = "0x68B8260")]
	private static string GetReasonForTypeNonBlittableImpl(Type t, string name)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x68B8470", Offset = "0x68B7470", VA = "0x68B8470")]
	internal static bool IsArrayBlittable(Array arr)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	internal static bool IsGenericListBlittable<T>() where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x68B84E0", Offset = "0x68B74E0", VA = "0x68B84E0")]
	internal static string GetReasonForArrayNonBlittable(Array arr)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	internal static string GetReasonForGenericListNonBlittable<T>() where T : struct
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	public static bool IsUnmanaged<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x6000180")]
	public static int AlignOf<T>() where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	public unsafe static void CopyPtrToStructure<T>(void* ptr, out T output) where T : struct
	{
	}

	[Token(Token = "0x6000182")]
	private unsafe static void InternalCopyPtrToStructure<T>(void* ptr, out T output) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	public unsafe static void CopyStructureToPtr<T>(ref T input, void* ptr) where T : struct
	{
	}

	[Token(Token = "0x6000184")]
	private unsafe static void InternalCopyStructureToPtr<T>(ref T input, void* ptr) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	public unsafe static T ReadArrayElement<T>(void* source, int index)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000186")]
	public unsafe static T ReadArrayElementWithStride<T>(void* source, int index, int stride)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000187")]
	public unsafe static void WriteArrayElement<T>(void* destination, int index, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000188")]
	public unsafe static void WriteArrayElementWithStride<T>(void* destination, int index, int stride, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000189")]
	public unsafe static void* AddressOf<T>(ref T output) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018A")]
	public static int SizeOf<T>() where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018B")]
	public unsafe static ref T As<U, T>(ref U from)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600018C")]
	internal static T As<T>(object from) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018D")]
	public unsafe static ref T AsRef<T>(void* ptr) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018E")]
	public unsafe static ref T ArrayElementAsRef<T>(void* ptr, int index) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018F")]
	public static int EnumToInt<T>(T enumValue) where T : struct, IConvertible
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000190")]
	private static void InternalEnumToInt<T>(ref T enumValue, ref int intValue)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000191")]
	public static bool EnumEquals<T>(T lhs, T rhs) where T : struct, IConvertible
	{
		return default(bool);
	}
}
