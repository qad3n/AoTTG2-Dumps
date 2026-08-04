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

[Token(Token = "0x200006A")]
internal sealed class Block4 : BlockExpression
{
	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg3;

	[Token(Token = "0x17000061")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x44AE870", Offset = "0x44AE870", VA = "0x44AE870", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x44AE710", Offset = "0x44AE710", VA = "0x44AE710")]
	internal Block4(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x44AE7C0", Offset = "0x44AE7C0", VA = "0x44AE7C0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x44AE880", Offset = "0x44AE880", VA = "0x44AE880", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x44AE890", Offset = "0x44AE890", VA = "0x44AE890", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
