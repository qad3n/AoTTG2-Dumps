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

[Token(Token = "0x200012A")]
[DebuggerTypeProxy(typeof(System.MemoryDebugView<>))]
[DebuggerDisplay("{ToString(),raw}")]
public readonly struct ReadOnlyMemory<T> : IEquatable<ReadOnlyMemory<T>>
{
	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _object;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _index;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _length;

	[Token(Token = "0x170000A4")]
	public int Length
	{
		[Token(Token = "0x60009AF")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A5")]
	public ReadOnlySpan<T> Span
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009B2")]
		get
		{
			return default(ReadOnlySpan<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009AB")]
	public ReadOnlyMemory(T[] array)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009AC")]
	public ReadOnlyMemory(T[] array, int start, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009AD")]
	internal ReadOnlyMemory(object obj, int start, int length)
	{
	}

	[Token(Token = "0x60009AE")]
	public static implicit operator ReadOnlyMemory<T>(ArraySegment<T> segment)
	{
		return default(ReadOnlyMemory<T>);
	}

	[Token(Token = "0x60009B0")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B1")]
	public ReadOnlyMemory<T> Slice(int start)
	{
		return default(ReadOnlyMemory<T>);
	}

	[Token(Token = "0x60009B3")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B4")]
	public bool Equals(ReadOnlyMemory<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B5")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009B6")]
	private static int CombineHashCodes(int left, int right)
	{
		return default(int);
	}

	[Token(Token = "0x60009B7")]
	private static int CombineHashCodes(int h1, int h2, int h3)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B8")]
	internal object GetObjectStartLength(out int start, out int length)
	{
		return null;
	}
}
