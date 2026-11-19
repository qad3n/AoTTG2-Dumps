// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.LogicalBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000046")]
internal sealed class LogicalBinaryExpression : BinaryExpression
{
	[Token(Token = "0x17000051")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x5DAD040", Offset = "0x5DAC040", VA = "0x5DAD040", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x5DAD070", Offset = "0x5DAC070", VA = "0x5DAD070", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x5DACFC0", Offset = "0x5DABFC0", VA = "0x5DACFC0")]
	internal LogicalBinaryExpression(ExpressionType nodeType, Expression left, Expression right)
	{
	}
}
