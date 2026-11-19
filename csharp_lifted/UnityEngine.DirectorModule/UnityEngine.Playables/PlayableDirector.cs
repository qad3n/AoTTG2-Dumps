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
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Director/PlayableDirector.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
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
	[Address(RVA = "0x696ED80", Offset = "0x696DD80", VA = "0x696ED80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorPlay()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x696EDA0", Offset = "0x696DDA0", VA = "0x696EDA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorPause()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x696EDC0", Offset = "0x696DDC0", VA = "0x696EDC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorStop()
	{
	}
}
