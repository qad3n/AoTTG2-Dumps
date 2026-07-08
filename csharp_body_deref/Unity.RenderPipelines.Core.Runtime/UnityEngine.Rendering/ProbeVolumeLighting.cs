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
		[Address(RVA = "0x48AB580", Offset = "0x48AB580", VA = "0x48AB580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x48AA5B0", Offset = "0x48AA5B0", VA = "0x48AA5B0")]
	public void BindAPVRuntimeResources(CommandBuffer cmdBuffer, bool isProbeVolumeEnabled)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x48AB5F0", Offset = "0x48AB5F0", VA = "0x48AB5F0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x48AB660", Offset = "0x48AB660", VA = "0x48AB660")]
	public bool UpdateShaderVariablesProbeVolumes(ProbeVolumesOptions probeVolumeOptions, int taaFrameIndex, CommandBuffer cmd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x48ABA20", Offset = "0x48ABA20", VA = "0x48ABA20")]
	public ProbeVolumeLighting()
	{
	}
}
