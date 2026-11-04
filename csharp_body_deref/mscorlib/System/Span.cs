// ==================== AoTTG2 cross-reference ====================
// Type: System.Span
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000131")]
[DebuggerTypeProxy(typeof(System.SpanDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
[System.Runtime.Versioning.NonVersionable]
public readonly ref struct Span<T>
{
	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x0")]
	internal readonly System.ByReference<T> _pointer;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000AA")]
	public unsafe ref T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A1B")]
		[System.Runtime.CompilerServices.Intrinsic]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x170000AB")]
	public int Length
	{
		[Token(Token = "0x6000A27")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A17")]
	public Span(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A18")]
	public Span(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A19")]
	[CLSCompliant(false)]
	public unsafe Span(void* pointer, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1A")]
	internal Span(ref T ptr, int length)
	{
	}

	[Token(Token = "0x6000A1C")]
	public unsafe ref T GetPinnableReference()
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1D")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000A1E")]
	public void Fill(T value)
	{
	}

	[Token(Token = "0x6000A1F")]
	public void CopyTo(Span<T> destination)
	{
	}

	[Token(Token = "0x6000A20")]
	public bool TryCopyTo(Span<T> destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A21")]
	public static bool operator ==(Span<T> left, Span<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A22")]
	public static implicit operator ReadOnlySpan<T>(Span<T> span)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x6000A23")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A24")]
	public Span<T> Slice(int start)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A25")]
	public Span<T> Slice(int start, int length)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A26")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000A28")]
	[Obsolete("Equals() on Span will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A29")]
	[Obsolete("GetHashCode() on Span will always throw an exception.")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A2A")]
	public static implicit operator Span<T>(T[] array)
	{
		return default(Span<T>);
	}
}
