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

[Token(Token = "0x20000B6")]
internal sealed class NewArrayInitExpression : NewArrayExpression
{
	[Token(Token = "0x170000DF")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x5DD5560", Offset = "0x5DD4560", VA = "0x5DD5560", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x5DD5410", Offset = "0x5DD4410", VA = "0x5DD5410")]
	internal NewArrayInitExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
