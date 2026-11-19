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

[Token(Token = "0x20000AA")]
internal sealed class InstanceMethodCallExpressionN : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x20")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000D2")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x5DD3510", Offset = "0x5DD2510", VA = "0x5DD3510", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x5DD33D0", Offset = "0x5DD23D0", VA = "0x5DD33D0")]
	public InstanceMethodCallExpressionN(MethodInfo method, Expression instance, IReadOnlyList<Expression> args)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x5DD3460", Offset = "0x5DD2460", VA = "0x5DD3460", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x5DD35A0", Offset = "0x5DD25A0", VA = "0x5DD35A0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
