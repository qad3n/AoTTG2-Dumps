using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000016")]
internal interface ITweenValue
{
	[Token(Token = "0x1700000B")]
	bool ignoreTimeScale
	{
		[Token(Token = "0x6000058")]
		get;
	}

	[Token(Token = "0x1700000C")]
	float duration
	{
		[Token(Token = "0x6000059")]
		get;
	}

	[Token(Token = "0x6000057")]
	void TweenValue(float floatPercentage);

	[Token(Token = "0x600005A")]
	bool ValidTarget();
}
