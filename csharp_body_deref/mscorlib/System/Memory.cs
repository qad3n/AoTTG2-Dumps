// ==================== AoTTG2 cross-reference ====================
// Type: System.Memory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Buffers;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E8")]
[DebuggerTypeProxy(typeof(System.MemoryDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
public readonly struct Memory<T> : IEquatable<Memory<T>>
{
	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _object;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _index;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x17000095")]
	public static Memory<T> Empty
	{
		[Token(Token = "0x600088B")]
		get
		{
			return default(Memory<T>);
		}
	}

	[Token(Token = "0x17000096")]
	public int Length
	{
		[Token(Token = "0x600088C")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000097")]
	public Span<T> Span
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000890")]
		get
		{
			return default(Span<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000885")]
	public Memory(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000886")]
	public Memory(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000887")]
	internal Memory(object obj, int start, int length)
	{
	}

	[Token(Token = "0x6000888")]
	public static implicit operator Memory<T>(T[] array)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x6000889")]
	public static implicit operator Memory<T>(ArraySegment<T> segment)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x600088A")]
	public static implicit operator ReadOnlyMemory<T>(Memory<T> memory)
	{
		return default(ReadOnlyMemory<T>);
	}

	[Token(Token = "0x600088D")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088E")]
	public Memory<T> Slice(int start)
	{
		return default(Memory<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088F")]
	public Memory<T> Slice(int start, int length)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x6000891")]
	public MemoryHandle Pin()
	{
		return default(MemoryHandle);
	}

	[Token(Token = "0x6000892")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000893")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000894")]
	public bool Equals(Memory<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000895")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000896")]
	private static int CombineHashCodes(int left, int right)
	{
		return default(int);
	}

	[Token(Token = "0x6000897")]
	private static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}
}
