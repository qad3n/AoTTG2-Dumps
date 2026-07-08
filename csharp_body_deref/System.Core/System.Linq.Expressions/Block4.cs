using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006A")]
internal sealed class Block4 : BlockExpression
{
	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg3;

	[Token(Token = "0x17000061")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4189770", Offset = "0x4189770", VA = "0x4189770", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4189610", Offset = "0x4189610", VA = "0x4189610")]
	internal Block4(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x41896C0", Offset = "0x41896C0", VA = "0x41896C0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x4189780", Offset = "0x4189780", VA = "0x4189780", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4189790", Offset = "0x4189790", VA = "0x4189790", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
