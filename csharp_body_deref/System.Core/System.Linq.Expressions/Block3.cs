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
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x2428580", Offset = "0x2426B80", VA = "0x182428580")]
	internal Block3(Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x24283C0", Offset = "0x24269C0", VA = "0x1824283C0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2428240", Offset = "0x2426840", VA = "0x182428240", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x2428470", Offset = "0x2426A70", VA = "0x182428470", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
