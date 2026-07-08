using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000011")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animation.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimatorInfo.h")]
public struct AnimatorClipInfo
{
	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	private int m_ClipInstanceID;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x4")]
	private float m_Weight;
}
