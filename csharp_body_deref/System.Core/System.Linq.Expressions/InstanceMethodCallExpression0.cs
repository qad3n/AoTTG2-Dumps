// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpression0
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B0")]
internal sealed class InstanceMethodCallExpression0 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x170000D7")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x44BEB50", Offset = "0x44BEB50", VA = "0x44BEB50", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x44BEA80", Offset = "0x44BEA80", VA = "0x44BEA80")]
	public InstanceMethodCallExpression0(MethodInfo method, Expression instance)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x44BEB00", Offset = "0x44BEB00", VA = "0x44BEB00", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x44BEB60", Offset = "0x44BEB60", VA = "0x44BEB60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
