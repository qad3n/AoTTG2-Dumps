// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PackedMatrix
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000083")]
internal struct PackedMatrix
{
	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x0")]
	public float4 packed0;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x10")]
	public float4 packed1;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x20")]
	public float4 packed2;

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2BE7D90", Offset = "0x2BE6390", VA = "0x182BE7D90")]
	public static PackedMatrix FromMatrix4x4(in Matrix4x4 m)
	{
		return default(PackedMatrix);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x2BE7D90", Offset = "0x2BE6390", VA = "0x182BE7D90")]
	public static PackedMatrix FromFloat4x4(in float4x4 m)
	{
		return default(PackedMatrix);
	}
}
