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
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x243EBD0", Offset = "0x243D1D0", VA = "0x18243EBD0")]
	internal Scope1(IReadOnlyList<ParameterExpression> variables, Expression body)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x2428330", Offset = "0x2426930", VA = "0x182428330")]
	private Scope1(IReadOnlyList<ParameterExpression> variables, object body)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x243EA10", Offset = "0x243D010", VA = "0x18243EA10", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x243EA90", Offset = "0x243D090", VA = "0x18243EA90", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x243EAA0", Offset = "0x243D0A0", VA = "0x18243EAA0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
