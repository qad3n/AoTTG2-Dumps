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

[Token(Token = "0x2000020")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationClipPlayable.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationClipPlayable.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AnimationClipPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct AnimationClipPlayable : IEquatable<AnimationClipPlayable>
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2EAA620", Offset = "0x2EA8C20", VA = "0x182EAA620", Slot = "4")]
	public bool Equals(AnimationClipPlayable other)
	{
		return default(bool);
	}
}
