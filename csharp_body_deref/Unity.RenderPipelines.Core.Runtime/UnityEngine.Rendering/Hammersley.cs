// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Hammersley
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200018C")]
public static class Hammersley
{
	[Token(Token = "0x200018D")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\ShaderLibrary\\Sampling\\Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq16
	{
		[Token(Token = "0x40007C8")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(16, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq16[64];
	}

	[Token(Token = "0x200018F")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\ShaderLibrary\\Sampling\\Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq32
	{
		[Token(Token = "0x40007CA")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(32, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq32[128];
	}

	[Token(Token = "0x2000191")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\ShaderLibrary\\Sampling\\Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq64
	{
		[Token(Token = "0x40007CC")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(64, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq64[256];
	}

	[Token(Token = "0x2000193")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\ShaderLibrary\\Sampling\\Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq256
	{
		[Token(Token = "0x40007CE")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(256, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq256[1024];
	}

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0x0")]
	private static float[] k_Hammersley2dSeq16;

	[Token(Token = "0x40007C1")]
	[FieldOffset(Offset = "0x8")]
	private static float[] k_Hammersley2dSeq32;

	[Token(Token = "0x40007C2")]
	[FieldOffset(Offset = "0x10")]
	private static float[] k_Hammersley2dSeq64;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x18")]
	private static float[] k_Hammersley2dSeq256;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int s_hammersley2DSeq16Id;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int s_hammersley2DSeq32Id;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int s_hammersley2DSeq64Id;

	[Token(Token = "0x40007C7")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int s_hammersley2DSeq256Id;

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x2B40E30", Offset = "0x2B3F430", VA = "0x182B40E30")]
	public static void Initialize()
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x2B40B30", Offset = "0x2B3F130", VA = "0x182B40B30")]
	public static void BindConstants(CommandBuffer cmd, ComputeShader cs)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x2B40C70", Offset = "0x2B3F270", VA = "0x182B40C70")]
	public static void BindConstants(IComputeCommandBuffer cmd, ComputeShader cs)
	{
	}
}
