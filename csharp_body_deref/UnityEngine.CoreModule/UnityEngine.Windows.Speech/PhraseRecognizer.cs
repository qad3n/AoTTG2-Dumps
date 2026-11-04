// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.PhraseRecognizer
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001FC")]
public abstract class PhraseRecognizer
{
	[Token(Token = "0x20001FD")]
	public delegate void PhraseRecognizedDelegate(PhraseRecognizedEventArgs args);

	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x10")]
	protected IntPtr m_Recognizer;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PhraseRecognizedDelegate OnPhraseRecognized;

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x2F4D330", Offset = "0x2F4B930", VA = "0x182F4D330")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePhraseRecognizedEvent(IntPtr rawText, int rawTextLength, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, long phraseStartFileTime, long phraseDurationTicks)
	{
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x2F4D4B0", Offset = "0x2F4BAB0", VA = "0x182F4D4B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static SemanticMeaning[] MarshalSemanticMeaning(IntPtr keys, IntPtr values, IntPtr valueSizes, int valueCount)
	{
		return null;
	}
}
