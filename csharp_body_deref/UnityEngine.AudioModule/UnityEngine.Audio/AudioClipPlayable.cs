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
	[Address(RVA = "0x4A83AC0", Offset = "0x4A83AC0", VA = "0x4A83AC0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4A83AD0", Offset = "0x4A83AD0", VA = "0x4A83AD0", Slot = "4")]
	public bool Equals(AudioClipPlayable other)
	{
		return default(bool);
	}
}
