// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Expression0
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000096")]
internal sealed class Expression0<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x170000B2")]
	internal override int ParameterCount
	{
		[Token(Token = "0x6000458")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000457")]
	public Expression0(Expression body)
	{
	}

	[Token(Token = "0x6000459")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x600045A")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
