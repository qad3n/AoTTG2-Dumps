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
	[Address(RVA = "0x3DB73A0", Offset = "0x3DB73A0", VA = "0x3DB73A0", Slot = "7")]
	protected override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x3DB71F0", Offset = "0x3DB71F0", VA = "0x3DB71F0")]
	public NoThrowExpressionVisitor()
	{
	}
}
