using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x200001F")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationClipPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationClipPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimationClipPlayable : IEquatable<AnimationClipPlayable>
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4A7E9E0", Offset = "0x4A7E9E0", VA = "0x4A7E9E0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4A7E9F0", Offset = "0x4A7E9F0", VA = "0x4A7E9F0", Slot = "4")]
	public bool Equals(AnimationClipPlayable other)
	{
		return default(bool);
	}
}
