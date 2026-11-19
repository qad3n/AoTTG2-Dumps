// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000645")]
internal struct ExpressionMultiplier
{
	[Token(Token = "0x4001809")]
	public const int Infinity = 100;

	[Token(Token = "0x400180A")]
	[FieldOffset(Offset = "0x0")]
	private ExpressionMultiplierType m_Type;

	[Token(Token = "0x400180B")]
	[FieldOffset(Offset = "0x4")]
	public int min;

	[Token(Token = "0x400180C")]
	[FieldOffset(Offset = "0x8")]
	public int max;

	[Token(Token = "0x17000B79")]
	public ExpressionMultiplierType type
	{
		[Token(Token = "0x6002DDB")]
		[Address(RVA = "0x6BF8350", Offset = "0x6BF7350", VA = "0x6BF8350")]
		get
		{
			return default(ExpressionMultiplierType);
		}
		[Token(Token = "0x6002DDC")]
		[Address(RVA = "0x6BFA410", Offset = "0x6BF9410", VA = "0x6BFA410")]
		set
		{
		}
	}

	[Token(Token = "0x6002DDD")]
	[Address(RVA = "0x6BFA3B0", Offset = "0x6BF93B0", VA = "0x6BFA3B0")]
	public ExpressionMultiplier(ExpressionMultiplierType type = ExpressionMultiplierType.None)
	{
	}

	[Token(Token = "0x6002DDE")]
	[Address(RVA = "0x6BFA470", Offset = "0x6BF9470", VA = "0x6BFA470")]
	private void SetType(ExpressionMultiplierType value)
	{
	}
}
