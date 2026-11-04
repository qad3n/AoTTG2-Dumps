// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationPosePlayable
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
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AnimationPosePlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationPosePlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationPosePlayable.bindings.h")]
internal struct AnimationPosePlayable : IEquatable<AnimationPosePlayable>
{
	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationPosePlayable m_NullPlayable;

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2EAC180", Offset = "0x2EAA780", VA = "0x182EAC180")]
	internal AnimationPosePlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2EABFA0", Offset = "0x2EAA5A0", VA = "0x182EABFA0", Slot = "4")]
	public bool Equals(AnimationPosePlayable other)
	{
		return default(bool);
	}
}
