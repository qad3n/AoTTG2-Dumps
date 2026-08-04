// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ValueListBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000657")]
[DefaultMember("Item")]
internal ref struct ValueListBuilder<T>
{
	[Token(Token = "0x4001B3D")]
	[FieldOffset(Offset = "0x0")]
	private Span<T> _span;

	[Token(Token = "0x4001B3E")]
	[FieldOffset(Offset = "0x0")]
	private T[] _arrayFromPool;

	[Token(Token = "0x4001B3F")]
	[FieldOffset(Offset = "0x0")]
	private int _pos;

	[Token(Token = "0x17000833")]
	public int Length
	{
		[Token(Token = "0x6003260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600325F")]
	public ValueListBuilder(Span<T> initialSpan)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6003261")]
	public void Append(T item)
	{
	}

	[Token(Token = "0x6003262")]
	public ReadOnlySpan<T> AsSpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6003263")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6003264")]
	private void Grow()
	{
	}
}
