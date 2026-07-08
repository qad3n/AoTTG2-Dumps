using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001BC")]
public sealed class DictationRecognizer
{
	[Token(Token = "0x20001BD")]
	public delegate void DictationHypothesisDelegate(string text);

	[Token(Token = "0x20001BE")]
	public delegate void DictationResultDelegate(string text, ConfidenceLevel confidence);

	[Token(Token = "0x20001BF")]
	public delegate void DictationCompletedDelegate(DictationCompletionCause cause);

	[Token(Token = "0x20001C0")]
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

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x4AE7F80", Offset = "0x4AE7F80", VA = "0x4AE7F80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeHypothesisGeneratedEvent(string keyword)
	{
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x4AE7FA0", Offset = "0x4AE7FA0", VA = "0x4AE7FA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeResultGeneratedEvent(string keyword, ConfidenceLevel minimumConfidence)
	{
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4AE7FC0", Offset = "0x4AE7FC0", VA = "0x4AE7FC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeCompletedEvent(DictationCompletionCause cause)
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4AE7FE0", Offset = "0x4AE7FE0", VA = "0x4AE7FE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeErrorEvent(string error, int hresult)
	{
	}
}
