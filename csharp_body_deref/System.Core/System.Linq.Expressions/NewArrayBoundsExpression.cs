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

[Token(Token = "0x20000B7")]
internal sealed class NewArrayBoundsExpression : NewArrayExpression
{
	[Token(Token = "0x170000E0")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x5DD5570", Offset = "0x5DD4570", VA = "0x5DD5570", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x5DD5490", Offset = "0x5DD4490", VA = "0x5DD5490")]
	internal NewArrayBoundsExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
