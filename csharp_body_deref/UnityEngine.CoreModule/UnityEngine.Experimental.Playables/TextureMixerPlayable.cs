using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Playables;

[Token(Token = "0x2000347")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Director/TextureMixerPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/TextureMixerPlayable.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("TextureMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct TextureMixerPlayable : IEquatable<TextureMixerPlayable>
{
	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x4B13090", Offset = "0x4B13090", VA = "0x4B13090", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x4B130A0", Offset = "0x4B130A0", VA = "0x4B130A0", Slot = "4")]
	public bool Equals(TextureMixerPlayable other)
	{
		return default(bool);
	}
}
