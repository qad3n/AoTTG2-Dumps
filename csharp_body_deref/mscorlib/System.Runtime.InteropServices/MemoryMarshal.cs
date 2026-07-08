using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000434")]
public static class MemoryMarshal
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B5")]
	public static Span<byte> AsBytes<T>(Span<T> span) where T : struct
	{
		return default(Span<byte>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B6")]
	public static ReadOnlySpan<byte> AsBytes<T>(ReadOnlySpan<T> span) where T : struct
	{
		return default(ReadOnlySpan<byte>);
	}

	[Token(Token = "0x60021B7")]
	public static Memory<T> AsMemory<T>(ReadOnlyMemory<T> memory)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x60021B8")]
	public unsafe static ref T GetReference<T>(Span<T> span)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60021B9")]
	public unsafe static ref T GetReference<T>(ReadOnlySpan<T> span)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BA")]
	internal unsafe static ref T GetNonNullPinnableReference<T>(Span<T> span)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BB")]
	internal unsafe static ref T GetNonNullPinnableReference<T>(ReadOnlySpan<T> span)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BC")]
	public static ReadOnlySpan<T> CreateReadOnlySpan<T>(ref T reference, int length)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x60021BD")]
	public static bool TryGetArray<T>(ReadOnlyMemory<T> memory, out ArraySegment<T> segment)
	{
		return default(bool);
	}
}
