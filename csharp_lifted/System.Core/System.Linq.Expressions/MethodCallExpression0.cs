// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression0
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AB")]
internal sealed class MethodCallExpression0 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x170000D3")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x5DD36D0", Offset = "0x5DD26D0", VA = "0x5DD36D0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x5DD3610", Offset = "0x5DD2610", VA = "0x5DD3610")]
	public MethodCallExpression0(MethodInfo method)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x5DD3680", Offset = "0x5DD2680", VA = "0x5DD3680", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x5DD36E0", Offset = "0x5DD26E0", VA = "0x5DD36E0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
