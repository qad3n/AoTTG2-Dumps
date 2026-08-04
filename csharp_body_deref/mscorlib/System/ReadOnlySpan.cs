// ==================== AoTTG2 cross-reference ====================
// Type: System.ReadOnlySpan
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

[Token(Token = "0x2000103")]
[System.Runtime.Versioning.NonVersionable]
[DebuggerTypeProxy(typeof(System.SpanDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
public readonly ref struct ReadOnlySpan<T>
{
	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x0")]
	internal readonly System.ByReference<T> _pointer;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000A6")]
	public unsafe ref readonly T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000982")]
		[System.Runtime.CompilerServices.Intrinsic]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x170000A7")]
	public int Length
	{
		[Token(Token = "0x6000989")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A8")]
	public bool IsEmpty
	{
		[Token(Token = "0x600098A")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A9")]
	public static ReadOnlySpan<T> Empty
	{
		[Token(Token = "0x600098E")]
		get
		{
			return default(ReadOnlySpan<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600097E")]
	public ReadOnlySpan(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600097F")]
	public ReadOnlySpan(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000980")]
	[CLSCompliant(false)]
	public unsafe ReadOnlySpan(void* pointer, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000981")]
	internal ReadOnlySpan(ref T ptr, int length)
	{
	}

	[Token(Token = "0x6000983")]
	public void CopyTo(Span<T> destination)
	{
	}

	[Token(Token = "0x6000984")]
	public bool TryCopyTo(Span<T> destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000986")]
	public ReadOnlySpan<T> Slice(int start)
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000987")]
	public ReadOnlySpan<T> Slice(int start, int length)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x6000988")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x600098B")]
	[Obsolete("Equals() on ReadOnlySpan will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600098C")]
	[Obsolete("GetHashCode() on ReadOnlySpan will always throw an exception.")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600098D")]
	public static implicit operator ReadOnlySpan<T>(T[] array)
	{
		return default(ReadOnlySpan<T>);
	}
}
