// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimatorControllerPlayable
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

[Token(Token = "0x200002B")]
[UnityEngine.Bindings.StaticAccessor("AnimatorControllerPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimatorInfo.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/RuntimeAnimatorController.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimatorControllerPlayable.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animator.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimatorControllerPlayable.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimatorControllerPlayable : IEquatable<AnimatorControllerPlayable>
{
	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimatorControllerPlayable m_NullPlayable;

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x68AD2E0", Offset = "0x68AC2E0", VA = "0x68AD2E0")]
	internal AnimatorControllerPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x68AD4B0", Offset = "0x68AC4B0", VA = "0x68AD4B0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x68AD370", Offset = "0x68AC370", VA = "0x68AD370")]
	public void SetHandle(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x68AD4C0", Offset = "0x68AC4C0", VA = "0x68AD4C0", Slot = "4")]
	public bool Equals(AnimatorControllerPlayable other)
	{
		return default(bool);
	}
}
