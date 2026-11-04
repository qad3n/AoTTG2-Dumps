// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.Speech.PhraseRecognitionSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Windows.Speech;

[Token(Token = "0x20001F9")]
public static class PhraseRecognitionSystem
{
	[Token(Token = "0x20001FA")]
	public delegate void ErrorDelegate(SpeechError errorCode);

	[Token(Token = "0x20001FB")]
	public delegate void StatusDelegate(SpeechSystemStatus status);

	[Token(Token = "0x40006C8")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static ErrorDelegate OnError;

	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static StatusDelegate OnStatusChanged;

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x2F4D210", Offset = "0x2F4B810", VA = "0x182F4D210")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeErrorEvent(SpeechError errorCode)
	{
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x2F4D270", Offset = "0x2F4B870", VA = "0x182F4D270")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeStatusChangedEvent(SpeechSystemStatus status)
	{
	}
}
