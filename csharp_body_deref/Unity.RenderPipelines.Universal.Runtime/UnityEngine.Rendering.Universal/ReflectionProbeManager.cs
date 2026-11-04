// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ReflectionProbeManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000160")]
internal struct ReflectionProbeManager : IDisposable
{
	[Token(Token = "0x2000161")]
	private struct CachedProbe
	{
		[Token(Token = "0x400081B")]
		[FieldOffset(Offset = "0x0")]
		public uint updateCount;

		[Token(Token = "0x400081C")]
		[FieldOffset(Offset = "0x8")]
		public Hash128 imageContentsHash;

		[Token(Token = "0x400081D")]
		[FieldOffset(Offset = "0x18")]
		public int size;

		[Token(Token = "0x400081E")]
		[FieldOffset(Offset = "0x1C")]
		public int mipCount;

		[Token(Token = "0x400081F")]
		[FieldOffset(Offset = "0x20")]
		public unsafe fixed int dataIndices[7];

		[Token(Token = "0x4000820")]
		[FieldOffset(Offset = "0x3C")]
		public unsafe fixed int levels[7];

		[Token(Token = "0x4000821")]
		[FieldOffset(Offset = "0x58")]
		public Texture texture;

		[Token(Token = "0x4000822")]
		[FieldOffset(Offset = "0x60")]
		public int lastUsed;

		[Token(Token = "0x4000823")]
		[FieldOffset(Offset = "0x64")]
		public Vector4 hdrData;
	}

	[Token(Token = "0x2000164")]
	private static class ShaderProperties
	{
		[Token(Token = "0x4000826")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int BoxMin;

		[Token(Token = "0x4000827")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int BoxMax;

		[Token(Token = "0x4000828")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int ProbePosition;

		[Token(Token = "0x4000829")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int MipScaleOffset;

		[Token(Token = "0x400082A")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int Count;

		[Token(Token = "0x400082B")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int Atlas;

		[Token(Token = "0x400082C")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int Rotation;
	}

	[Token(Token = "0x400080B")]
	[FieldOffset(Offset = "0x0")]
	private int2 m_Resolution;

	[Token(Token = "0x400080C")]
	[FieldOffset(Offset = "0x8")]
	private RenderTexture m_AtlasTexture0;

	[Token(Token = "0x400080D")]
	[FieldOffset(Offset = "0x10")]
	private RenderTexture m_AtlasTexture1;

	[Token(Token = "0x400080E")]
	[FieldOffset(Offset = "0x18")]
	private RTHandle m_AtlasTexture0Handle;

	[Token(Token = "0x400080F")]
	[FieldOffset(Offset = "0x20")]
	private BuddyAllocator m_AtlasAllocator;

	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<int, CachedProbe> m_Cache;

	[Token(Token = "0x4000811")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<int, int> m_WarningCache;

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x58")]
	private List<int> m_NeedsUpdate;

	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x60")]
	private List<int> m_NeedsRemove;

	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x68")]
	private Vector4[] m_BoxMax;

	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x70")]
	private Vector4[] m_BoxMin;

	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x78")]
	private Vector4[] m_ProbePosition;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x80")]
	private Vector4[] m_MipScaleOffset;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x88")]
	private Vector4[] m_Rotations;

	[Token(Token = "0x4000819")]
	private const int k_MaxMipCount = 7;

	[Token(Token = "0x400081A")]
	private const string k_ReflectionProbeAtlasName = "URP Reflection Probe Atlas";

	[Token(Token = "0x170001DD")]
	public RenderTexture atlasRT
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	public RTHandle atlasRTHandle
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x2C74D00", Offset = "0x2C73300", VA = "0x182C74D00")]
	public static ReflectionProbeManager Create()
	{
		return default(ReflectionProbeManager);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x2C74F80", Offset = "0x2C73580", VA = "0x182C74F80")]
	private void Init()
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x2C754E0", Offset = "0x2C73AE0", VA = "0x182C754E0")]
	public void UpdateGpuData(CommandBuffer cmd, ref CullingResults cullResults)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x2C74E40", Offset = "0x2C73440", VA = "0x182C74E40")]
	private float4 GetScaleOffset(int level, int dataIndex, bool includePadding, bool yflip)
	{
		return default(float4);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x2C74D50", Offset = "0x2C73350", VA = "0x182C74D50", Slot = "4")]
	public void Dispose()
	{
	}
}
