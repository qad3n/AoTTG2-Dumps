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

[Token(Token = "0x20001BA")]
public static class PhraseRecognitionSystem
{
	[Token(Token = "0x20001BB")]
	public delegate void ErrorDelegate(SpeechError errorCode);

	[Token(Token = "0x20001BC")]
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

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4E0F230", Offset = "0x4E0F230", VA = "0x4E0F230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeErrorEvent(SpeechError errorCode)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4E0F280", Offset = "0x4E0F280", VA = "0x4E0F280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PhraseRecognitionSystem_InvokeStatusChangedEvent(SpeechSystemStatus status)
	{
	}
}
