// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001C9")]
public struct PhraseRecognizedEventArgs
{
	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x0")]
	public readonly ConfidenceLevel confidence;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x8")]
	public readonly SemanticMeaning[] semanticMeanings;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x10")]
	public readonly string text;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x18")]
	public readonly DateTime phraseStartTime;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x20")]
	public readonly TimeSpan phraseDuration;

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4E0F5B0", Offset = "0x4E0F5B0", VA = "0x4E0F5B0")]
	internal PhraseRecognizedEventArgs(string text, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, DateTime phraseStartTime, TimeSpan phraseDuration)
	{
	}
}
