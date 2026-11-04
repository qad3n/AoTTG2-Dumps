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

[Token(Token = "0x200002B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/Director/AudioClipPlayable.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AudioClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct AudioClipPlayable : IEquatable<AudioClipPlayable>
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6000097")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2EB1F80", Offset = "0x2EB0580", VA = "0x182EB1F80", Slot = "4")]
	public bool Equals(AudioClipPlayable other)
	{
		return default(bool);
	}
}
