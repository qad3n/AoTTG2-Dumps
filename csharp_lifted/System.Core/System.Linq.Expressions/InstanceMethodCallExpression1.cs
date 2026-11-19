// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpression1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B2")]
internal sealed class InstanceMethodCallExpression1 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x170000DA")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x5DD4B10", Offset = "0x5DD3B10", VA = "0x5DD4B10", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x5DD49F0", Offset = "0x5DD39F0", VA = "0x5DD49F0")]
	public InstanceMethodCallExpression1(MethodInfo method, Expression instance, Expression arg0)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x5DD4A80", Offset = "0x5DD3A80", VA = "0x5DD4A80", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x5DD4B20", Offset = "0x5DD3B20", VA = "0x5DD4B20", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
