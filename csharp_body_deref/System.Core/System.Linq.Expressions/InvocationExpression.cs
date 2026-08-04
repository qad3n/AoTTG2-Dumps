// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InvocationExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x44BB6D0", Offset = "0x44BB6D0", VA = "0x44BB6D0", Slot = "5")]
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
		[Address(RVA = "0x44BB6E0", Offset = "0x44BB6E0", VA = "0x44BB6E0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000093")]
	public Expression Expression
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x44BB6F0", Offset = "0x44BB6F0", VA = "0x44BB6F0")]
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
		[Address(RVA = "0x44BB730", Offset = "0x44BB730", VA = "0x44BB730", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x44BB650", Offset = "0x44BB650", VA = "0x44BB650")]
	internal InvocationExpression(Expression expression, Type returnType)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x44BB700", Offset = "0x44BB700", VA = "0x44BB700", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x44BB760", Offset = "0x44BB760", VA = "0x44BB760", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x44BB790", Offset = "0x44BB790", VA = "0x44BB790", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
