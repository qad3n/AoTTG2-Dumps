using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200000F")]
[DefaultMember("Item")]
internal ref struct ValueStringBuilder
{
	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x0")]
	private char[] _arrayToReturnToPool;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x8")]
	private Span<char> _chars;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x18")]
	private int _pos;

	[Token(Token = "0x17000007")]
	public int Length
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x4677940", Offset = "0x4677940", VA = "0x4677940")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4670700", Offset = "0x4670700", VA = "0x4670700")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x46709B0", Offset = "0x46709B0", VA = "0x46709B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x46708E0", Offset = "0x46708E0", VA = "0x46708E0")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4670720", Offset = "0x4670720", VA = "0x4670720")]
	public void Insert(int index, char value, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4677CB0", Offset = "0x4677CB0", VA = "0x4677CB0")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4677D80", Offset = "0x4677D80", VA = "0x4677D80")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4677E10", Offset = "0x4677E10", VA = "0x4677E10")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x46769E0", Offset = "0x46769E0", VA = "0x46769E0")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4676880", Offset = "0x4676880", VA = "0x4676880")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4677F30", Offset = "0x4677F30", VA = "0x4677F30")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4677D10", Offset = "0x4677D10", VA = "0x4677D10")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4677950", Offset = "0x4677950", VA = "0x4677950")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4677FE0", Offset = "0x4677FE0", VA = "0x4677FE0")]
	public void Dispose()
	{
	}
}
