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

[Token(Token = "0x2000089")]
[DebuggerTypeProxy(typeof(InvocationExpressionProxy))]
public class InvocationExpression : Expression, IArgumentProvider
{
	[Token(Token = "0x17000093")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x5DD1540", Offset = "0x5DD0540", VA = "0x5DD1540", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x5DD1550", Offset = "0x5DD0550", VA = "0x5DD1550", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000095")]
	public Expression Expression
	{
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x5DD1560", Offset = "0x5DD0560", VA = "0x5DD1560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000096")]
	[ExcludeFromCodeCoverage]
	public virtual int ArgumentCount
	{
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x5DD15A0", Offset = "0x5DD05A0", VA = "0x5DD15A0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x5DD14C0", Offset = "0x5DD04C0", VA = "0x5DD14C0")]
	internal InvocationExpression(Expression expression, Type returnType)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x5DD1570", Offset = "0x5DD0570", VA = "0x5DD1570", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x5DD15D0", Offset = "0x5DD05D0", VA = "0x5DD15D0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x5DD1600", Offset = "0x5DD0600", VA = "0x5DD1600", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
