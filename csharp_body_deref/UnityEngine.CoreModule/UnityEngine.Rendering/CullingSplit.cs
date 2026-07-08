using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000314")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct CullingSplit
{
	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 sphereCenter;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0xC")]
	public float sphereRadius;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x10")]
	public int cullingPlaneOffset;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x14")]
	public int cullingPlaneCount;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x18")]
	public float cascadeBlendCullingFactor;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x1C")]
	public float nearPlane;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x20")]
	public Matrix4x4 cullingMatrix;
}
