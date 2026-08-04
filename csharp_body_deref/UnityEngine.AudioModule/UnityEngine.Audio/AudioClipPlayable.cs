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

[Token(Token = "0x2000013")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/Director/AudioClipPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AudioClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AudioClipPlayable : IEquatable<AudioClipPlayable>
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4DAB2E0", Offset = "0x4DAB2E0", VA = "0x4DAB2E0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4DAB2F0", Offset = "0x4DAB2F0", VA = "0x4DAB2F0", Slot = "4")]
	public bool Equals(AudioClipPlayable other)
	{
		return default(bool);
	}
}
