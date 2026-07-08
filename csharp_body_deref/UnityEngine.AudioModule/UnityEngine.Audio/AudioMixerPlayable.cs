using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x2000014")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/AudioMixerPlayable.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AudioMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/Director/AudioMixerPlayable.h")]
public struct AudioMixerPlayable : IEquatable<AudioMixerPlayable>
{
	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4A83B40", Offset = "0x4A83B40", VA = "0x4A83B40", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4A83B50", Offset = "0x4A83B50", VA = "0x4A83B50", Slot = "4")]
	public bool Equals(AudioMixerPlayable other)
	{
		return default(bool);
	}
}
