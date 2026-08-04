// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
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
	[Address(RVA = "0x4DA6730", Offset = "0x4DA6730", VA = "0x4DA6730")]
	private AnimationMotionXToDeltaPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4DA6820", Offset = "0x4DA6820", VA = "0x4DA6820", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4DA6830", Offset = "0x4DA6830", VA = "0x4DA6830", Slot = "4")]
	public bool Equals(AnimationMotionXToDeltaPlayable other)
	{
		return default(bool);
	}
}
