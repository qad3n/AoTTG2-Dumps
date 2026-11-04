// ==================== AoTTG2 cross-reference ====================
// Type: System.ReadOnlySpan
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

[Token(Token = "0x200012B")]
[System.Runtime.Versioning.NonVersionable]
[DebuggerTypeProxy(typeof(System.SpanDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
public readonly ref struct ReadOnlySpan<T>
{
	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x0")]
	internal readonly System.ByReference<T> _pointer;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000A6")]
	public unsafe ref readonly T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009BD")]
		[System.Runtime.Versioning.NonVersionable]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x170000A7")]
	public int Length
	{
		[Token(Token = "0x60009C6")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A8")]
	public bool IsEmpty
	{
		[Token(Token = "0x60009C7")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A9")]
	public static ReadOnlySpan<T> Empty
	{
		[Token(Token = "0x60009CB")]
		get
		{
			return default(ReadOnlySpan<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B9")]
	public ReadOnlySpan(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009BA")]
	public ReadOnlySpan(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009BB")]
	[CLSCompliant(false)]
	public unsafe ReadOnlySpan(void* pointer, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009BC")]
	internal ReadOnlySpan(ref T ptr, int length)
	{
	}

	[Token(Token = "0x60009BE")]
	public unsafe ref T GetPinnableReference()
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60009BF")]
	public void CopyTo(Span<T> destination)
	{
	}

	[Token(Token = "0x60009C0")]
	public bool TryCopyTo(Span<T> destination)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C1")]
	public static bool operator ==(ReadOnlySpan<T> left, ReadOnlySpan<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C2")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009C3")]
	public ReadOnlySpan<T> Slice(int start)
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009C4")]
	public ReadOnlySpan<T> Slice(int start, int length)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x60009C5")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60009C8")]
	[Obsolete("Equals() on ReadOnlySpan will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C9")]
	[Obsolete("GetHashCode() on ReadOnlySpan will always throw an exception.")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009CA")]
	public static implicit operator ReadOnlySpan<T>(T[] array)
	{
		return default(ReadOnlySpan<T>);
	}
}
