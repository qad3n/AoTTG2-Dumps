// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderDerivedData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A3")]
internal struct OccluderDerivedData
{
	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x0")]
	public Matrix4x4 viewProjMatrix;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x40")]
	public Vector4 viewOriginWorldSpace;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x50")]
	public Vector4 radialDirWorldSpace;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x60")]
	public Vector4 facingDirWorldSpace;

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2BF3E30", Offset = "0x2BF2430", VA = "0x182BF3E30")]
	public static OccluderDerivedData FromParameters(in OccluderSubviewUpdate occluderSubviewUpdate)
	{
		return default(OccluderDerivedData);
	}
}
