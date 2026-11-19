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

[Token(Token = "0x20000B1")]
internal sealed class InstanceMethodCallExpression0 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x170000D9")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x5DD4980", Offset = "0x5DD3980", VA = "0x5DD4980", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x5DD48B0", Offset = "0x5DD38B0", VA = "0x5DD48B0")]
	public InstanceMethodCallExpression0(MethodInfo method, Expression instance)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x5DD4930", Offset = "0x5DD3930", VA = "0x5DD4930", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5DD4990", Offset = "0x5DD3990", VA = "0x5DD4990", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
