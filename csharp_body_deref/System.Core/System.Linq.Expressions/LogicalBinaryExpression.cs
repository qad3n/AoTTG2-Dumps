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

[Token(Token = "0x2000045")]
internal sealed class LogicalBinaryExpression : BinaryExpression
{
	[Token(Token = "0x1700004F")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x2424790", Offset = "0x2422D90", VA = "0x182424790", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x2424750", Offset = "0x2422D50", VA = "0x182424750")]
	internal LogicalBinaryExpression(ExpressionType nodeType, Expression left, Expression right)
	{
	}
}
