// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AABB
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000004")]
internal struct AABB
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public float3 center;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0xC")]
	public float3 extents;

	[Token(Token = "0x17000001")]
	public float3 min
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x65B0460", Offset = "0x65AF460", VA = "0x65B0460")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000002")]
	public float3 max
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x65B0480", Offset = "0x65AF480", VA = "0x65B0480")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x65B04A0", Offset = "0x65AF4A0", VA = "0x65B04A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x65B0540", Offset = "0x65AF540", VA = "0x65B0540")]
	private static float3 RotateExtents(float3 extents, float3 m0, float3 m1, float3 m2)
	{
		return default(float3);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x65B0600", Offset = "0x65AF600", VA = "0x65B0600")]
	public static AABB Transform(float4x4 transform, AABB localBounds)
	{
		return default(AABB);
	}
}
