// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ExpressionN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200009A")]
internal class ExpressionN<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x0")]
	private IReadOnlyList<ParameterExpression> _parameters;

	[Token(Token = "0x170000B6")]
	internal override int ParameterCount
	{
		[Token(Token = "0x6000468")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000467")]
	public ExpressionN(Expression body, IReadOnlyList<ParameterExpression> parameters)
	{
	}

	[Token(Token = "0x6000469")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x600046A")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
