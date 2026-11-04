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

[Token(Token = "0x20000AA")]
internal sealed class MethodCallExpression0 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x170000D1")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x243C5B0", Offset = "0x243ABB0", VA = "0x18243C5B0")]
	public MethodCallExpression0(MethodInfo method)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x243C510", Offset = "0x243AB10", VA = "0x18243C510", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x243C560", Offset = "0x243AB60", VA = "0x18243C560", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
