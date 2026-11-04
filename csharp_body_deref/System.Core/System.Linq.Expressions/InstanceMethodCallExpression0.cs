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
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x243A3A0", Offset = "0x24389A0", VA = "0x18243A3A0")]
	public InstanceMethodCallExpression0(MethodInfo method, Expression instance)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x243A2F0", Offset = "0x24388F0", VA = "0x18243A2F0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x243A340", Offset = "0x2438940", VA = "0x18243A340", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
