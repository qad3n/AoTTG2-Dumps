// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.Unsafe
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004B3")]
internal static class Unsafe
{
	[Token(Token = "0x6002372")]
	public unsafe static ref T Add<T>(ref T source, int elementOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6002373")]
	public unsafe static ref T Add<T>(ref T source, IntPtr elementOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6002374")]
	public unsafe static void* Add<T>(void* source, int elementOffset)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6002375")]
	public unsafe static ref T AddByteOffset<T>(ref T source, IntPtr byteOffset)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6002376")]
	public static bool AreSame<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002377")]
	public static T As<T>(object o) where T : class
	{
		return null;
	}

	[Token(Token = "0x6002378")]
	public unsafe static ref TTo As<TFrom, TTo>(ref TFrom source)
	{
		return ref *(TTo*)null;
	}

	[Token(Token = "0x6002379")]
	public unsafe static void* AsPointer<T>(ref T value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x600237A")]
	public unsafe static ref T AsRef<T>(void* source)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600237B")]
	public unsafe static ref T AsRef<T>(in T source)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x600237C")]
	[Address(RVA = "0x53CBCB0", Offset = "0x53CACB0", VA = "0x53CBCB0")]
	public static void InitBlockUnaligned(ref byte startAddress, byte value, uint byteCount)
	{
	}

	[Token(Token = "0x600237D")]
	public unsafe static T Read<T>(void* source)
	{
		return (T)null;
	}

	[Token(Token = "0x600237E")]
	public static T ReadUnaligned<T>(ref byte source)
	{
		return (T)null;
	}

	[Token(Token = "0x600237F")]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[Token(Token = "0x6002380")]
	public static void WriteUnaligned<T>(ref byte destination, T value)
	{
	}

	[Token(Token = "0x6002381")]
	public static bool IsAddressLessThan<T>(ref T left, ref T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002382")]
	internal unsafe static ref T AddByteOffset<T>(ref T source, ulong byteOffset)
	{
		return ref *(T*)null;
	}
}
