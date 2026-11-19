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

[Token(Token = "0x2000606")]
[DefaultMember("Item")]
internal ref struct ValueListBuilder<T>
{
	[Token(Token = "0x40018AA")]
	[FieldOffset(Offset = "0x0")]
	private Span<T> _span;

	[Token(Token = "0x40018AB")]
	[FieldOffset(Offset = "0x0")]
	private T[] _arrayFromPool;

	[Token(Token = "0x40018AC")]
	[FieldOffset(Offset = "0x0")]
	private int _pos;

	[Token(Token = "0x170007C1")]
	public int Length
	{
		[Token(Token = "0x6002F56")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002F55")]
	public ValueListBuilder(Span<T> initialSpan)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F57")]
	public void Append(T item)
	{
	}

	[Token(Token = "0x6002F58")]
	public ReadOnlySpan<T> AsSpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F59")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002F5A")]
	private void Grow()
	{
	}
}
