// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.AudioPlayableOutput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x2000015")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/AudioPlayableOutput.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/Director/AudioPlayableOutput.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/AudioSource.h")]
[UnityEngine.Bindings.StaticAccessor("AudioPlayableOutputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct AudioPlayableOutput
{
	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;
}
