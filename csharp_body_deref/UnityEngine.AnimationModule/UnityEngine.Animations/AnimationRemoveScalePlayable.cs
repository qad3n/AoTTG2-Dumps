// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationRemoveScalePlayable
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
	[Address(RVA = "0x4DA6DA0", Offset = "0x4DA6DA0", VA = "0x4DA6DA0")]
	internal AnimationRemoveScalePlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4DA6E90", Offset = "0x4DA6E90", VA = "0x4DA6E90", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4DA6EA0", Offset = "0x4DA6EA0", VA = "0x4DA6EA0", Slot = "4")]
	public bool Equals(AnimationRemoveScalePlayable other)
	{
		return default(bool);
	}
}
