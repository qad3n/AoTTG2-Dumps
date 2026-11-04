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

[Token(Token = "0x2000028")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationRemoveScalePlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationRemoveScalePlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationRemoveScalePlayable.bindings.h")]
internal struct AnimationRemoveScalePlayable : IEquatable<AnimationRemoveScalePlayable>
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationRemoveScalePlayable m_NullPlayable;

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2EAC440", Offset = "0x2EAAA40", VA = "0x182EAC440")]
	internal AnimationRemoveScalePlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2EAC260", Offset = "0x2EAA860", VA = "0x182EAC260", Slot = "4")]
	public bool Equals(AnimationRemoveScalePlayable other)
	{
		return default(bool);
	}
}
