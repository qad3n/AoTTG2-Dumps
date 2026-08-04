// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.DictationRecognizer
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

[Token(Token = "0x20001BF")]
public sealed class DictationRecognizer
{
	[Token(Token = "0x20001C0")]
	public delegate void DictationHypothesisDelegate(string text);

	[Token(Token = "0x20001C1")]
	public delegate void DictationResultDelegate(string text, ConfidenceLevel confidence);

	[Token(Token = "0x20001C2")]
	public delegate void DictationCompletedDelegate(DictationCompletionCause cause);

	[Token(Token = "0x20001C3")]
	public delegate void DictationErrorHandler(string error, int hresult);

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Recognizer;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private DictationHypothesisDelegate DictationHypothesis;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private DictationResultDelegate DictationResult;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private DictationCompletedDelegate DictationComplete;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private DictationErrorHandler DictationError;

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4E0F8B0", Offset = "0x4E0F8B0", VA = "0x4E0F8B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeHypothesisGeneratedEvent(string keyword)
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4E0F8D0", Offset = "0x4E0F8D0", VA = "0x4E0F8D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeResultGeneratedEvent(string keyword, ConfidenceLevel minimumConfidence)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x4E0F8F0", Offset = "0x4E0F8F0", VA = "0x4E0F8F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeCompletedEvent(DictationCompletionCause cause)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4E0F910", Offset = "0x4E0F910", VA = "0x4E0F910")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeErrorEvent(string error, int hresult)
	{
	}
}
