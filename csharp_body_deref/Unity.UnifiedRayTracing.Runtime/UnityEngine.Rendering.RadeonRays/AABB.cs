// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.AABB
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000002")]
internal class AABB
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	public float3 Min;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x1C")]
	public float3 Max;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x2D7EE40", Offset = "0x2D7D440", VA = "0x182D7EE40")]
	public AABB()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x2D7EE80", Offset = "0x2D7D480", VA = "0x182D7EE80")]
	public AABB(float3 min, float3 max)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2D7EC20", Offset = "0x2D7D220", VA = "0x182D7EC20")]
	public void Encapsulate(AABB aabb)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2D7ED20", Offset = "0x2D7D320", VA = "0x182D7ED20")]
	public void Encapsulate(float3 point)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2D7EBC0", Offset = "0x2D7D1C0", VA = "0x182D7EBC0")]
	public bool Contains(AABB rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2D7EE10", Offset = "0x2D7D410", VA = "0x182D7EE10")]
	public bool IsValid()
	{
		return default(bool);
	}
}
