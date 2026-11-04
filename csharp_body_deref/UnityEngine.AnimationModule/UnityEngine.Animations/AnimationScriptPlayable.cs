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

[Token(Token = "0x2000029")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationScriptPlayable.bindings.h")]
[MovedFrom("UnityEngine.Experimental.Animations")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AnimationScriptPlayableBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayable.h")]
public struct AnimationScriptPlayable : IEquatable<AnimationScriptPlayable>
{
	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x0")]
	private PlayableHandle m_Handle;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AnimationScriptPlayable m_NullPlayable;

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x2EAC700", Offset = "0x2EAAD00", VA = "0x182EAC700")]
	internal AnimationScriptPlayable(PlayableHandle handle)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "5")]
	public PlayableHandle GetHandle()
	{
		return default(PlayableHandle);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2EAC520", Offset = "0x2EAAB20", VA = "0x182EAC520", Slot = "4")]
	public bool Equals(AnimationScriptPlayable other)
	{
		return default(bool);
	}
}
