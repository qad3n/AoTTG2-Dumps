// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.Unsafe
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x2000002")]
internal static class Unsafe
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000001")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static T Read<T>(void* source)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000002")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static T ReadUnaligned<T>(void* source)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000003")]
	[System.Runtime.Versioning.NonVersionable]
	public static T ReadUnaligned<T>(ref byte source)
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000004")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void Write<T>(void* destination, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000005")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void WriteUnaligned<T>(void* destination, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000006")]
	[System.Runtime.Versioning.NonVersionable]
	public static void WriteUnaligned<T>(ref byte destination, T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000007")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void Copy<T>(void* destination, ref T source)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000008")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void Copy<T>(ref T destination, void* source)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000009")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void* AsPointer<T>(ref T value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000A")]
	[System.Runtime.Versioning.NonVersionable]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x297C2A0", Offset = "0x297A8A0", VA = "0x18297C2A0")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void CopyBlock(void* destination, void* source, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x297C2A0", Offset = "0x297A8A0", VA = "0x18297C2A0")]
	[System.Runtime.Versioning.NonVersionable]
	public static void CopyBlock(ref byte destination, ref byte source, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x297C2A0", Offset = "0x297A8A0", VA = "0x18297C2A0")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void CopyBlockUnaligned(void* destination, void* source, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x297C2A0", Offset = "0x297A8A0", VA = "0x18297C2A0")]
	[System.Runtime.Versioning.NonVersionable]
	public static void CopyBlockUnaligned(ref byte destination, ref byte source, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1A58C70", Offset = "0x1A57270", VA = "0x181A58C70")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void InitBlock(void* startAddress, byte value, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1A58C70", Offset = "0x1A57270", VA = "0x181A58C70")]
	[System.Runtime.Versioning.NonVersionable]
	public static void InitBlock(ref byte startAddress, byte value, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x1A58C70", Offset = "0x1A57270", VA = "0x181A58C70")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void InitBlockUnaligned(void* startAddress, byte value, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1A58C70", Offset = "0x1A57270", VA = "0x181A58C70")]
	[System.Runtime.Versioning.NonVersionable]
	public static void InitBlockUnaligned(ref byte startAddress, byte value, uint byteCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000013")]
	[System.Runtime.Versioning.NonVersionable]
	public static T As<T>(object o) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000014")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T AsRef<T>(void* source)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000015")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T AsRef<T>(in T source)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000016")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref TTo As<TFrom, TTo>(ref TFrom source)
	{
		return ref *(TTo*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000017")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T Unbox<T>(object box) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000018")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T Add<T>(ref T source, int elementOffset)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000019")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void* Add<T>(void* source, int elementOffset)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001A")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T Add<T>(ref T source, IntPtr elementOffset)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001B")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T AddByteOffset<T>(ref T source, IntPtr byteOffset)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001C")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T Subtract<T>(ref T source, int elementOffset)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001D")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static void* Subtract<T>(void* source, int elementOffset)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001E")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T Subtract<T>(ref T source, IntPtr elementOffset)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001F")]
	[System.Runtime.Versioning.NonVersionable]
	public unsafe static ref T SubtractByteOffset<T>(ref T source, IntPtr byteOffset)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000020")]
	[System.Runtime.Versioning.NonVersionable]
	public static IntPtr ByteOffset<T>(ref T origin, ref T target)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000021")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool AreSame<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000022")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsAddressGreaterThan<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000023")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsAddressLessThan<T>(ref T left, ref T right)
	{
		return default(bool);
	}
}
