// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeConstantRuntimeResources
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B18AC0", Offset = "0x2B170C0", VA = "0x182B18AC0")]
	internal static void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x2B18B90", Offset = "0x2B17190", VA = "0x182B18B90")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x2B18B40", Offset = "0x2B17140", VA = "0x182B18B40")]
	public static Vector3[] GetSkySamplingDirections()
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x2B18780", Offset = "0x2B16D80", VA = "0x182B18780")]
	internal static void Cleanup()
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x2B18870", Offset = "0x2B16E70", VA = "0x182B18870")]
	private static Vector3[] GenerateSkyDirections()
	{
		return null;
	}
}
