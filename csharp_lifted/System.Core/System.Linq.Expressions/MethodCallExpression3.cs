// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AE")]
internal sealed class MethodCallExpression3 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x170000D6")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x5DD3D90", Offset = "0x5DD2D90", VA = "0x5DD3D90", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x5DD3C30", Offset = "0x5DD2C30", VA = "0x5DD3C30")]
	public MethodCallExpression3(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x5DD3CE0", Offset = "0x5DD2CE0", VA = "0x5DD3CE0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x5DD3DA0", Offset = "0x5DD2DA0", VA = "0x5DD3DA0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
