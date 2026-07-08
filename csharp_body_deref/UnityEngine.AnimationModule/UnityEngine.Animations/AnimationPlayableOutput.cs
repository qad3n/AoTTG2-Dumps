using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[Token(Token = "0x2000025")]
[UnityEngine.Bindings.StaticAccessor("AnimationPlayableOutputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Animator.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationPlayableOutput.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationPlayableOutput.bindings.h")]
public struct AnimationPlayableOutput
{
	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;
}
