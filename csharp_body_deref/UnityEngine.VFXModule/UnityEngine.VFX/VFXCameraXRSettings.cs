using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x2000004")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct VFXCameraXRSettings
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	public uint viewTotal;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x4")]
	public uint viewCount;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x8")]
	public uint viewOffset;
}
