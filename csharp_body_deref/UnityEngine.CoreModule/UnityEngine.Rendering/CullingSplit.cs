// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingSplit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000317")]
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
