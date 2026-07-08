using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Animations;

[Token(Token = "0x2000020")]
[MovedFrom("UnityEngine.Experimental.Animations")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationHumanStream.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationHumanStream.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimationHumanStream
{
	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr stream;
}
