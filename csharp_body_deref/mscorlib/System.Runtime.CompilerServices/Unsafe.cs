// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.Unsafe
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004DA")]
internal static class Unsafe
{
	[Token(Token = "0x60023A4")]
	public unsafe static ref T Add<T>(ref T source, int elementOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60023A5")]
	public unsafe static ref T Add<T>(ref T source, IntPtr elementOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60023A6")]
	public unsafe static void* Add<T>(void* source, int elementOffset)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60023A7")]
	public unsafe static ref T AddByteOffset<T>(ref T source, IntPtr byteOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60023A8")]
	public static bool AreSame<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[Token(Token = "0x60023A9")]
	public static T As<T>(object o) where T : class
	{
		return null;
	}

	[Token(Token = "0x60023AA")]
	public unsafe static ref TTo As<TFrom, TTo>(ref TFrom source)
	{
		return ref *(TTo*)null;
	}

	[Token(Token = "0x60023AB")]
	public unsafe static void* AsPointer<T>(ref T value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60023AC")]
	public unsafe static ref T AsRef<T>(void* source)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60023AD")]
	public unsafe static ref T AsRef<T>(in T source)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60023AE")]
	[Address(RVA = "0x1A58C70", Offset = "0x1A57270", VA = "0x181A58C70")]
	public static void InitBlockUnaligned(ref byte startAddress, byte value, uint byteCount)
	{
	}

	[Token(Token = "0x60023AF")]
	public unsafe static T Read<T>(void* source)
	{
		return (T)null;
	}

	[Token(Token = "0x60023B0")]
	public static T ReadUnaligned<T>(ref byte source)
	{
		return (T)null;
	}

	[Token(Token = "0x60023B1")]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[Token(Token = "0x60023B2")]
	public static void WriteUnaligned<T>(ref byte destination, T value)
	{
	}

	[Token(Token = "0x60023B3")]
	public static bool IsAddressLessThan<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B4")]
	internal unsafe static ref T AddByteOffset<T>(ref T source, ulong byteOffset)
	{
		return ref *(T*)null;
	}
}
