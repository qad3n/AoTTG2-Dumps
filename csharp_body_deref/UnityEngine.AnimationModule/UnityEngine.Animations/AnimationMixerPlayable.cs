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

[Token(Token = "0x2000023")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationMixerPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationMixerPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AnimationMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct AnimationMixerPlayable : IEquatable<AnimationMixerPlayable>
{
	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationMixerPlayable m_NullPlayable;

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2EAB940", Offset = "0x2EA9F40", VA = "0x182EAB940")]
	internal AnimationMixerPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2EAB760", Offset = "0x2EA9D60", VA = "0x182EAB760", Slot = "4")]
	public bool Equals(AnimationMixerPlayable other)
	{
		return default(bool);
	}
}
