// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Block4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006B")]
internal sealed class Block4 : BlockExpression
{
	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg3;

	[Token(Token = "0x17000063")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x5DC4980", Offset = "0x5DC3980", VA = "0x5DC4980", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x5DC4820", Offset = "0x5DC3820", VA = "0x5DC4820")]
	internal Block4(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x5DC48D0", Offset = "0x5DC38D0", VA = "0x5DC48D0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x5DC4990", Offset = "0x5DC3990", VA = "0x5DC4990", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x5DC49A0", Offset = "0x5DC39A0", VA = "0x5DC49A0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
