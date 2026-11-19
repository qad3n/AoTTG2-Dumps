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

[Token(Token = "0x200029B")]
internal ref struct ValueStringBuilder
{
	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x0")]
	private char[] _arrayToReturnToPool;

	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x8")]
	private Span<char> _chars;

	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x18")]
	private int _pos;

	[Token(Token = "0x17000244")]
	public int Length
	{
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x531DD60", Offset = "0x531CD60", VA = "0x531DD60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000245")]
	public unsafe ref char this[int index]
	{
		[Token(Token = "0x600170A")]
		[Address(RVA = "0x531DD70", Offset = "0x531CD70", VA = "0x531DD70")]
		get
		{
			return ref *(char*)null;
		}
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x531DD40", Offset = "0x531CD40", VA = "0x531DD40")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x531DD90", Offset = "0x531CD90", VA = "0x531DD90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600170C")]
	[Address(RVA = "0x531DE30", Offset = "0x531CE30", VA = "0x531DE30")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600170D")]
	[Address(RVA = "0x531DF00", Offset = "0x531CF00", VA = "0x531DF00")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600170E")]
	[Address(RVA = "0x531DFD0", Offset = "0x531CFD0", VA = "0x531DFD0")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x531E060", Offset = "0x531D060", VA = "0x531E060")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x531E4E0", Offset = "0x531D4E0", VA = "0x531E4E0")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x531E690", Offset = "0x531D690", VA = "0x531E690")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001712")]
	[Address(RVA = "0x531E7F0", Offset = "0x531D7F0", VA = "0x531E7F0")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001713")]
	[Address(RVA = "0x531DF60", Offset = "0x531CF60", VA = "0x531DF60")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001714")]
	[Address(RVA = "0x531E180", Offset = "0x531D180", VA = "0x531E180")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001715")]
	[Address(RVA = "0x531E8A0", Offset = "0x531D8A0", VA = "0x531E8A0")]
	public void Dispose()
	{
	}
}
