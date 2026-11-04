// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LightCookieManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000E2")]
internal class LightCookieManager : IDisposable
{
	[Token(Token = "0x20000E3")]
	private static class ShaderProperty
	{
		[Token(Token = "0x400053E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int mainLightTexture;

		[Token(Token = "0x400053F")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int mainLightWorldToLight;

		[Token(Token = "0x4000540")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int mainLightCookieTextureFormat;

		[Token(Token = "0x4000541")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int additionalLightsCookieAtlasTexture;

		[Token(Token = "0x4000542")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int additionalLightsCookieAtlasTextureFormat;

		[Token(Token = "0x4000543")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int additionalLightsCookieEnableBits;

		[Token(Token = "0x4000544")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int additionalLightsCookieAtlasUVRectBuffer;

		[Token(Token = "0x4000545")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int additionalLightsCookieAtlasUVRects;

		[Token(Token = "0x4000546")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int additionalLightsWorldToLightBuffer;

		[Token(Token = "0x4000547")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int additionalLightsLightTypeBuffer;

		[Token(Token = "0x4000548")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int additionalLightsWorldToLights;

		[Token(Token = "0x4000549")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int additionalLightsLightTypes;
	}

	[Token(Token = "0x20000E4")]
	private enum LightCookieShaderFormat
	{
		[Token(Token = "0x400054B")]
		None = -1,
		[Token(Token = "0x400054C")]
		RGB,
		[Token(Token = "0x400054D")]
		Alpha,
		[Token(Token = "0x400054E")]
		Red
	}

	[Token(Token = "0x20000E5")]
	public struct Settings
	{
		[Token(Token = "0x20000E6")]
		public struct AtlasSettings
		{
			[Token(Token = "0x4000553")]
			[FieldOffset(Offset = "0x0")]
			public Vector2Int resolution;

			[Token(Token = "0x4000554")]
			[FieldOffset(Offset = "0x8")]
			public GraphicsFormat format;

			[Token(Token = "0x170001B6")]
			public bool isPow2
			{
				[Token(Token = "0x6000650")]
				[Address(RVA = "0x2C54160", Offset = "0x2C52760", VA = "0x182C54160")]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x170001B7")]
			public bool isSquare
			{
				[Token(Token = "0x6000651")]
				[Address(RVA = "0x2C54180", Offset = "0x2C52780", VA = "0x182C54180")]
				get
				{
					return default(bool);
				}
			}
		}

		[Token(Token = "0x400054F")]
		[FieldOffset(Offset = "0x0")]
		public AtlasSettings atlas;

		[Token(Token = "0x4000550")]
		[FieldOffset(Offset = "0xC")]
		public int maxAdditionalLights;

		[Token(Token = "0x4000551")]
		[FieldOffset(Offset = "0x10")]
		public float cubeOctahedralSizeScale;

		[Token(Token = "0x4000552")]
		[FieldOffset(Offset = "0x14")]
		public bool useStructuredBuffer;

		[Token(Token = "0x600064F")]
		[Address(RVA = "0x2C6DE50", Offset = "0x2C6C450", VA = "0x182C6DE50")]
		public static Settings Create()
		{
			return default(Settings);
		}
	}

	[Token(Token = "0x20000E7")]
	private struct LightCookieMapping
	{
		[Token(Token = "0x4000555")]
		[FieldOffset(Offset = "0x0")]
		public ushort visibleLightIndex;

		[Token(Token = "0x4000556")]
		[FieldOffset(Offset = "0x2")]
		public ushort lightBufferIndex;

		[Token(Token = "0x4000557")]
		[FieldOffset(Offset = "0x8")]
		public Light light;

		[Token(Token = "0x4000558")]
		[FieldOffset(Offset = "0x0")]
		public static Func<LightCookieMapping, LightCookieMapping, int> s_CompareByCookieSize;

		[Token(Token = "0x4000559")]
		[FieldOffset(Offset = "0x8")]
		public static Func<LightCookieMapping, LightCookieMapping, int> s_CompareByBufferIndex;
	}

	[Token(Token = "0x20000E9")]
	private readonly struct WorkSlice<T>
	{
		[Token(Token = "0x400055B")]
		[FieldOffset(Offset = "0x0")]
		private readonly T[] m_Data;

		[Token(Token = "0x400055C")]
		[FieldOffset(Offset = "0x0")]
		private readonly int m_Start;

		[Token(Token = "0x400055D")]
		[FieldOffset(Offset = "0x0")]
		private readonly int m_Length;

		[Token(Token = "0x170001B8")]
		public T this[int index]
		{
			[Token(Token = "0x6000659")]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x600065A")]
			set
			{
			}
		}

		[Token(Token = "0x170001B9")]
		public int length
		{
			[Token(Token = "0x600065B")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001BA")]
		public int capacity
		{
			[Token(Token = "0x600065C")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000657")]
		public WorkSlice(T[] src, int srcLen = -1)
		{
		}

		[Token(Token = "0x6000658")]
		public WorkSlice(T[] src, int srcStart, int srcLen = -1)
		{
		}

		[Token(Token = "0x600065D")]
		public void Sort(Func<T, T, int> compare)
		{
		}
	}

	[Token(Token = "0x20000EA")]
	private class WorkMemory
	{
		[Token(Token = "0x400055E")]
		[FieldOffset(Offset = "0x10")]
		public LightCookieMapping[] lightMappings;

		[Token(Token = "0x400055F")]
		[FieldOffset(Offset = "0x18")]
		public Vector4[] uvRects;

		[Token(Token = "0x600065E")]
		[Address(RVA = "0x2C6FFD0", Offset = "0x2C6E5D0", VA = "0x182C6FFD0")]
		public void Resize(int size)
		{
		}

		[Token(Token = "0x600065F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public WorkMemory()
		{
		}
	}

	[Token(Token = "0x20000EB")]
	private class LightCookieShaderData : IDisposable
	{
		[Token(Token = "0x4000560")]
		[FieldOffset(Offset = "0x10")]
		private int m_Size;

		[Token(Token = "0x4000561")]
		[FieldOffset(Offset = "0x14")]
		private bool m_UseStructuredBuffer;

		[Token(Token = "0x4000562")]
		[FieldOffset(Offset = "0x18")]
		private Matrix4x4[] m_WorldToLightCpuData;

		[Token(Token = "0x4000563")]
		[FieldOffset(Offset = "0x20")]
		private Vector4[] m_AtlasUVRectCpuData;

		[Token(Token = "0x4000564")]
		[FieldOffset(Offset = "0x28")]
		private float[] m_LightTypeCpuData;

		[Token(Token = "0x4000565")]
		[FieldOffset(Offset = "0x30")]
		private ShaderBitArray m_CookieEnableBitsCpuData;

		[Token(Token = "0x4000566")]
		[FieldOffset(Offset = "0x38")]
		private ComputeBuffer m_WorldToLightBuffer;

		[Token(Token = "0x4000567")]
		[FieldOffset(Offset = "0x40")]
		private ComputeBuffer m_AtlasUVRectBuffer;

		[Token(Token = "0x4000568")]
		[FieldOffset(Offset = "0x48")]
		private ComputeBuffer m_LightTypeBuffer;

		[Token(Token = "0x170001BB")]
		public Matrix4x4[] worldToLights
		{
			[Token(Token = "0x6000660")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BC")]
		public ShaderBitArray cookieEnableBits
		{
			[Token(Token = "0x6000661")]
			[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
			get
			{
				return default(ShaderBitArray);
			}
		}

		[Token(Token = "0x170001BD")]
		public Vector4[] atlasUVRects
		{
			[Token(Token = "0x6000662")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BE")]
		public float[] lightTypes
		{
			[Token(Token = "0x6000663")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BF")]
		public bool isUploaded
		{
			[Token(Token = "0x6000664")]
			[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000665")]
			[Address(RVA = "0x174C1E0", Offset = "0x174A7E0", VA = "0x18174C1E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000666")]
		[Address(RVA = "0x2C5AAE0", Offset = "0x2C590E0", VA = "0x182C5AAE0")]
		public LightCookieShaderData(int size, bool useStructuredBuffer)
		{
		}

		[Token(Token = "0x6000667")]
		[Address(RVA = "0x2C5A680", Offset = "0x2C58C80", VA = "0x182C5A680", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000668")]
		[Address(RVA = "0x2C5A6D0", Offset = "0x2C58CD0", VA = "0x182C5A6D0")]
		public void Resize(int size)
		{
		}

		[Token(Token = "0x6000669")]
		[Address(RVA = "0x2C5A900", Offset = "0x2C58F00", VA = "0x182C5A900")]
		public void Upload(CommandBuffer cmd)
		{
		}

		[Token(Token = "0x600066A")]
		[Address(RVA = "0x2C5A5F0", Offset = "0x2C58BF0", VA = "0x182C5A5F0")]
		public void Clear(CommandBuffer cmd)
		{
		}
	}

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Matrix4x4 s_DirLightProj;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x10")]
	private Texture2DAtlas m_AdditionalLightsCookieAtlas;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x18")]
	private LightCookieShaderData m_AdditionalLightsCookieShaderData;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x20")]
	private readonly Settings m_Settings;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x38")]
	private WorkMemory m_WorkMem;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x40")]
	private int[] m_VisibleLightIndexToShaderDataIndex;

	[Token(Token = "0x4000539")]
	private const int k_MaxCookieSizeDivisor = 16;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x48")]
	private int m_CookieSizeDivisor;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x4C")]
	private uint m_PrevCookieRequestPixelCount;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x50")]
	private int m_PrevWarnFrame;

	[Token(Token = "0x170001B4")]
	internal bool IsKeywordLightCookieEnabled
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x2C00A50", Offset = "0x2BFF050", VA = "0x182C00A50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x2C00A70", Offset = "0x2BFF070", VA = "0x182C00A70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	internal RTHandle AdditionalLightsCookieAtlasTexture
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x2C3C990", Offset = "0x2C3AF90", VA = "0x182C3C990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x2C3C900", Offset = "0x2C3AF00", VA = "0x182C3C900")]
	public LightCookieManager(ref Settings settings)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x2C3ACA0", Offset = "0x2C392A0", VA = "0x182C3ACA0")]
	private void InitAdditionalLights(int size)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x2AE4400", Offset = "0x2AE2A00", VA = "0x182AE4400")]
	public bool isInitialized()
	{
		return default(bool);
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x2C39DA0", Offset = "0x2C383A0", VA = "0x182C39DA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x2C3A980", Offset = "0x2C38F80", VA = "0x182C3A980")]
	public int GetLightCookieShaderDataIndex(int visibleLightIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x2C3B7E0", Offset = "0x2C39DE0", VA = "0x182C3B7E0")]
	public void Setup(CommandBuffer cmd, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x2C3B0C0", Offset = "0x2C396C0", VA = "0x182C3B0C0")]
	private bool SetupMainLight(CommandBuffer cmd, ref VisibleLight visibleMainLight)
	{
		return default(bool);
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x2C3A9D0", Offset = "0x2C38FD0", VA = "0x182C3A9D0")]
	private LightCookieShaderFormat GetLightCookieShaderFormat(GraphicsFormat cookieFormat)
	{
		return default(LightCookieShaderFormat);
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x2C3AA60", Offset = "0x2C39060", VA = "0x182C3AA60")]
	private void GetLightUVScaleOffset(ref UniversalAdditionalLightData additionalLightData, ref Matrix4x4 uvTransform)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x2C3ADD0", Offset = "0x2C393D0", VA = "0x182C3ADD0")]
	private bool SetupAdditionalLights(CommandBuffer cmd, UniversalLightData lightData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x2C3A4D0", Offset = "0x2C38AD0", VA = "0x182C3A4D0")]
	private int FilterAndValidateAdditionalLights(UniversalLightData lightData, LightCookieMapping[] validLightMappings)
	{
		return default(int);
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x2C3BB70", Offset = "0x2C3A170", VA = "0x182C3BB70")]
	private int UpdateAdditionalLightsAtlas(CommandBuffer cmd, ref WorkSlice<LightCookieMapping> validLightMappings, Vector4[] textureAtlasUVRects)
	{
		return default(int);
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x2C3A1E0", Offset = "0x2C387E0", VA = "0x182C3A1E0")]
	private int FetchUVRects(CommandBuffer cmd, ref WorkSlice<LightCookieMapping> validLightMappings, Vector4[] textureAtlasUVRects, int cookieSizeDivisor)
	{
		return default(int);
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x2C39B60", Offset = "0x2C38160", VA = "0x182C39B60")]
	private uint ComputeCookieRequestPixelCount(ref WorkSlice<LightCookieMapping> validLightMappings)
	{
		return default(uint);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x2C39B20", Offset = "0x2C38120", VA = "0x182C39B20")]
	private int ApproximateCookieSizeDivisor(float requestAtlasRatio)
	{
		return default(int);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x2C39DE0", Offset = "0x2C383E0", VA = "0x182C39DE0")]
	private Vector4 Fetch2D(CommandBuffer cmd, Texture cookie, int cookieSizeDivisor = 1)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x2C39F70", Offset = "0x2C38570", VA = "0x182C39F70")]
	private Vector4 FetchCube(CommandBuffer cmd, Texture cookie, int cookieSizeDivisor = 1)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x2C39C70", Offset = "0x2C38270", VA = "0x182C39C70")]
	private int ComputeOctahedralCookieSize(Texture cookie)
	{
		return default(int);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x2C39980", Offset = "0x2C37F80", VA = "0x182C39980")]
	private void AdjustUVRect(ref Vector4 uvScaleOffset, Texture cookie, ref Vector2 cookieSize)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x2C3BA40", Offset = "0x2C3A040", VA = "0x182C3BA40")]
	private void ShrinkUVRect(ref Vector4 uvScaleOffset, float amountPixels, ref Vector2 cookieSize)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x2C3BDE0", Offset = "0x2C3A3E0", VA = "0x182C3BDE0")]
	private void UploadAdditionalLights(CommandBuffer cmd, UniversalLightData lightData, ref WorkSlice<LightCookieMapping> validLightMappings, ref WorkSlice<Vector4> validUvRects)
	{
	}
}
