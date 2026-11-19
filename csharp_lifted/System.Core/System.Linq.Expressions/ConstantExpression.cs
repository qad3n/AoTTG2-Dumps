// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ConstantExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200007B")]
[DebuggerTypeProxy(typeof(ConstantExpressionProxy))]
public class ConstantExpression : Expression
{
	[Token(Token = "0x1700007A")]
	public override Type Type
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x5DC6B80", Offset = "0x5DC5B80", VA = "0x5DC6B80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x5DC6BD0", Offset = "0x5DC5BD0", VA = "0x5DC6BD0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700007C")]
	public object Value
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x5DC6BE0", Offset = "0x5DC5BE0", VA = "0x5DC6BE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x5DC6B10", Offset = "0x5DC5B10", VA = "0x5DC6B10")]
	internal ConstantExpression(object value)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x5DC6BF0", Offset = "0x5DC5BF0", VA = "0x5DC6BF0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
