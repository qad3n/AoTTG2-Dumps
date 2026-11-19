// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.AABB
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6775170", Offset = "0x6774170", VA = "0x6775170")]
	public AABB()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x67751A0", Offset = "0x67741A0", VA = "0x67751A0")]
	public AABB(float3 min, float3 max)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x6775200", Offset = "0x6774200", VA = "0x6775200")]
	public void Encapsulate(AABB aabb)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6775300", Offset = "0x6774300", VA = "0x6775300")]
	public void Encapsulate(float3 point)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6775390", Offset = "0x6774390", VA = "0x6775390")]
	public bool Contains(AABB rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6775400", Offset = "0x6774400", VA = "0x6775400")]
	public bool IsValid()
	{
		return default(bool);
	}
}
