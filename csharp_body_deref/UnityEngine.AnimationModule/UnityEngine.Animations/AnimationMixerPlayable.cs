// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationMixerPlayable
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

[Token(Token = "0x2000022")]
[UnityEngine.Bindings.StaticAccessor("AnimationMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationMixerPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationMixerPlayable.h")]
public struct AnimationMixerPlayable : IEquatable<AnimationMixerPlayable>
{
	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationMixerPlayable m_NullPlayable;

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4DA6520", Offset = "0x4DA6520", VA = "0x4DA6520")]
	internal AnimationMixerPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4DA6610", Offset = "0x4DA6610", VA = "0x4DA6610", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4DA6620", Offset = "0x4DA6620", VA = "0x4DA6620", Slot = "4")]
	public bool Equals(AnimationMixerPlayable other)
	{
		return default(bool);
	}
}
