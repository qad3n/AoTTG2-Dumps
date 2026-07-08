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
		[Address(RVA = "0x4CA70D0", Offset = "0x4CA70D0", VA = "0x4CA70D0")]
		get
		{
			return default(ExpressionMultiplierType);
		}
		[Token(Token = "0x6002070")]
		[Address(RVA = "0x4CA8F00", Offset = "0x4CA8F00", VA = "0x4CA8F00")]
		set
		{
		}
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x4CA8EA0", Offset = "0x4CA8EA0", VA = "0x4CA8EA0")]
	public ExpressionMultiplier(ExpressionMultiplierType type = ExpressionMultiplierType.None)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x4CA8F60", Offset = "0x4CA8F60", VA = "0x4CA8F60")]
	private void SetType(ExpressionMultiplierType value)
	{
	}
}
