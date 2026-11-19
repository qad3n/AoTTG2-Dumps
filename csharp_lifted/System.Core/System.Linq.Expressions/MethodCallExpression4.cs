// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AF")]
internal sealed class MethodCallExpression4 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg3;

	[Token(Token = "0x170000D7")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x5DD4130", Offset = "0x5DD3130", VA = "0x5DD4130", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x5DD3FB0", Offset = "0x5DD2FB0", VA = "0x5DD3FB0")]
	public MethodCallExpression4(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x5DD4070", Offset = "0x5DD3070", VA = "0x5DD4070", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x5DD4140", Offset = "0x5DD3140", VA = "0x5DD4140", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
