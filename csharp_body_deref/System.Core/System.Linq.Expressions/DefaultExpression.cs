using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200007D")]
[DebuggerTypeProxy(typeof(DefaultExpressionProxy))]
public sealed class DefaultExpression : Expression
{
	[Token(Token = "0x17000080")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x418BBA0", Offset = "0x418BBA0", VA = "0x418BBA0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x418BBB0", Offset = "0x418BBB0", VA = "0x418BBB0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x418BB30", Offset = "0x418BB30", VA = "0x418BB30")]
	internal DefaultExpression(Type type)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x418BBC0", Offset = "0x418BBC0", VA = "0x418BBC0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
