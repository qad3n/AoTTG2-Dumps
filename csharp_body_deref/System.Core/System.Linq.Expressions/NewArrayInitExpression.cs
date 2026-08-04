// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.NewArrayInitExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B5")]
internal sealed class NewArrayInitExpression : NewArrayExpression
{
	[Token(Token = "0x170000DD")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x44BF740", Offset = "0x44BF740", VA = "0x44BF740", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x44BF5F0", Offset = "0x44BF5F0", VA = "0x44BF5F0")]
	internal NewArrayInitExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
