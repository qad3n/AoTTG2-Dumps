// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeLighting
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000146")]
public class ProbeVolumeLighting
{
	[Token(Token = "0x2000147")]
	public static class ShaderIDs
	{
		[Token(Token = "0x400059D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _APVResIndex;

		[Token(Token = "0x400059E")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _APVResCellIndices;

		[Token(Token = "0x400059F")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _APVResL0_L1Rx;

		[Token(Token = "0x40005A0")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _APVResL1G_L1Ry;

		[Token(Token = "0x40005A1")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _APVResL1B_L1Rz;

		[Token(Token = "0x40005A2")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _APVResL2_0;

		[Token(Token = "0x40005A3")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _APVResL2_1;

		[Token(Token = "0x40005A4")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _APVResL2_2;

		[Token(Token = "0x40005A5")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _APVResL2_3;

		[Token(Token = "0x40005A6")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _APVResValidity;
	}

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x10")]
	private ComputeBuffer m_EmptyIndexBuffer;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x0")]
	private static ProbeVolumeLighting _instance;

	[Token(Token = "0x17000126")]
	public static ProbeVolumeLighting instance
	{
		[Token(Token = "0x6000A3D")]
		[Address(RVA = "0x4BD0630", Offset = "0x4BD0630", VA = "0x4BD0630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x4BCF660", Offset = "0x4BCF660", VA = "0x4BCF660")]
	public void BindAPVRuntimeResources(CommandBuffer cmdBuffer, bool isProbeVolumeEnabled)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x4BD06A0", Offset = "0x4BD06A0", VA = "0x4BD06A0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x4BD0710", Offset = "0x4BD0710", VA = "0x4BD0710")]
	public bool UpdateShaderVariablesProbeVolumes(ProbeVolumesOptions probeVolumeOptions, int taaFrameIndex, CommandBuffer cmd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x4BD0AD0", Offset = "0x4BD0AD0", VA = "0x4BD0AD0")]
	public ProbeVolumeLighting()
	{
	}
}
