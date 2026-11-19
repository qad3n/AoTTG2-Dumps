// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableGraph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000308")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/PlayableGraph.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
public struct PlayableGraph
{
	[Token(Token = "0x40007AC")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Handle;

	[Token(Token = "0x40007AD")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Version;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600124E")]
	[Address(RVA = "0x693B080", Offset = "0x693A080", VA = "0x693B080")]
	[UnityEngine.Bindings.FreeFunction("PlayableGraphBindings::SetTimeUpdateMode", HasExplicitThis = true, ThrowsException = true)]
	public extern void SetTimeUpdateMode(DirectorUpdateMode value);
}
