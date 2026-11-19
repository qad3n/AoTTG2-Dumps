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

[Token(Token = "0x20000B3")]
internal sealed class InstanceMethodCallExpression2 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x170000DB")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x5DD4D80", Offset = "0x5DD3D80", VA = "0x5DD4D80", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x5DD4C30", Offset = "0x5DD3C30", VA = "0x5DD4C30")]
	public InstanceMethodCallExpression2(MethodInfo method, Expression instance, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x5DD4CE0", Offset = "0x5DD3CE0", VA = "0x5DD4CE0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x5DD4D90", Offset = "0x5DD3D90", VA = "0x5DD4D90", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
