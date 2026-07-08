using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000026")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationPosePlayable.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationPosePlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationPosePlayable.h")]
internal struct AnimationPosePlayable : IEquatable<AnimationPosePlayable>
{
	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationPosePlayable m_NullPlayable;

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4A7F350", Offset = "0x4A7F350", VA = "0x4A7F350")]
	internal AnimationPosePlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4A7F440", Offset = "0x4A7F440", VA = "0x4A7F440", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4A7F450", Offset = "0x4A7F450", VA = "0x4A7F450", Slot = "4")]
	public bool Equals(AnimationPosePlayable other)
	{
		return default(bool);
	}
}
