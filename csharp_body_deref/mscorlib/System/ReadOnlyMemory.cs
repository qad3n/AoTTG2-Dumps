// ==================== AoTTG2 cross-reference ====================
// Type: System.ReadOnlyMemory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000102")]
[DebuggerTypeProxy(typeof(System.MemoryDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
public readonly struct ReadOnlyMemory<T> : IEquatable<ReadOnlyMemory<T>>
{
	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _object;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _index;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000A4")]
	public int Length
	{
		[Token(Token = "0x600098B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A5")]
	public ReadOnlySpan<T> Span
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600098E")]
		get
		{
			return default(ReadOnlySpan<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000987")]
	public ReadOnlyMemory(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000988")]
	public ReadOnlyMemory(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000989")]
	internal ReadOnlyMemory(object obj, int start, int length)
	{
	}

	[Token(Token = "0x600098A")]
	public static implicit operator ReadOnlyMemory<T>(ArraySegment<T> segment)
	{
		return default(ReadOnlyMemory<T>);
	}

	[Token(Token = "0x600098C")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600098D")]
	public ReadOnlyMemory<T> Slice(int start)
	{
		return default(ReadOnlyMemory<T>);
	}

	[Token(Token = "0x600098F")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000990")]
	public bool Equals(ReadOnlyMemory<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000991")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000992")]
	private static int CombineHashCodes(int left, int right)
	{
		return default(int);
	}

	[Token(Token = "0x6000993")]
	private static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000994")]
	internal object GetObjectStartLength(out int start, out int length)
	{
		return null;
	}
}
