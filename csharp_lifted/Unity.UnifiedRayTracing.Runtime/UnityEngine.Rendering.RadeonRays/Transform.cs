// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.Transform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000016")]
internal struct Transform
{
	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x0")]
	public float4 row0;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x10")]
	public float4 row1;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x20")]
	public float4 row2;

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x67783A0", Offset = "0x67773A0", VA = "0x67783A0")]
	public Transform(float4 row0, float4 row1, float4 row2)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x67783C0", Offset = "0x67773C0", VA = "0x67783C0")]
	public static Transform Identity()
	{
		return default(Transform);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x67783F0", Offset = "0x67773F0", VA = "0x67783F0")]
	public static Transform Translation(float3 translation)
	{
		return default(Transform);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6778440", Offset = "0x6777440", VA = "0x6778440")]
	public static Transform Scale(float3 scale)
	{
		return default(Transform);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6778470", Offset = "0x6777470", VA = "0x6778470")]
	public static Transform TRS(float3 translation, float3 rotation, float3 scale)
	{
		return default(Transform);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6778600", Offset = "0x6777600", VA = "0x6778600")]
	public Transform Inverse()
	{
		return default(Transform);
	}
}
