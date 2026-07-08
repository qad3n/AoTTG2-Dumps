using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x200032E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableGraph.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct PlayableGraph
{
	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001159")]
	[Address(RVA = "0x4B10680", Offset = "0x4B10680", VA = "0x4B10680")]
	[UnityEngine.Bindings.FreeFunction("PlayableGraphBindings::SetTimeUpdateMode", HasExplicitThis = true, ThrowsException = true)]
	public extern void SetTimeUpdateMode(DirectorUpdateMode value);
}
