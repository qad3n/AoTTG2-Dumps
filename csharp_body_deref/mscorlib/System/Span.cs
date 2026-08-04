// ==================== AoTTG2 cross-reference ====================
// Type: System.Span
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000109")]
[DebuggerTypeProxy(typeof(System.SpanDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
[System.Runtime.Versioning.NonVersionable]
public readonly ref struct Span<T>
{
	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x0")]
	internal readonly System.ByReference<T> _pointer;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000AA")]
	public unsafe ref T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009DC")]
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
		[Token(Token = "0x60009E7")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009D8")]
	public Span(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009D9")]
	public Span(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009DA")]
	[CLSCompliant(false)]
	public unsafe Span(void* pointer, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009DB")]
	internal Span(ref T ptr, int length)
	{
	}

	[Token(Token = "0x60009DD")]
	public unsafe ref T GetPinnableReference()
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009DE")]
	public void Clear()
	{
	}

	[Token(Token = "0x60009DF")]
	public void Fill(T value)
	{
	}

	[Token(Token = "0x60009E0")]
	public void CopyTo(Span<T> destination)
	{
	}

	[Token(Token = "0x60009E1")]
	public bool TryCopyTo(Span<T> destination)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E2")]
	public static implicit operator ReadOnlySpan<T>(Span<T> span)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x60009E3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009E4")]
	public Span<T> Slice(int start)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009E5")]
	public Span<T> Slice(int start, int length)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009E6")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60009E8")]
	[Obsolete("Equals() on Span will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E9")]
	[Obsolete("GetHashCode() on Span will always throw an exception.")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009EA")]
	public static implicit operator Span<T>(T[] array)
	{
		return default(Span<T>);
	}
}
