using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000024")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationOffsetPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationOffsetPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationOffsetPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct AnimationOffsetPlayable : IEquatable<AnimationOffsetPlayable>
{
	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationOffsetPlayable m_NullPlayable;

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4A7F120", Offset = "0x4A7F120", VA = "0x4A7F120")]
	internal AnimationOffsetPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4A7F210", Offset = "0x4A7F210", VA = "0x4A7F210", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4A7F220", Offset = "0x4A7F220", VA = "0x4A7F220", Slot = "4")]
	public bool Equals(AnimationOffsetPlayable other)
	{
		return default(bool);
	}
}
