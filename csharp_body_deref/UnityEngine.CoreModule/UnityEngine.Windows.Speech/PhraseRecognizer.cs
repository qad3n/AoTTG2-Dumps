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

[Token(Token = "0x20001BD")]
public abstract class PhraseRecognizer
{
	[Token(Token = "0x20001BE")]
	public delegate void PhraseRecognizedDelegate(PhraseRecognizedEventArgs args);

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x10")]
	protected IntPtr m_Recognizer;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PhraseRecognizedDelegate OnPhraseRecognized;

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x4E0F450", Offset = "0x4E0F450", VA = "0x4E0F450")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePhraseRecognizedEvent(string text, ConfidenceLevel confidence, SemanticMeaning[] semanticMeanings, long phraseStartFileTime, long phraseDurationTicks)
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x4E0F600", Offset = "0x4E0F600", VA = "0x4E0F600")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static SemanticMeaning[] MarshalSemanticMeaning(IntPtr keys, IntPtr values, IntPtr valueSizes, int valueCount)
	{
		return null;
	}
}
