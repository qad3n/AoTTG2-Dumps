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

[Token(Token = "0x2000024")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AnimationMotionXToDeltaPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationMotionXToDeltaPlayable.bindings.h")]
internal struct AnimationMotionXToDeltaPlayable : IEquatable<AnimationMotionXToDeltaPlayable>
{
	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationMotionXToDeltaPlayable m_NullPlayable;

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2EABC00", Offset = "0x2EAA200", VA = "0x182EABC00")]
	private AnimationMotionXToDeltaPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2EABA20", Offset = "0x2EAA020", VA = "0x182EABA20", Slot = "4")]
	public bool Equals(AnimationMotionXToDeltaPlayable other)
	{
		return default(bool);
	}
}
