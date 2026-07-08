using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000027")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationRemoveScalePlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationRemoveScalePlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationRemoveScalePlayable.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct AnimationRemoveScalePlayable : IEquatable<AnimationRemoveScalePlayable>
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationRemoveScalePlayable m_NullPlayable;

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4A7F580", Offset = "0x4A7F580", VA = "0x4A7F580")]
	internal AnimationRemoveScalePlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4A7F670", Offset = "0x4A7F670", VA = "0x4A7F670", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4A7F680", Offset = "0x4A7F680", VA = "0x4A7F680", Slot = "4")]
	public bool Equals(AnimationRemoveScalePlayable other)
	{
		return default(bool);
	}
}
