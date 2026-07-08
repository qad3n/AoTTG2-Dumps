using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000088")]
[DebuggerTypeProxy(typeof(InvocationExpressionProxy))]
public class InvocationExpression : Expression, IArgumentProvider
{
	[Token(Token = "0x17000091")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x41965D0", Offset = "0x41965D0", VA = "0x41965D0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x41965E0", Offset = "0x41965E0", VA = "0x41965E0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000093")]
	public Expression Expression
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x41965F0", Offset = "0x41965F0", VA = "0x41965F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	[ExcludeFromCodeCoverage]
	public virtual int ArgumentCount
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x4196630", Offset = "0x4196630", VA = "0x4196630", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4196550", Offset = "0x4196550", VA = "0x4196550")]
	internal InvocationExpression(Expression expression, Type returnType)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4196600", Offset = "0x4196600", VA = "0x4196600", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4196660", Offset = "0x4196660", VA = "0x4196660", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4196690", Offset = "0x4196690", VA = "0x4196690", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
