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

[Token(Token = "0x20001FA")]
public static class PhraseRecognitionSystem
{
	[Token(Token = "0x20001FB")]
	public delegate void ErrorDelegate(SpeechError errorCode);

	[Token(Token = "0x20001FC")]
	public delegate void StatusDelegate(SpeechSystemStatus status);

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static ErrorDelegate OnError;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static StatusDelegate OnStatusChanged;

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x6930F30", Offset = "0x692FF30", VA = "0x6930F30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeErrorEvent(SpeechError errorCode)
	{
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x6930F80", Offset = "0x692FF80", VA = "0x6930F80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeStatusChangedEvent(SpeechSystemStatus status)
	{
	}
}
