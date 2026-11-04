// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODRenderingUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C4")]
internal static class LODRenderingUtils
{
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x2BF2270", Offset = "0x2BF0870", VA = "0x182BF2270")]
	public static float CalculateFOVHalfAngle(float fieldOfView)
	{
		return default(float);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x2BF2320", Offset = "0x2BF0920", VA = "0x182BF2320")]
	public static float CalculateScreenRelativeMetricNoBias(LODParameters lodParams)
	{
		return default(float);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x2BF22A0", Offset = "0x2BF08A0", VA = "0x182BF22A0")]
	public static float CalculateMeshLodConstant(LODParameters lodParams, float screenRelativeMetric, float meshLodThreshold)
	{
		return default(float);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x2BF22D0", Offset = "0x2BF08D0", VA = "0x182BF22D0")]
	public static float CalculatePerspectiveDistance(Vector3 objPosition, Vector3 camPosition, float sqrScreenRelativeMetric)
	{
		return default(float);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2BF2370", Offset = "0x2BF0970", VA = "0x182BF2370")]
	public static float CalculateSqrPerspectiveDistance(Vector3 objPosition, Vector3 camPosition, float sqrScreenRelativeMetric)
	{
		return default(float);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x2BF23B0", Offset = "0x2BF09B0", VA = "0x182BF23B0")]
	public static Vector3 GetWorldReferencePoint(this LODGroup lodGroup)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2BF2440", Offset = "0x2BF0A40", VA = "0x182BF2440")]
	public static float GetWorldSpaceScale(this LODGroup lodGroup)
	{
		return default(float);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x2BF24A0", Offset = "0x2BF0AA0", VA = "0x182BF24A0")]
	public static float GetWorldSpaceSize(this LODGroup lodGroup)
	{
		return default(float);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2BF2290", Offset = "0x2BF0890", VA = "0x182BF2290")]
	public static float CalculateLODDistance(float relativeScreenHeight, float size)
	{
		return default(float);
	}
}
