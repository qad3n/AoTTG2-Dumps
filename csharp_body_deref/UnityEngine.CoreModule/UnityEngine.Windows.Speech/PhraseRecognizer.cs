using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001BA")]
public abstract class PhraseRecognizer
{
	[Token(Token = "0x20001BB")]
	public delegate void PhraseRecognizedDelegate(PhraseRecognizedEventArgs args);

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x10")]
	protected IntPtr m_Recognizer;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PhraseRecognizedDelegate OnPhraseRecognized;

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4AE7B20", Offset = "0x4AE7B20", VA = "0x4AE7B20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePhraseRecognizedEvent(string text, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, long phraseStartFileTime, long phraseDurationTicks)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x4AE7CD0", Offset = "0x4AE7CD0", VA = "0x4AE7CD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static SemanticMeaning[] MarshalSemanticMeaning(IntPtr keys, IntPtr values, IntPtr valueSizes, int valueCount)
	{
		return null;
	}
}
