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

[Token(Token = "0x200006F")]
internal sealed class Scope1 : ScopeExpression
{
	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x18")]
	private object _body;

	[Token(Token = "0x17000067")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x5DC51B0", Offset = "0x5DC41B0", VA = "0x5DC51B0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x5DC5040", Offset = "0x5DC4040", VA = "0x5DC5040")]
	internal Scope1(IReadOnlyList<ParameterExpression> variables, Expression body)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x5DC50C0", Offset = "0x5DC40C0", VA = "0x5DC50C0")]
	private Scope1(IReadOnlyList<ParameterExpression> variables, object body)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x5DC5140", Offset = "0x5DC4140", VA = "0x5DC5140", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x5DC51C0", Offset = "0x5DC41C0", VA = "0x5DC51C0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x5DC51D0", Offset = "0x5DC41D0", VA = "0x5DC51D0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
