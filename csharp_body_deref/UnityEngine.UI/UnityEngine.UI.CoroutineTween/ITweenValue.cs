// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.CoroutineTween.ITweenValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI.CoroutineTween;

[Token(Token = "0x2000088")]
internal interface ITweenValue
{
	[Token(Token = "0x1700015D")]
	bool ignoreTimeScale
	{
		[Token(Token = "0x6000567")]
		get;
	}

	[Token(Token = "0x1700015E")]
	float duration
	{
		[Token(Token = "0x6000568")]
		get;
	}

	[Token(Token = "0x6000566")]
	void TweenValue(float floatPercentage);

	[Token(Token = "0x6000569")]
	bool ValidTarget();
}
