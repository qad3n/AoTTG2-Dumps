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
	[Address(RVA = "0x4A7F7B0", Offset = "0x4A7F7B0", VA = "0x4A7F7B0")]
	internal AnimationScriptPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4A7F8A0", Offset = "0x4A7F8A0", VA = "0x4A7F8A0", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4A7F8B0", Offset = "0x4A7F8B0", VA = "0x4A7F8B0", Slot = "4")]
	public bool Equals(AnimationScriptPlayable other)
	{
		return default(bool);
	}
}
