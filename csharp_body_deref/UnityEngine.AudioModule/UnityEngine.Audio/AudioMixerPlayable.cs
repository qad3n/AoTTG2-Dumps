// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.AudioMixerPlayable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x200001A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AudioMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/Director/AudioMixerPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/AudioMixerPlayable.bindings.h")]
public struct AudioMixerPlayable : IEquatable<AudioMixerPlayable>
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x68B1A30", Offset = "0x68B0A30", VA = "0x68B1A30", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x68B1A40", Offset = "0x68B0A40", VA = "0x68B1A40", Slot = "4")]
	public bool Equals(AudioMixerPlayable other)
	{
		return default(bool);
	}
}
