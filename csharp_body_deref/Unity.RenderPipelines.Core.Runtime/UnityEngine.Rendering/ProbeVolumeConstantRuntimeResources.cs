// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeConstantRuntimeResources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000133")]
internal static class ProbeVolumeConstantRuntimeResources
{
	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x0")]
	private static ComputeBuffer m_SkySamplingDirectionsBuffer;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x8")]
	private static ComputeBuffer m_AntiLeakDataBuffer;

	[Token(Token = "0x40005D7")]
	private const int NB_SKY_PRECOMPUTED_DIRECTIONS = 255;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x10")]
	private static Vector3[] k_SkyDirections;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x18")]
	private static uint[] k_AntiLeakData;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x650D3A0", Offset = "0x650C3A0", VA = "0x650D3A0")]
	internal static void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x650D420", Offset = "0x650C420", VA = "0x650D420")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x650D880", Offset = "0x650C880", VA = "0x650D880")]
	public static Vector3[] GetSkySamplingDirections()
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x650D8F0", Offset = "0x650C8F0", VA = "0x650D8F0")]
	internal static void Cleanup()
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x650D620", Offset = "0x650C620", VA = "0x650D620")]
	private static Vector3[] GenerateSkyDirections()
	{
		return null;
	}
}
