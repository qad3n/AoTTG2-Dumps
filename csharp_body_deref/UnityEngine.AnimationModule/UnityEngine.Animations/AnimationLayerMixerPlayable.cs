using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000021")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationLayerMixerPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationLayerMixerPlayable.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationLayerMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct AnimationLayerMixerPlayable : IEquatable<AnimationLayerMixerPlayable>
{
	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationLayerMixerPlayable m_NullPlayable;

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4A7EA60", Offset = "0x4A7EA60", VA = "0x4A7EA60")]
	internal AnimationLayerMixerPlayable(PlayableHandle handle, bool singleLayerOptimization = true)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4A7EBE0", Offset = "0x4A7EBE0", VA = "0x4A7EBE0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4A7EBF0", Offset = "0x4A7EBF0", VA = "0x4A7EBF0", Slot = "4")]
	public bool Equals(AnimationLayerMixerPlayable other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4A7EBA0", Offset = "0x4A7EBA0", VA = "0x4A7EBA0")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern void SetSingleLayerOptimizationInternal(ref PlayableHandle handle, bool value);
}
