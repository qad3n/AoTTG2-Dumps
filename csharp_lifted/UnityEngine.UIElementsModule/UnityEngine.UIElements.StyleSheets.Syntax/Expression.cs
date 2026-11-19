// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.Expression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000640")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class Expression
{
	[Token(Token = "0x40017DE")]
	[FieldOffset(Offset = "0x10")]
	public ExpressionType type;

	[Token(Token = "0x40017DF")]
	[FieldOffset(Offset = "0x14")]
	public ExpressionMultiplier multiplier;

	[Token(Token = "0x40017E0")]
	[FieldOffset(Offset = "0x20")]
	public DataType dataType;

	[Token(Token = "0x40017E1")]
	[FieldOffset(Offset = "0x24")]
	public ExpressionCombinator combinator;

	[Token(Token = "0x40017E2")]
	[FieldOffset(Offset = "0x28")]
	public Expression[] subExpressions;

	[Token(Token = "0x40017E3")]
	[FieldOffset(Offset = "0x30")]
	public float min;

	[Token(Token = "0x40017E4")]
	[FieldOffset(Offset = "0x34")]
	public float max;

	[Token(Token = "0x40017E5")]
	[FieldOffset(Offset = "0x38")]
	public string keyword;

	[Token(Token = "0x6002DDA")]
	[Address(RVA = "0x6BFA350", Offset = "0x6BF9350", VA = "0x6BFA350")]
	public Expression(ExpressionType type)
	{
	}
}
