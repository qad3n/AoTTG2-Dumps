using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Playables;

[Token(Token = "0x2000346")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Director/MaterialEffectPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/MaterialEffectPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("MaterialEffectPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct MaterialEffectPlayable : IEquatable<MaterialEffectPlayable>
{
	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x4B12FD0", Offset = "0x4B12FD0", VA = "0x4B12FD0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x4B12FE0", Offset = "0x4B12FE0", VA = "0x4B12FE0", Slot = "4")]
	public bool Equals(MaterialEffectPlayable other)
	{
		return default(bool);
	}
}
