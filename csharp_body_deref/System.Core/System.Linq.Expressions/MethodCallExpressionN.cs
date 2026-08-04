// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpressionN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A8")]
internal sealed class MethodCallExpressionN : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x18")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000CF")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x44BD470", Offset = "0x44BD470", VA = "0x44BD470", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x44BD340", Offset = "0x44BD340", VA = "0x44BD340")]
	public MethodCallExpressionN(MethodInfo method, IReadOnlyList<Expression> args)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x44BD3C0", Offset = "0x44BD3C0", VA = "0x44BD3C0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x44BD500", Offset = "0x44BD500", VA = "0x44BD500", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
