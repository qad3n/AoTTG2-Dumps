// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderersParameters
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E3")]
internal struct RenderersParameters
{
	[Token(Token = "0x20000E4")]
	[Flags]
	public enum Flags
	{
		[Token(Token = "0x4000431")]
		None = 0,
		[Token(Token = "0x4000432")]
		UseBoundingSphereParameter = 1
	}

	[Token(Token = "0x20000E5")]
	public static class ParamNames
	{
		[Token(Token = "0x4000433")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _BaseColor;

		[Token(Token = "0x4000434")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int unity_SpecCube0_HDR;

		[Token(Token = "0x4000435")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int unity_SHCoefficients;

		[Token(Token = "0x4000436")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int unity_LightmapST;

		[Token(Token = "0x4000437")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int unity_ObjectToWorld;

		[Token(Token = "0x4000438")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int unity_WorldToObject;

		[Token(Token = "0x4000439")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int unity_MatrixPreviousM;

		[Token(Token = "0x400043A")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int unity_MatrixPreviousMI;

		[Token(Token = "0x400043B")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int unity_WorldBoundingSphere;

		[Token(Token = "0x400043C")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int unity_RendererUserValuesPropertyEntry;

		[Token(Token = "0x400043D")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int[] DOTS_ST_WindParams;

		[Token(Token = "0x400043E")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int[] DOTS_ST_WindHistoryParams;

		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x2BF8F60", Offset = "0x2BF7560", VA = "0x182BF8F60")]
		static ParamNames()
		{
		}
	}

	[Token(Token = "0x20000E6")]
	public struct ParamInfo
	{
		[Token(Token = "0x400043F")]
		[FieldOffset(Offset = "0x0")]
		public int index;

		[Token(Token = "0x4000440")]
		[FieldOffset(Offset = "0x4")]
		public int gpuAddress;

		[Token(Token = "0x4000441")]
		[FieldOffset(Offset = "0x8")]
		public int uintOffset;

		[Token(Token = "0x17000074")]
		public bool valid
		{
			[Token(Token = "0x60003BA")]
			[Address(RVA = "0x1DBB1F0", Offset = "0x1DB97F0", VA = "0x181DBB1F0")]
			get
			{
				return default(bool);
			}
		}
	}

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x0")]
	private static int s_uintSize;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x0")]
	public ParamInfo lightmapScale;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0xC")]
	public ParamInfo localToWorld;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x18")]
	public ParamInfo worldToLocal;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x24")]
	public ParamInfo matrixPreviousM;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x30")]
	public ParamInfo matrixPreviousMI;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x3C")]
	public ParamInfo shCoefficients;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x48")]
	public ParamInfo rendererUserValues;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x54")]
	public ParamInfo boundingSphere;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x60")]
	public ParamInfo[] windParams;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x68")]
	public ParamInfo[] windHistoryParams;

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x2BFBFC0", Offset = "0x2BFA5C0", VA = "0x182BFBFC0")]
	public static GPUInstanceDataBuffer CreateInstanceDataBuffer(Flags flags, in InstanceNumInfo instanceNumInfo)
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x2BFC560", Offset = "0x2BFAB60", VA = "0x182BFC560")]
	public RenderersParameters(in GPUInstanceDataBuffer instanceDataBuffer)
	{
	}
}
