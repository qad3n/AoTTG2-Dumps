using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000253")]
internal ref struct ValueListBuilder<T>
{
	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x0")]
	private Span<T> _span;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x0")]
	private T[] _arrayFromPool;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x0")]
	private int _pos;

	[Token(Token = "0x1700033C")]
	public int Length
	{
		[Token(Token = "0x6001031")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700033D")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x6001032")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6001030")]
	public ValueListBuilder(Span<T> initialSpan)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6001033")]
	public void Append(T item)
	{
	}

	[Token(Token = "0x6001034")]
	public ReadOnlySpan<T> AsSpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6001035")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001036")]
	private void Grow()
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6001037")]
	public T Pop()
	{
		return (T)null;
	}
}
