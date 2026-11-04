// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareCommonSRP
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000150")]
public sealed class LensFlareCommonSRP
{
	[Token(Token = "0x2000151")]
	internal class LensFlareCompInfo
	{
		[Token(Token = "0x400067C")]
		[FieldOffset(Offset = "0x10")]
		internal int index;

		[Token(Token = "0x400067D")]
		[FieldOffset(Offset = "0x18")]
		internal LensFlareComponentSRP comp;

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0xC83FB0", Offset = "0xC825B0", VA = "0x180C83FB0")]
		internal LensFlareCompInfo(int idx, LensFlareComponentSRP cmp)
		{
		}
	}

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x0")]
	private static LensFlareCommonSRP m_Instance;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object m_Padlock;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x10")]
	private static List<LensFlareCompInfo> m_Data;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x18")]
	private static List<int> m_AvailableIndicies;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x20")]
	public static int maxLensFlareWithOcclusion;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x24")]
	public static int maxLensFlareWithOcclusionTemporalSample;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x28")]
	public static int mergeNeeded;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x30")]
	public static RTHandle occlusionRT;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x38")]
	private static int frameIdx;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x3C")]
	internal static readonly int _FlareOcclusionPermutation;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly int _FlareOcclusionRemapTex;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x44")]
	internal static readonly int _FlareOcclusionTex;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly int _FlareOcclusionIndex;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x4C")]
	internal static readonly int _FlareCloudOpacity;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly int _FlareSunOcclusionTex;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x54")]
	internal static readonly int _FlareTex;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x58")]
	internal static readonly int _FlareColorValue;

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x5C")]
	internal static readonly int _FlareData0;

	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x60")]
	internal static readonly int _FlareData1;

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0x64")]
	internal static readonly int _FlareData2;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x68")]
	internal static readonly int _FlareData3;

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x6C")]
	internal static readonly int _FlareData4;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x70")]
	internal static readonly int _FlareData5;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x74")]
	internal static readonly int _FlareData6;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x78")]
	internal static readonly int _FlareRadialTint;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x7C")]
	internal static readonly int _ViewId;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x80")]
	internal static readonly int _LensFlareScreenSpaceBloomMipTexture;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x84")]
	internal static readonly int _LensFlareScreenSpaceResultTexture;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x88")]
	internal static readonly int _LensFlareScreenSpaceSpectralLut;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x8C")]
	internal static readonly int _LensFlareScreenSpaceStreakTex;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x90")]
	internal static readonly int _LensFlareScreenSpaceMipLevel;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x94")]
	internal static readonly int _LensFlareScreenSpaceTintColor;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly int _LensFlareScreenSpaceParams1;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x9C")]
	internal static readonly int _LensFlareScreenSpaceParams2;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly int _LensFlareScreenSpaceParams3;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0xA4")]
	internal static readonly int _LensFlareScreenSpaceParams4;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0xA8")]
	internal static readonly int _LensFlareScreenSpaceParams5;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0xAC")]
	private static readonly bool s_SupportsLensFlare16bitsFormat;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0xAD")]
	private static readonly bool s_SupportsLensFlare32bitsFormat;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0xAE")]
	private static readonly bool s_SupportsLensFlare16bitsFormatWithLoadStore;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0xAF")]
	private static readonly bool s_SupportsLensFlare32bitsFormatWithLoadStore;

