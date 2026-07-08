using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000246")]
internal class StackGuard
{
	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x10")]
	private int m_inliningDepth;

	[Token(Token = "0x4000ADE")]
	private const int MAX_UNCHECKED_INLINING_DEPTH = 20;

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x50652C0", Offset = "0x50652C0", VA = "0x50652C0")]
	internal bool TryBeginInliningScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x5065300", Offset = "0x5065300", VA = "0x5065300")]
	internal void EndInliningScope()
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x505C880", Offset = "0x505C880", VA = "0x505C880")]
	public StackGuard()
	{
	}
}
