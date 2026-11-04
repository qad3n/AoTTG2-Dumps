// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableDirector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000004")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Director/PlayableDirector.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
public class PlayableDirector : Behaviour
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<PlayableDirector> played;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<PlayableDirector> paused;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<PlayableDirector> stopped;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2F7AE40", Offset = "0x2F79440", VA = "0x182F7AE40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorPlay()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2F7AE20", Offset = "0x2F79420", VA = "0x182F7AE20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorPause()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2F7AE60", Offset = "0x2F79460", VA = "0x182F7AE60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorStop()
	{
	}
}
