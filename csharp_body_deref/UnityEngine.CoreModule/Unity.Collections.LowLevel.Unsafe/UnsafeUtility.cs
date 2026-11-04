// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
// Update status: CHANGED in this game update
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

		[Token(Token = "0x6000190")]
		static TypeFlagsCache()
		{
		}

		[Token(Token = "0x6000191")]
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

	[Token(Token = "0x6000162")]
	public static bool IsBlittable<T>() where T : struct
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2ED6920", Offset = "0x2ED4F20", VA = "0x182ED6920")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AIModule" })]
	[BurstAuthorizedExternalMethod]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	internal static extern int LeakRecord(IntPtr handle, LeakCategory category, int callstacksToSkip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x2ED68E0", Offset = "0x2ED4EE0", VA = "0x182ED68E0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	[BurstAuthorizedExternalMethod]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AIModule" })]
	internal static extern int LeakErase(IntPtr handle, LeakCategory category);

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x2ED6970", Offset = "0x2ED4F70", VA = "0x182ED6970")]
	public unsafe static void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x2ED69D0", Offset = "0x2ED4FD0", VA = "0x182ED69D0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	internal unsafe static extern void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip, IntPtr label);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x2ED6450", Offset = "0x2ED4A50", VA = "0x182ED6450")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void FreeTracked(void* memory, Allocator allocator);

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x2ED6AD0", Offset = "0x2ED50D0", VA = "0x182ED6AD0")]
	public unsafe static void* Malloc(long size, int alignment, Allocator allocator)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2ED6A70", Offset = "0x2ED5070", VA = "0x182ED6A70")]
	public unsafe static void* Malloc(long size, int alignment, MemoryLabel label)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016A")]
	[Address(RVA = "0x2ED6A20", Offset = "0x2ED5020", VA = "0x182ED6A20")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	private unsafe static extern void* Malloc(long size, int alignment, Allocator allocator, IntPtr label);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016B")]
	[Address(RVA = "0x2ED64E0", Offset = "0x2ED4AE0", VA = "0x182ED64E0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void Free(void* memory, Allocator allocator);

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x2ED6490", Offset = "0x2ED4A90", VA = "0x182ED6490")]
	public unsafe static void Free(void* memory, MemoryLabel label)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2ED6C80", Offset = "0x2ED5280", VA = "0x182ED6C80")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpy(void* destination, void* source, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2ED6BE0", Offset = "0x2ED51E0", VA = "0x182ED6BE0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpyReplicate(void* destination, void* source, int size, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2ED6C30", Offset = "0x2ED5230", VA = "0x182ED6C30")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemCpyStride(void* destination, int destinationStride, void* source, int sourceStride, int elementSize, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2ED6CE0", Offset = "0x2ED52E0", VA = "0x182ED6CE0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemMove(void* destination, void* source, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2ED6D40", Offset = "0x2ED5340", VA = "0x182ED6D40")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern void MemSet(void* destination, byte value, long size);

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2ED6B30", Offset = "0x2ED5130", VA = "0x182ED6B30")]
	public unsafe static void MemClear(void* destination, long size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x2ED6B80", Offset = "0x2ED5180", VA = "0x182ED6B80")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = true)]
	public unsafe static extern int MemCmp(void* ptr1, void* ptr2, long size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000174")]
	[Address(RVA = "0x2ED6DA0", Offset = "0x2ED53A0", VA = "0x182ED6DA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int SizeOf(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000175")]
	[Address(RVA = "0x2ED68A0", Offset = "0x2ED4EA0", VA = "0x182ED68A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsBlittable(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000176")]
	[Address(RVA = "0x2ED6770", Offset = "0x2ED4D70", VA = "0x182ED6770")]
	[UnityEngine.Bindings.ThreadSafe]
	internal static extern int GetScriptingTypeFlags(Type type);

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x2ED6840", Offset = "0x2ED4E40", VA = "0x182ED6840")]
	private static bool IsBlittableValueType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x2ED6580", Offset = "0x2ED4B80", VA = "0x182ED6580")]
	private static string GetReasonForTypeNonBlittableImpl(Type t, string name)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x2ED67B0", Offset = "0x2ED4DB0", VA = "0x182ED67B0")]
	internal static bool IsArrayBlittable(Array arr)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	internal static bool IsGenericListBlittable<T>() where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x2ED6520", Offset = "0x2ED4B20", VA = "0x182ED6520")]
	internal static string GetReasonForArrayNonBlittable(Array arr)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	internal static string GetReasonForGenericListNonBlittable<T>() where T : struct
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	public static bool IsUnmanaged<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	public static int AlignOf<T>() where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600017F")]
	public unsafe static void CopyPtrToStructure<T>(void* ptr, out T output) where T : struct
	{
	}

	[Token(Token = "0x6000180")]
	private unsafe static void InternalCopyPtrToStructure<T>(void* ptr, out T output) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	public unsafe static void CopyStructureToPtr<T>(ref T input, void* ptr) where T : struct
	{
	}

	[Token(Token = "0x6000182")]
	private unsafe static void InternalCopyStructureToPtr<T>(ref T input, void* ptr) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	public unsafe static T ReadArrayElement<T>(void* source, int index)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	public unsafe static T ReadArrayElementWithStride<T>(void* source, int index, int stride)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	public unsafe static void WriteArrayElement<T>(void* destination, int index, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000186")]
	public unsafe static void WriteArrayElementWithStride<T>(void* destination, int index, int stride, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000187")]
	public unsafe static void* AddressOf<T>(ref T output) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000188")]
	public static int SizeOf<T>() where T : struct
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000189")]
	public unsafe static ref T As<U, T>(ref U from)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600018A")]
	internal static T As<T>(object from) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018B")]
	public unsafe static ref T AsRef<T>(void* ptr) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018C")]
	public unsafe static ref T ArrayElementAsRef<T>(void* ptr, int index) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018D")]
	public static int EnumToInt<T>(T enumValue) where T : struct, IConvertible
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018E")]
	private static void InternalEnumToInt<T>(ref T enumValue, ref int intValue)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600018F")]
	public static bool EnumEquals<T>(T lhs, T rhs) where T : struct, IConvertible
	{
		return default(bool);
	}
}
