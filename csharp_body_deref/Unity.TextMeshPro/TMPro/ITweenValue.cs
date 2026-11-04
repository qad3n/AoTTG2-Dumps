// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.ITweenValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200001D")]
internal interface ITweenValue
{
	[Token(Token = "0x17000020")]
	bool ignoreTimeScale
	{
		[Token(Token = "0x6000083")]
		get;
	}

	[Token(Token = "0x17000021")]
	float duration
	{
		[Token(Token = "0x6000084")]
		get;
	}

	[Token(Token = "0x6000082")]
	void TweenValue(float floatPercentage);

	[Token(Token = "0x6000085")]
	bool ValidTarget();
}
