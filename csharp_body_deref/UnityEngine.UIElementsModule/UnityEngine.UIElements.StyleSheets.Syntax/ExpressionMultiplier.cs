// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x200054F")]
internal struct ExpressionMultiplier
{
	[Token(Token = "0x400125C")]
	public const int Infinity = 100;

	[Token(Token = "0x400125D")]
	[FieldOffset(Offset = "0x0")]
	private ExpressionMultiplierType m_Type;

	[Token(Token = "0x400125E")]
	[FieldOffset(Offset = "0x4")]
	public int min;

	[Token(Token = "0x400125F")]
	[FieldOffset(Offset = "0x8")]
	public int max;

	[Token(Token = "0x1700085C")]
	public ExpressionMultiplierType type
	{
		[Token(Token = "0x600206F")]
		[Address(RVA = "0x4FCEA00", Offset = "0x4FCEA00", VA = "0x4FCEA00")]
		get
		{
			return default(ExpressionMultiplierType);
		}
		[Token(Token = "0x6002070")]
		[Address(RVA = "0x4FD0830", Offset = "0x4FD0830", VA = "0x4FD0830")]
		set
		{
		}
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x4FD07D0", Offset = "0x4FD07D0", VA = "0x4FD07D0")]
	public ExpressionMultiplier(ExpressionMultiplierType type = ExpressionMultiplierType.None)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x4FD0890", Offset = "0x4FD0890", VA = "0x4FD0890")]
	private void SetType(ExpressionMultiplierType value)
	{
	}
}
