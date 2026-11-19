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
	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x0")]
	internal readonly System.ByReference<T> _pointer;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000AA")]
	public unsafe ref T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009F7")]
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
		[Token(Token = "0x6000A03")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F3")]
	public Span(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F4")]
	public Span(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F5")]
	[CLSCompliant(false)]
	public unsafe Span(void* pointer, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F6")]
	internal Span(ref T ptr, int length)
	{
	}

	[Token(Token = "0x60009F8")]
	public unsafe ref T GetPinnableReference()
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60009FA")]
	public void Fill(T value)
	{
	}

	[Token(Token = "0x60009FB")]
	public void CopyTo(Span<T> destination)
	{
	}

	[Token(Token = "0x60009FC")]
	public bool TryCopyTo(Span<T> destination)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FD")]
	public static bool operator ==(Span<T> left, Span<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FE")]
	public static implicit operator ReadOnlySpan<T>(Span<T> span)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x60009FF")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A00")]
	public Span<T> Slice(int start)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A01")]
	public Span<T> Slice(int start, int length)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A02")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000A04")]
	[Obsolete("Equals() on Span will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Obsolete("GetHashCode() on Span will always throw an exception.")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A06")]
	public static implicit operator Span<T>(T[] array)
	{
		return default(Span<T>);
	}
}
