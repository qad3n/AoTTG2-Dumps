using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000546")]
internal struct MatchResult
{
	[Token(Token = "0x400122E")]
	[FieldOffset(Offset = "0x0")]
	public MatchResultErrorCode errorCode;

	[Token(Token = "0x400122F")]
	[FieldOffset(Offset = "0x8")]
	public string errorValue;

	[Token(Token = "0x17000851")]
	public bool success
	{
		[Token(Token = "0x6002036")]
		[Address(RVA = "0x4CA6E70", Offset = "0x4CA6E70", VA = "0x4CA6E70")]
		get
		{
			return default(bool);
		}
	}
}
