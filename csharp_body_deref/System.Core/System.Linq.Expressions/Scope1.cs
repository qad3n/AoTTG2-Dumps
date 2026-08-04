// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Scope1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006E")]
internal sealed class Scope1 : ScopeExpression
{
	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x18")]
	private object _body;

	[Token(Token = "0x17000065")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x44AF0A0", Offset = "0x44AF0A0", VA = "0x44AF0A0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x44AEF30", Offset = "0x44AEF30", VA = "0x44AEF30")]
	internal Scope1(IReadOnlyList<ParameterExpression> variables, Expression body)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x44AEFB0", Offset = "0x44AEFB0", VA = "0x44AEFB0")]
	private Scope1(IReadOnlyList<ParameterExpression> variables, object body)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x44AF030", Offset = "0x44AF030", VA = "0x44AF030", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x44AF0B0", Offset = "0x44AF0B0", VA = "0x44AF0B0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x44AF0C0", Offset = "0x44AF0C0", VA = "0x44AF0C0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
