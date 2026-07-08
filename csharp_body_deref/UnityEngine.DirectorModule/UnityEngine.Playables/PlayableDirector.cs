using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/Director/PlayableDirector.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<PlayableDirector> paused;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<PlayableDirector> stopped;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4B15090", Offset = "0x4B15090", VA = "0x4B15090")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorPlay()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4B150B0", Offset = "0x4B150B0", VA = "0x4B150B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorPause()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B150D0", Offset = "0x4B150D0", VA = "0x4B150D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void SendOnPlayableDirectorStop()
	{
	}
}
