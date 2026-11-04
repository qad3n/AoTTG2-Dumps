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

[Token(Token = "0x2000208")]
public struct PhraseRecognizedEventArgs
{
	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x0")]
	public readonly ConfidenceLevel confidence;

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x8")]
	public readonly SemanticMeaning[] semanticMeanings;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x10")]
	public readonly string text;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x18")]
	public readonly DateTime phraseStartTime;

	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x20")]
	public readonly TimeSpan phraseDuration;

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x2F4D2D0", Offset = "0x2F4B8D0", VA = "0x182F4D2D0")]
	internal PhraseRecognizedEventArgs(string text, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, DateTime phraseStartTime, TimeSpan phraseDuration)
	{
	}
}
