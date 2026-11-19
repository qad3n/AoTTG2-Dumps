// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.MemoryMarshal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200043C")]
public static class MemoryMarshal
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021FA")]
	public static Span<byte> AsBytes<T>(Span<T> span) where T : struct
	{
		return default(Span<byte>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021FB")]
	public static ReadOnlySpan<byte> AsBytes<T>(ReadOnlySpan<T> span) where T : struct
	{
		return default(ReadOnlySpan<byte>);
	}

	[Token(Token = "0x60021FC")]
	public static Memory<T> AsMemory<T>(ReadOnlyMemory<T> memory)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x60021FD")]
	public unsafe static ref T GetReference<T>(Span<T> span)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60021FE")]
	public unsafe static ref T GetReference<T>(ReadOnlySpan<T> span)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021FF")]
	internal unsafe static ref T GetNonNullPinnableReference<T>(Span<T> span)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002200")]
	internal unsafe static ref T GetNonNullPinnableReference<T>(ReadOnlySpan<T> span)
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002201")]
	public static Span<TTo> Cast<TFrom, TTo>(Span<TFrom> span) where TFrom : struct where TTo : struct
	{
		return default(Span<TTo>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002202")]
	public static ReadOnlySpan<T> CreateReadOnlySpan<T>(ref T reference, int length)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x6002203")]
	public static bool TryGetArray<T>(ReadOnlyMemory<T> memory, out ArraySegment<T> segment)
	{
		return default(bool);
	}
}
