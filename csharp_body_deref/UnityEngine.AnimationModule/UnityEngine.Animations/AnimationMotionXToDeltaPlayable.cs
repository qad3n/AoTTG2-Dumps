using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000023")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationMotionXToDeltaPlayable.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationMotionXToDeltaPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct AnimationMotionXToDeltaPlayable : IEquatable<AnimationMotionXToDeltaPlayable>
{
	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationMotionXToDeltaPlayable m_NullPlayable;

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4A7EF10", Offset = "0x4A7EF10", VA = "0x4A7EF10")]
	private AnimationMotionXToDeltaPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4A7F000", Offset = "0x4A7F000", VA = "0x4A7F000", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4A7F010", Offset = "0x4A7F010", VA = "0x4A7F010", Slot = "4")]
	public bool Equals(AnimationMotionXToDeltaPlayable other)
	{
		return default(bool);
	}
}
