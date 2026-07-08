using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004AA")]
internal static class Unsafe
{
	[Token(Token = "0x6002322")]
	public unsafe static ref T Add<T>(ref T source, int elementOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6002323")]
	public unsafe static ref T Add<T>(ref T source, IntPtr elementOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6002324")]
	public unsafe static void* Add<T>(void* source, int elementOffset)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6002325")]
	public unsafe static ref T AddByteOffset<T>(ref T source, IntPtr byteOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6002326")]
	public static bool AreSame<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002327")]
	public static T As<T>(object o) where T : class
	{
		return null;
	}

	[Token(Token = "0x6002328")]
	public unsafe static ref TTo As<TFrom, TTo>(ref TFrom source)
	{
		return ref *(TTo*)null;
	}

	[Token(Token = "0x6002329")]
	public unsafe static void* AsPointer<T>(ref T value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x600232A")]
	public unsafe static ref T AsRef<T>(void* source)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600232B")]
	public unsafe static ref T AsRef<T>(in T source)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600232C")]
	[Address(RVA = "0x4EDE740", Offset = "0x4EDE740", VA = "0x4EDE740")]
	public static void InitBlockUnaligned(ref byte startAddress, byte value, uint byteCount)
	{
	}

	[Token(Token = "0x600232D")]
	public unsafe static T Read<T>(void* source)
	{
		return (T)null;
	}

	[Token(Token = "0x600232E")]
	public static T ReadUnaligned<T>(ref byte source)
	{
		return (T)null;
	}

	[Token(Token = "0x600232F")]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[Token(Token = "0x6002330")]
	public static void WriteUnaligned<T>(ref byte destination, T value)
	{
	}

	[Token(Token = "0x6002331")]
	public static bool IsAddressLessThan<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002332")]
	internal unsafe static ref T AddByteOffset<T>(ref T source, ulong byteOffset)
	{
		return ref *(T*)null;
	}
}
