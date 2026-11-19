// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.NoThrowExpressionVisitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Linq.Expressions;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000C0")]
internal class NoThrowExpressionVisitor : ExpressionVisitor
{
	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object ErrorResult;

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x55B0B10", Offset = "0x55AFB10", VA = "0x55B0B10", Slot = "7")]
	protected override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x55B0960", Offset = "0x55AF960", VA = "0x55B0960")]
	public NoThrowExpressionVisitor()
	{
	}
}