	[Token(Token = "0x17000143")]
	private static bool requireOcclusionRTRandomWrite
	{
		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x2B29140", Offset = "0x2B27740", VA = "0x182B29140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000144")]
	public static LensFlareCommonSRP Instance
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x2B28FA0", Offset = "0x2B275A0", VA = "0x182B28FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	private List<LensFlareCompInfo> Data
	{
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x2B28F50", Offset = "0x2B27550", VA = "0x182B28F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private LensFlareCommonSRP()
	{
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x2B203D0", Offset = "0x2B1E9D0", VA = "0x182B203D0")]
	private static bool CheckOcclusionBasedOnDeviceType()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x2B24770", Offset = "0x2B22D70", VA = "0x182B24770")]
	public static bool IsOcclusionRTCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x2B23C30", Offset = "0x2B22230", VA = "0x182B23C30")]
	private static GraphicsFormat GetOcclusionRTFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x2B23D20", Offset = "0x2B22320", VA = "0x182B23D20")]
	public static void Initialize()
	{
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x2B210F0", Offset = "0x2B1F6F0", VA = "0x182B210F0")]
	public static void Dispose()
	{
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x2B245B0", Offset = "0x2B22BB0", VA = "0x182B245B0")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x2B23AF0", Offset = "0x2B220F0", VA = "0x182B23AF0")]
	private int GetNextAvailableIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x2B1FF30", Offset = "0x2B1E530", VA = "0x182B1FF30")]
	public void AddData(LensFlareComponentSRP newData)
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x2B270F0", Offset = "0x2B256F0", VA = "0x182B270F0")]
	public void RemoveData(LensFlareComponentSRP data)
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430")]
	public static float ShapeAttenuationPointLight()
	{
		return default(float);
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x2B277F0", Offset = "0x2B25DF0", VA = "0x182B277F0")]
	public static float ShapeAttenuationDirLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x2B27880", Offset = "0x2B25E80", VA = "0x182B27880")]
	public static float ShapeAttenuationSpotConeLight(Vector3 forward, Vector3 wo, float spotAngle, float innerSpotPercent01)
	{
		return default(float);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x2B27830", Offset = "0x2B25E30", VA = "0x182B27830")]
	public static float ShapeAttenuationSpotBoxLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x2B27980", Offset = "0x2B25F80", VA = "0x182B27980")]
	public static float ShapeAttenuationSpotPyramidLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x2B274B0", Offset = "0x2B25AB0", VA = "0x182B274B0")]
	public static float ShapeAttenuationAreaTubeLight(Vector3 lightPositionWS, Vector3 lightSide, float lightWidth, Camera cam)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x2B27340", Offset = "0x2B25940", VA = "0x182B27340")]
	private static float ShapeAttenuateForwardLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x2B27410", Offset = "0x2B25A10", VA = "0x182B27410")]
	public static float ShapeAttenuationAreaRectangleLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x2B27370", Offset = "0x2B25970", VA = "0x182B27370")]
	public static float ShapeAttenuationAreaDiscLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x2B24630", Offset = "0x2B22C30", VA = "0x182B24630")]
	private static bool IsLensFlareSRPHidden(Camera cam, LensFlareComponentSRP comp, LensFlareDataSRP data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x2B240D0", Offset = "0x2B226D0", VA = "0x182B240D0")]
	private static Vector4 InternalGetFlareData0(Vector2 screenPos, Vector2 translationScale, Vector2 rayOff0, Vector2 vLocalScreenRatio, float angleDeg, float position, float angularOffset, Vector2 positionOffset, bool autoRotate)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x2B23970", Offset = "0x2B21F70", VA = "0x182B23970")]
	[Obsolete("This is now deprecated as a public API. Call ComputeOcclusion() or DoLensFlareDataDrivenCommon() instead. #from(6000.3)")]
	public static Vector4 GetFlareData0(Vector2 screenPos, Vector2 translationScale, Vector2 rayOff0, Vector2 vLocalScreenRatio, float angleDeg, float position, float angularOffset, Vector2 positionOffset, bool autoRotate)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x2B23A70", Offset = "0x2B22070", VA = "0x182B23A70")]
	private static Vector2 GetLensFlareRayOffset(Vector2 screenPos, float position, float globalCos0, float globalSin0)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x2B28620", Offset = "0x2B26C20", VA = "0x182B28620")]
	private static Vector3 WorldToViewport(Camera camera, bool isLocalLight, bool isCameraRelative, Matrix4x4 viewProjMatrix, Vector3 positionWS)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x2B28450", Offset = "0x2B26A50", VA = "0x182B28450")]
	private static Vector3 WorldToViewportLocal(bool isCameraRelative, Matrix4x4 viewProjMatrix, Vector3 cameraPosWS, Vector3 positionWS, bool isPerspective)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x2B280F0", Offset = "0x2B266F0", VA = "0x182B280F0")]
	private static Vector3 WorldToViewportDistance(Camera cam, Vector3 positionWS, bool isPerspective)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x2B24340", Offset = "0x2B22940", VA = "0x182B24340")]
	public static bool IsCloudLayerOpacityNeeded(Camera cam)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x2B20F50", Offset = "0x2B1F550", VA = "0x182B20F50")]
	public static void ComputeOcclusion(Material lensFlareShader, Camera cam, XRPass xr, int xrIndex, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Vector3 cameraPositionWS, Matrix4x4 viewProjMatrix, UnsafeCommandBuffer cmd, bool taaEnabled, bool hasCloudLayer, Texture cloudOpacityTexture, Texture sunOcclusionTexture)
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x2B23930", Offset = "0x2B21F30", VA = "0x182B23930")]
	private static bool ForceSingleElement(LensFlareDataElementSRP element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x2B249E0", Offset = "0x2B22FE0", VA = "0x182B249E0")]
	private static bool PreDrawSetup(bool occlusionOnly, bool clearRenderTarget, RenderTargetIdentifier rt, Camera cam, XRPass xr, int xrIndex, CommandBuffer cmd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x2B21200", Offset = "0x2B1F800", VA = "0x182B21200")]
	private static bool DoComponent(bool occlusionOnly, LensFlareCompInfo info, Camera cam, Vector3 cameraPositionWS, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Matrix4x4 viewProjMatrix, CommandBuffer cmd, out Vector3 flarePosWS, out Vector3 flarePosViewport, out Vector2 flarePosScreen, out Vector3 camToFlare, out Light light, out bool isDirLight, out float flareIntensity, out float distanceAttenuation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x2B20420", Offset = "0x2B1EA20", VA = "0x182B20420")]
	public static void ComputeOcclusion(Material lensFlareShader, Camera cam, XRPass xr, int xrIndex, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Vector3 cameraPositionWS, Matrix4x4 viewProjMatrix, CommandBuffer cmd, bool taaEnabled, bool hasCloudLayer, Texture cloudOpacityTexture, Texture sunOcclusionTexture)
	{
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x2B24C60", Offset = "0x2B23260", VA = "0x182B24C60")]
	public static void ProcessLensFlareSRPElementsSingle(LensFlareDataElementSRP element, CommandBuffer cmd, Color globalColorModulation, Light light, float compIntensity, float scale, Material lensFlareShader, Vector2 screenPos, bool compAllowOffScreen, Vector2 vScreenRatio, Vector3 flareData1, bool preview, int depth)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x2B26E90", Offset = "0x2B25490", VA = "0x182B26E90")]
	private static void ProcessLensFlareSRPElements(ref LensFlareDataElementSRP[] elements, CommandBuffer cmd, Color globalColorModulation, Light light, float compIntensity, float scale, Material lensFlareShader, Vector2 screenPos, bool compAllowOffScreen, float aspect, Vector4 flareData6, bool preview, int depth)
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x2B21D50", Offset = "0x2B20350", VA = "0x182B21D50")]
	public static void DoLensFlareDataDrivenCommon(Material lensFlareShader, Camera cam, Rect viewport, XRPass xr, int xrIndex, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Vector3 cameraPositionWS, Matrix4x4 viewProjMatrix, UnsafeCommandBuffer cmd, bool taaEnabled, bool hasCloudLayer, Texture cloudOpacityTexture, Texture sunOcclusionTexture, RenderTargetIdentifier colorBuffer, Func<Light, Camera, Vector3, float> GetLensFlareLightAttenuation, bool debugView)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x2B21F70", Offset = "0x2B20570", VA = "0x182B21F70")]
	public static void DoLensFlareDataDrivenCommon(Material lensFlareShader, Camera cam, Rect viewport, XRPass xr, int xrIndex, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Vector3 cameraPositionWS, Matrix4x4 viewProjMatrix, CommandBuffer cmd, bool taaEnabled, bool hasCloudLayer, Texture cloudOpacityTexture, Texture sunOcclusionTexture, RenderTargetIdentifier colorBuffer, Func<Light, Camera, Vector3, float> GetLensFlareLightAttenuation, bool debugView)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x2B229A0", Offset = "0x2B20FA0", VA = "0x182B229A0")]
	public static void DoLensFlareScreenSpaceCommon(Material lensFlareShader, Camera cam, float actualWidth, float actualHeight, Color tintColor, Texture originalBloomTexture, Texture bloomMipTexture, Texture spectralLut, Texture streakTextureTmp, Texture streakTextureTmp2, Vector4 parameters1, Vector4 parameters2, Vector4 parameters3, Vector4 parameters4, Vector4 parameters5, UnsafeCommandBuffer cmd, RTHandle result, bool debugView)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x2B22B80", Offset = "0x2B21180", VA = "0x182B22B80")]
	public static void DoLensFlareScreenSpaceCommon(Material lensFlareShader, Camera cam, float actualWidth, float actualHeight, Color tintColor, Texture originalBloomTexture, Texture bloomMipTexture, Texture spectralLut, Texture streakTextureTmp, Texture streakTextureTmp2, Vector4 parameters1, Vector4 parameters2, Vector4 parameters3, Vector4 parameters4, Vector4 parameters5, CommandBuffer cmd, RTHandle result, bool debugView)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x2B23680", Offset = "0x2B21C80", VA = "0x182B23680")]
	private static Vector2 DoPaniniProjection(Vector2 screenPos, float actualWidth, float actualHeight, float fieldOfView, float paniniProjectionCropToFit, float paniniProjectionDistance)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x2B20380", Offset = "0x2B1E980", VA = "0x182B20380")]
	private static Vector2 CalcViewExtents(float actualWidth, float actualHeight, float fieldOfView)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x2B20250", Offset = "0x2B1E850", VA = "0x182B20250")]
	private static Vector2 CalcCropExtents(float actualWidth, float actualHeight, float fieldOfView, float d)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x2B24940", Offset = "0x2B22F40", VA = "0x182B24940")]
	private static Vector2 Panini_Generic_Inv(Vector2 projPos, float d)
	{
		return default(Vector2);
	}
}
