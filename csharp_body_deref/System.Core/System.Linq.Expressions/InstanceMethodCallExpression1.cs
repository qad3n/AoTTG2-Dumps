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

[Token(Token = "0x20000B1")]
internal sealed class InstanceMethodCallExpression1 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x170000D8")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x44BECE0", Offset = "0x44BECE0", VA = "0x44BECE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x44BEBC0", Offset = "0x44BEBC0", VA = "0x44BEBC0")]
	public InstanceMethodCallExpression1(MethodInfo method, Expression instance, Expression arg0)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x44BEC50", Offset = "0x44BEC50", VA = "0x44BEC50", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x44BECF0", Offset = "0x44BECF0", VA = "0x44BECF0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
