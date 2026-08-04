// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression1
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
internal sealed class MethodCallExpression1 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x170000D2")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x44BDA20", Offset = "0x44BDA20", VA = "0x44BDA20", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x44BD910", Offset = "0x44BD910", VA = "0x44BD910")]
	public MethodCallExpression1(MethodInfo method, Expression arg0)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x44BD990", Offset = "0x44BD990", VA = "0x44BD990", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x44BDA30", Offset = "0x44BDA30", VA = "0x44BDA30", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
