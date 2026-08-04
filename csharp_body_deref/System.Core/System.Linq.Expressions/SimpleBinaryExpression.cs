// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.SimpleBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000049")]
internal class SimpleBinaryExpression : BinaryExpression
{
	[Token(Token = "0x17000055")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x4496EE0", Offset = "0x4496EE0", VA = "0x4496EE0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000056")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4496EF0", Offset = "0x4496EF0", VA = "0x4496EF0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4496E40", Offset = "0x4496E40", VA = "0x4496E40")]
	internal SimpleBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type)
	{
	}
}
