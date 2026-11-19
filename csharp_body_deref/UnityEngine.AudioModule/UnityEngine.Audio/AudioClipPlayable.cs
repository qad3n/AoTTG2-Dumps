// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.AudioClipPlayable
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

[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/Director/AudioClipPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AudioClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.h")]
public struct AudioClipPlayable : IEquatable<AudioClipPlayable>
{
	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x68B19B0", Offset = "0x68B09B0", VA = "0x68B19B0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x68B19C0", Offset = "0x68B09C0", VA = "0x68B19C0", Slot = "4")]
	public bool Equals(AudioClipPlayable other)
	{
		return default(bool);
	}
}
