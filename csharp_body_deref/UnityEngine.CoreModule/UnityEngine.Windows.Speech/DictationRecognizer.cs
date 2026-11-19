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

[Token(Token = "0x20001FF")]
public sealed class DictationRecognizer
{
	[Token(Token = "0x2000200")]
	public delegate void DictationHypothesisDelegate(string text);

	[Token(Token = "0x2000201")]
	public delegate void DictationResultDelegate(string text, ConfidenceLevel confidence);

	[Token(Token = "0x2000202")]
	public delegate void DictationCompletedDelegate(DictationCompletionCause cause);

	[Token(Token = "0x2000203")]
	public delegate void DictationErrorHandler(string error, int hresult);

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Recognizer;

	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private DictationHypothesisDelegate DictationHypothesis;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private DictationResultDelegate DictationResult;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private DictationCompletedDelegate DictationComplete;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private DictationErrorHandler DictationError;

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x69315A0", Offset = "0x69305A0", VA = "0x69315A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeHypothesisGeneratedEvent(IntPtr keyword, int keywordLength)
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x69315F0", Offset = "0x69305F0", VA = "0x69315F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeResultGeneratedEvent(IntPtr keyword, int keywordLength, ConfidenceLevel minimumConfidence)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x6931640", Offset = "0x6930640", VA = "0x6931640")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeCompletedEvent(DictationCompletionCause cause)
	{
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x6931660", Offset = "0x6930660", VA = "0x6931660")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeErrorEvent(string error, int hresult)
	{
	}
}
