// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Block3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000069")]
internal sealed class Block3 : BlockExpression
{
	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x17000060")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x44AE5F0", Offset = "0x44AE5F0", VA = "0x44AE5F0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x44AE4D0", Offset = "0x44AE4D0", VA = "0x44AE4D0")]
	internal Block3(Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x44AE560", Offset = "0x44AE560", VA = "0x44AE560", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x44AE600", Offset = "0x44AE600", VA = "0x44AE600", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x44AE610", Offset = "0x44AE610", VA = "0x44AE610", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
