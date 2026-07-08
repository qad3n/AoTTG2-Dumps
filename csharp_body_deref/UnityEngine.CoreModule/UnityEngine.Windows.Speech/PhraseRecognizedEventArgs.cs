using System;
using Il2CppDummyDll;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001C6")]
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

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x4AE7C80", Offset = "0x4AE7C80", VA = "0x4AE7C80")]
	internal PhraseRecognizedEventArgs(string text, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, DateTime phraseStartTime, TimeSpan phraseDuration)
	{
	}
}
