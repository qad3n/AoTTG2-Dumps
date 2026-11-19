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
	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _object;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _index;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x17000095")]
	public static Memory<T> Empty
	{
		[Token(Token = "0x600089B")]
		get
		{
			return default(Memory<T>);
		}
	}

	[Token(Token = "0x17000096")]
	public int Length
	{
		[Token(Token = "0x600089C")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000097")]
	public Span<T> Span
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008A0")]
		get
		{
			return default(Span<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000895")]
	public Memory(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000896")]
	public Memory(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000897")]
	internal Memory(object obj, int start, int length)
	{
	}

	[Token(Token = "0x6000898")]
	public static implicit operator Memory<T>(T[] array)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x6000899")]
	public static implicit operator Memory<T>(ArraySegment<T> segment)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x600089A")]
	public static implicit operator ReadOnlyMemory<T>(Memory<T> memory)
	{
		return default(ReadOnlyMemory<T>);
	}

	[Token(Token = "0x600089D")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089E")]
	public Memory<T> Slice(int start)
	{
		return default(Memory<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089F")]
	public Memory<T> Slice(int start, int length)
	{
		return default(Memory<T>);
	}

	[Token(Token = "0x60008A1")]
	public MemoryHandle Pin()
	{
		return default(MemoryHandle);
	}

	[Token(Token = "0x60008A2")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60008A3")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A4")]
	public bool Equals(Memory<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A5")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008A6")]
	private static int CombineHashCodes(int left, int right)
	{
		return default(int);
	}

	[Token(Token = "0x60008A7")]
	private static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}
}
