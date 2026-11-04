// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationOffsetPlayable
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

[Token(Token = "0x2000025")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AnimationOffsetPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationOffsetPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationOffsetPlayable.bindings.h")]
internal struct AnimationOffsetPlayable : IEquatable<AnimationOffsetPlayable>
{
	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationOffsetPlayable m_NullPlayable;

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2EABEC0", Offset = "0x2EAA4C0", VA = "0x182EABEC0")]
	internal AnimationOffsetPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2EABCE0", Offset = "0x2EAA2E0", VA = "0x182EABCE0", Slot = "4")]
	public bool Equals(AnimationOffsetPlayable other)
	{
		return default(bool);
	}
}
