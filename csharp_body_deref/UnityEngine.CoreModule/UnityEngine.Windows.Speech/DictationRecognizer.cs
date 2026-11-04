// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.DictationRecognizer
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

[Token(Token = "0x20001FE")]
public sealed class DictationRecognizer
{
	[Token(Token = "0x20001FF")]
	public delegate void DictationHypothesisDelegate(string text);

	[Token(Token = "0x2000200")]
	public delegate void DictationResultDelegate(string text, ConfidenceLevel confidence);

	[Token(Token = "0x2000201")]
	public delegate void DictationCompletedDelegate(DictationCompletionCause cause);

	[Token(Token = "0x2000202")]
	public delegate void DictationErrorHandler(string error, int hresult);

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Recognizer;

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private DictationHypothesisDelegate DictationHypothesis;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private DictationResultDelegate DictationResult;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private DictationCompletedDelegate DictationComplete;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private DictationErrorHandler DictationError;

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x2F48F20", Offset = "0x2F47520", VA = "0x182F48F20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeHypothesisGeneratedEvent(IntPtr keyword, int keywordLength)
	{
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x2F48F80", Offset = "0x2F47580", VA = "0x182F48F80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeResultGeneratedEvent(IntPtr keyword, int keywordLength, ConfidenceLevel minimumConfidence)
	{
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x2F48EE0", Offset = "0x2F474E0", VA = "0x182F48EE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeCompletedEvent(DictationCompletionCause cause)
	{
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x2F48F00", Offset = "0x2F47500", VA = "0x182F48F00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DictationRecognizer_InvokeErrorEvent(string error, int hresult)
	{
	}
}
