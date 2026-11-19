// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpression3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B4")]
internal sealed class InstanceMethodCallExpression3 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x170000DC")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x5DD50A0", Offset = "0x5DD40A0", VA = "0x5DD50A0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x5DD4F30", Offset = "0x5DD3F30", VA = "0x5DD4F30")]
	public InstanceMethodCallExpression3(MethodInfo method, Expression instance, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x5DD4FF0", Offset = "0x5DD3FF0", VA = "0x5DD4FF0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5DD50B0", Offset = "0x5DD40B0", VA = "0x5DD50B0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
