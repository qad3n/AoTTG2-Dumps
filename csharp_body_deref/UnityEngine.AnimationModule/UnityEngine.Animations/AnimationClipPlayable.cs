// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationClipPlayable
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

[Token(Token = "0x200001F")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationClipPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationClipPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimationClipPlayable : IEquatable<AnimationClipPlayable>
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4DA6200", Offset = "0x4DA6200", VA = "0x4DA6200", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4DA6210", Offset = "0x4DA6210", VA = "0x4DA6210", Slot = "4")]
	public bool Equals(AnimationClipPlayable other)
	{
		return default(bool);
	}
}
