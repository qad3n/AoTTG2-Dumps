// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationLayerMixerPlayable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000022")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationLayerMixerPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationLayerMixerPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationLayerMixerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
public struct AnimationLayerMixerPlayable : IEquatable<AnimationLayerMixerPlayable>
{
	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationLayerMixerPlayable m_NullPlayable;

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2EAB620", Offset = "0x2EA9C20", VA = "0x182EAB620")]
	internal AnimationLayerMixerPlayable(PlayableHandle handle, bool singleLayerOptimization = true)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2EAB4A0", Offset = "0x2EA9AA0", VA = "0x182EAB4A0", Slot = "4")]
	public bool Equals(AnimationLayerMixerPlayable other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2EAB540", Offset = "0x2EA9B40", VA = "0x182EAB540")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern void SetSingleLayerOptimizationInternal(ref PlayableHandle handle, bool value);
}
