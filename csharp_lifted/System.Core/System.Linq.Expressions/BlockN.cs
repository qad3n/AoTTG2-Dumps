// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.BlockN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006D")]
internal class BlockN : BlockExpression
{
	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _expressions;

	[Token(Token = "0x17000065")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x5DC4D90", Offset = "0x5DC3D90", VA = "0x5DC4D90", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x5DC4C70", Offset = "0x5DC3C70", VA = "0x5DC4C70")]
	internal BlockN(IReadOnlyList<Expression> expressions)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x5DC4CE0", Offset = "0x5DC3CE0", VA = "0x5DC4CE0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x5DC4E20", Offset = "0x5DC3E20", VA = "0x5DC4E20", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x5DC4E60", Offset = "0x5DC3E60", VA = "0x5DC4E60", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
