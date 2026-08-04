// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpression2
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
internal sealed class InstanceMethodCallExpression2 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x170000D9")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x44BEF50", Offset = "0x44BEF50", VA = "0x44BEF50", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x44BEE00", Offset = "0x44BEE00", VA = "0x44BEE00")]
	public InstanceMethodCallExpression2(MethodInfo method, Expression instance, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x44BEEB0", Offset = "0x44BEEB0", VA = "0x44BEEB0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x44BEF60", Offset = "0x44BEF60", VA = "0x44BEF60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
