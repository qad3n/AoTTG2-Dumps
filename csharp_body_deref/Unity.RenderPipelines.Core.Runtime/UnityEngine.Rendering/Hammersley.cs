using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000175")]
internal static class Hammersley
{
	[Token(Token = "0x2000176")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/ShaderLibrary/Sampling/Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq16
	{
		[Token(Token = "0x4000683")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(16, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq16[64];
	}

	[Token(Token = "0x2000178")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/ShaderLibrary/Sampling/Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq32
	{
		[Token(Token = "0x4000685")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(32, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq32[128];
	}

	[Token(Token = "0x200017A")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/ShaderLibrary/Sampling/Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq64
	{
		[Token(Token = "0x4000687")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(64, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq64[256];
	}

	[Token(Token = "0x200017C")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/ShaderLibrary/Sampling/Hammersley.cs", needAccessors = false, generateCBuffer = true)]
	private struct Hammersley2dSeq256
	{
		[Token(Token = "0x4000689")]
		[FieldOffset(Offset = "0x0")]
		[HLSLArray(256, typeof(Vector4))]
		public unsafe fixed float hammersley2dSeq256[1024];
	}

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x0")]
	private static float[] k_Hammersley2dSeq16;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x8")]
	private static float[] k_Hammersley2dSeq32;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x10")]
	private static float[] k_Hammersley2dSeq64;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x18")]
	private static float[] k_Hammersley2dSeq256;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int s_hammersley2DSeq16Id;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int s_hammersley2DSeq32Id;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int s_hammersley2DSeq64Id;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int s_hammersley2DSeq256Id;

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x48B9E20", Offset = "0x48B9E20", VA = "0x48B9E20")]
	public static void Initialize()
	{
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x48BA1E0", Offset = "0x48BA1E0", VA = "0x48BA1E0")]
	public static void BindConstants(CommandBuffer cmd, ComputeShader cs)
	{
	}
}
