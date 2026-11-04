// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.NewArrayBoundsExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B6")]
internal sealed class NewArrayBoundsExpression : NewArrayExpression
{
	[Token(Token = "0x170000DE")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x243D900", Offset = "0x243BF00", VA = "0x18243D900", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x243D8F0", Offset = "0x243BEF0", VA = "0x18243D8F0")]
	internal NewArrayBoundsExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
