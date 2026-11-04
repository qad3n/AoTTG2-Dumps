// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Line
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000013")]
internal struct Line
{
	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	public float3 m;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0xC")]
	public float3 t;

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2BCE670", Offset = "0x2BCCC70", VA = "0x182BCE670")]
	internal static Line LineOfPlaneIntersectingPlane(float4 a, float4 b)
	{
		return default(Line);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2BCE730", Offset = "0x2BCCD30", VA = "0x182BCE730")]
	internal static float4 PlaneContainingLineAndPoint(Line a, float3 b)
	{
		return default(float4);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2BCE7F0", Offset = "0x2BCCDF0", VA = "0x182BCE7F0")]
	internal static float4 PlaneContainingLineWithNormalPerpendicularToVector(Line a, float3 b)
	{
		return default(float4);
	}
}
