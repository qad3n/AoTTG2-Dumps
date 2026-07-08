using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Playables;

[Token(Token = "0x2000348")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.StaticAccessor("TexturePlayableOutputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Director/TexturePlayableOutput.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Director/TexturePlayableOutput.h")]
public struct TexturePlayableOutput
{
	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;
}
