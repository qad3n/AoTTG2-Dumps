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
		[Address(RVA = "0x5F89CC0", Offset = "0x5F88CC0", VA = "0x5F89CC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x5F82E70", Offset = "0x5F81E70", VA = "0x5F82E70")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x5F83120", Offset = "0x5F82120", VA = "0x5F83120", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5F83050", Offset = "0x5F82050", VA = "0x5F83050")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5F82E90", Offset = "0x5F81E90", VA = "0x5F82E90")]
	public void Insert(int index, char value, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x5F8A030", Offset = "0x5F89030", VA = "0x5F8A030")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5F8A100", Offset = "0x5F89100", VA = "0x5F8A100")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x5F8A190", Offset = "0x5F89190", VA = "0x5F8A190")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x5F88DB0", Offset = "0x5F87DB0", VA = "0x5F88DB0")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x5F88C50", Offset = "0x5F87C50", VA = "0x5F88C50")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5F8A2B0", Offset = "0x5F892B0", VA = "0x5F8A2B0")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x5F8A090", Offset = "0x5F89090", VA = "0x5F8A090")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5F89CD0", Offset = "0x5F88CD0", VA = "0x5F89CD0")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x5F8A360", Offset = "0x5F89360", VA = "0x5F8A360")]
	public void Dispose()
	{
	}
}
