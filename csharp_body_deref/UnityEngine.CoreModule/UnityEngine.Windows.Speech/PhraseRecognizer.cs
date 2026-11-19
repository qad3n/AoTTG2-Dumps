// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.PhraseRecognizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001FD")]
public abstract class PhraseRecognizer
{
	[Token(Token = "0x20001FE")]
	public delegate void PhraseRecognizedDelegate(PhraseRecognizedEventArgs args);

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x10")]
	protected IntPtr m_Recognizer;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PhraseRecognizedDelegate OnPhraseRecognized;

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x6931150", Offset = "0x6930150", VA = "0x6931150")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePhraseRecognizedEvent(IntPtr rawText, int rawTextLength, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, long phraseStartFileTime, long phraseDurationTicks)
	{
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x69312F0", Offset = "0x69302F0", VA = "0x69312F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static SemanticMeaning[] MarshalSemanticMeaning(IntPtr keys, IntPtr values, IntPtr valueSizes, int valueCount)
	{
		return null;
	}
}
