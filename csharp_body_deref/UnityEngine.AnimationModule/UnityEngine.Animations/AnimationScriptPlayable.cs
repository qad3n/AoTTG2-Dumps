// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationScriptPlayable
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
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Animations;

[Token(Token = "0x2000028")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationScriptPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
[UnityEngine.Bindings.StaticAccessor("AnimationScriptPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.Animations")]
public struct AnimationScriptPlayable : IEquatable<AnimationScriptPlayable>
{
	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationScriptPlayable m_NullPlayable;

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4DA6FD0", Offset = "0x4DA6FD0", VA = "0x4DA6FD0")]
	internal AnimationScriptPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4DA70C0", Offset = "0x4DA70C0", VA = "0x4DA70C0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4DA70D0", Offset = "0x4DA70D0", VA = "0x4DA70D0", Slot = "4")]
	public bool Equals(AnimationScriptPlayable other)
	{
		return default(bool);
	}
}
