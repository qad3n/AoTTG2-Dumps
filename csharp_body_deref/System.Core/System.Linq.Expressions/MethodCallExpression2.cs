// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AC")]
internal sealed class MethodCallExpression2 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x170000D3")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x44BDC50", Offset = "0x44BDC50", VA = "0x44BDC50", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x44BDB20", Offset = "0x44BDB20", VA = "0x44BDB20")]
	public MethodCallExpression2(MethodInfo method, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x44BDBB0", Offset = "0x44BDBB0", VA = "0x44BDBB0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x44BDC60", Offset = "0x44BDC60", VA = "0x44BDC60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
