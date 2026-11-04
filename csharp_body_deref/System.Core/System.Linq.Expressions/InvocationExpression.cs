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
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x1CB0BF0", Offset = "0x1CAF1F0", VA = "0x181CB0BF0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000093")]
	public Expression Expression
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
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
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x243B8D0", Offset = "0x2439ED0", VA = "0x18243B8D0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x243B840", Offset = "0x2439E40", VA = "0x18243B840")]
	internal InvocationExpression(Expression expression, Type returnType)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x243B7E0", Offset = "0x2439DE0", VA = "0x18243B7E0", Slot = "12")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x243B7B0", Offset = "0x2439DB0", VA = "0x18243B7B0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x243B810", Offset = "0x2439E10", VA = "0x18243B810", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
