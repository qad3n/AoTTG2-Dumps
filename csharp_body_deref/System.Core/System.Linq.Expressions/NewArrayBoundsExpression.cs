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
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x44BF750", Offset = "0x44BF750", VA = "0x44BF750", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x44BF670", Offset = "0x44BF670", VA = "0x44BF670")]
	internal NewArrayBoundsExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
