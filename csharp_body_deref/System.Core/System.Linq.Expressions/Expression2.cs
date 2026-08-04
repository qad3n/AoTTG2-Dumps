// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Expression2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000097")]
internal sealed class Expression2<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x0")]
	private object _par0;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x0")]
	private readonly ParameterExpression _par1;

	[Token(Token = "0x170000B2")]
	internal override int ParameterCount
	{
		[Token(Token = "0x6000456")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000455")]
	public Expression2(Expression body, ParameterExpression par0, ParameterExpression par1)
	{
	}

	[Token(Token = "0x6000457")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000458")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
