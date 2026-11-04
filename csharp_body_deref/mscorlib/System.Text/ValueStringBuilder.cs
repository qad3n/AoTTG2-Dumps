// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.ValueStringBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002C3")]
internal ref struct ValueStringBuilder
{
	[Token(Token = "0x4000BDC")]
	[FieldOffset(Offset = "0x0")]
	private char[] _arrayToReturnToPool;

	[Token(Token = "0x4000BDD")]
	[FieldOffset(Offset = "0x8")]
	private Span<char> _chars;

	[Token(Token = "0x4000BDE")]
	[FieldOffset(Offset = "0x18")]
	private int _pos;

	[Token(Token = "0x17000245")]
	public int Length
	{
		[Token(Token = "0x6001731")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000246")]
	public unsafe ref char this[int index]
	{
		[Token(Token = "0x6001732")]
		[Address(RVA = "0x19A1CA0", Offset = "0x19A02A0", VA = "0x1819A1CA0")]
		get
		{
			return ref *(char*)null;
		}
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x19A1C90", Offset = "0x19A0290", VA = "0x1819A1C90")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x19A1AD0", Offset = "0x19A00D0", VA = "0x1819A1AD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x19A1BA0", Offset = "0x19A01A0", VA = "0x1819A1BA0")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001735")]
	[Address(RVA = "0x19A17B0", Offset = "0x199FDB0", VA = "0x1819A17B0")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001736")]
	[Address(RVA = "0x19A1530", Offset = "0x199FB30", VA = "0x1819A1530")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x19A1240", Offset = "0x199F840", VA = "0x1819A1240")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x19A16F0", Offset = "0x199FCF0", VA = "0x1819A16F0")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x19A1460", Offset = "0x199FA60", VA = "0x1819A1460")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600173A")]
	[Address(RVA = "0x19A13A0", Offset = "0x199F9A0", VA = "0x1819A13A0")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600173B")]
	[Address(RVA = "0x19A18D0", Offset = "0x199FED0", VA = "0x1819A18D0")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600173C")]
	[Address(RVA = "0x19A1940", Offset = "0x199FF40", VA = "0x1819A1940")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600173D")]
	[Address(RVA = "0x19A1830", Offset = "0x199FE30", VA = "0x1819A1830")]
	public void Dispose()
	{
	}
}
