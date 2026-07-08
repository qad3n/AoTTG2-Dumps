using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001B7")]
public static class PhraseRecognitionSystem
{
	[Token(Token = "0x20001B8")]
	public delegate void ErrorDelegate(SpeechError errorCode);

	[Token(Token = "0x20001B9")]
	public delegate void StatusDelegate(SpeechSystemStatus status);

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static ErrorDelegate OnError;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static StatusDelegate OnStatusChanged;

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4AE7900", Offset = "0x4AE7900", VA = "0x4AE7900")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeErrorEvent(SpeechError errorCode)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4AE7950", Offset = "0x4AE7950", VA = "0x4AE7950")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeStatusChangedEvent(SpeechSystemStatus status)
	{
	}
}
