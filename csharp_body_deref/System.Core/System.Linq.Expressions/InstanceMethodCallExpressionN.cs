// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpressionN
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A9")]
internal sealed class InstanceMethodCallExpressionN : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x20")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000D0")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x44BD6C0", Offset = "0x44BD6C0", VA = "0x44BD6C0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x44BD580", Offset = "0x44BD580", VA = "0x44BD580")]
	public InstanceMethodCallExpressionN(MethodInfo method, Expression instance, IReadOnlyList<Expression> args)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x44BD610", Offset = "0x44BD610", VA = "0x44BD610", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x44BD750", Offset = "0x44BD750", VA = "0x44BD750", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
