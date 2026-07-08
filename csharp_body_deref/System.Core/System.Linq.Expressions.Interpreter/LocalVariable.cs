using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B7")]
internal sealed class LocalVariable
{
	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x10")]
	public readonly int Index;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x14")]
	private int _flags;

	[Token(Token = "0x170001F8")]
	public bool IsBoxed
	{
		[Token(Token = "0x600099F")]
		[Address(RVA = "0x41CC7D0", Offset = "0x41CC7D0", VA = "0x41CC7D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009A0")]
		[Address(RVA = "0x41D2610", Offset = "0x41D2610", VA = "0x41D2610")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public bool InClosure
	{
		[Token(Token = "0x60009A1")]
		[Address(RVA = "0x41CC7C0", Offset = "0x41CC7C0", VA = "0x41CC7C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x41D2630", Offset = "0x41D2630", VA = "0x41D2630")]
	internal LocalVariable(int index, bool closure)
	{
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x41D2660", Offset = "0x41D2660", VA = "0x41D2660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
