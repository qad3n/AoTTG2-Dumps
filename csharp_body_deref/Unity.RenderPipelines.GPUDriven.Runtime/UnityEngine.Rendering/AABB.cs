// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AABB
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BBBFC0", Offset = "0x2BBA5C0", VA = "0x182BBBFC0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000002")]
	public float3 max
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2BBBF90", Offset = "0x2BBA590", VA = "0x182BBBF90")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2BBBCE0", Offset = "0x2BBA2E0", VA = "0x182BBBCE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2BBBBD0", Offset = "0x2BBA1D0", VA = "0x182BBBBD0")]
	private static float3 RotateExtents(float3 extents, float3 m0, float3 m1, float3 m2)
	{
		return default(float3);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2BBBD80", Offset = "0x2BBA380", VA = "0x182BBBD80")]
	public static AABB Transform(float4x4 transform, AABB localBounds)
	{
		return default(AABB);
	}
}
