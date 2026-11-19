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

[Token(Token = "0x20000A9")]
internal sealed class MethodCallExpressionN : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x18")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000D1")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x5DD32E0", Offset = "0x5DD22E0", VA = "0x5DD32E0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x5DD31B0", Offset = "0x5DD21B0", VA = "0x5DD31B0")]
	public MethodCallExpressionN(MethodInfo method, IReadOnlyList<Expression> args)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x5DD3230", Offset = "0x5DD2230", VA = "0x5DD3230", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x5DD3370", Offset = "0x5DD2370", VA = "0x5DD3370", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
