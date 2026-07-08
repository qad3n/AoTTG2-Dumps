using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Video;

[Token(Token = "0x2000004")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum VideoRenderMode
{
	[Token(Token = "0x4000003")]
	CameraFarPlane,
	[Token(Token = "0x4000004")]
	CameraNearPlane,
	[Token(Token = "0x4000005")]
	RenderTexture,
	[Token(Token = "0x4000006")]
	MaterialOverride,
	[Token(Token = "0x4000007")]
	APIOnly
}
