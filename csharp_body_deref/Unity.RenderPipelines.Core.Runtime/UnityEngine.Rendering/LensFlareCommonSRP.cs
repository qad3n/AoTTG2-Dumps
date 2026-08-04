// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareCommonSRP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200015B")]
public sealed class LensFlareCommonSRP
{
	[Token(Token = "0x200015C")]
	internal class LensFlareCompInfo
	{
		[Token(Token = "0x40005FD")]
		[FieldOffset(Offset = "0x10")]
		internal int index;

		[Token(Token = "0x40005FE")]
		[FieldOffset(Offset = "0x18")]
		internal LensFlareComponentSRP comp;

		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0x4BD52A0", Offset = "0x4BD52A0", VA = "0x4BD52A0")]
		internal LensFlareCompInfo(int idx, LensFlareComponentSRP cmp)
		{
		}
	}

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x0")]
	private static LensFlareCommonSRP m_Instance;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object m_Padlock;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x10")]
	private static List<LensFlareCompInfo> m_Data;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x18")]
	private static List<int> m_AvailableIndicies;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x20")]
	public static int maxLensFlareWithOcclusion;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x24")]
	public static int maxLensFlareWithOcclusionTemporalSample;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x28")]
	public static int mergeNeeded;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x30")]
	public static RTHandle occlusionRT;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x38")]
	private static int frameIdx;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly bool s_SupportsLensFlareTexFormat;

	[Token(Token = "0x1700012A")]
	public static LensFlareCommonSRP Instance
	{
		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0x4BD4C50", Offset = "0x4BD4C50", VA = "0x4BD4C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	private List<LensFlareCompInfo> Data
	{
		[Token(Token = "0x6000A7E")]
		[Address(RVA = "0x4BD4E20", Offset = "0x4BD4E20", VA = "0x4BD4E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4BD4780", Offset = "0x4BD4780", VA = "0x4BD4780")]
	private LensFlareCommonSRP()
	{
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x4BD4790", Offset = "0x4BD4790", VA = "0x4BD4790")]
	public static bool IsOcclusionRTCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x4BD4810", Offset = "0x4BD4810", VA = "0x4BD4810")]
	public static void Initialize()
	{
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x4BD4AB0", Offset = "0x4BD4AB0", VA = "0x4BD4AB0")]
	public static void Dispose()
	{
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x4BD4E90", Offset = "0x4BD4E90", VA = "0x4BD4E90")]
	public bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x4BD4F30", Offset = "0x4BD4F30", VA = "0x4BD4F30")]
	private int GetNextAvailableIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x4BD5090", Offset = "0x4BD5090", VA = "0x4BD5090")]
	public void AddData(LensFlareComponentSRP newData)
	{
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x4BD52D0", Offset = "0x4BD52D0", VA = "0x4BD52D0")]
	public void RemoveData(LensFlareComponentSRP data)
	{
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x4BD5520", Offset = "0x4BD5520", VA = "0x4BD5520")]
	public static float ShapeAttenuationPointLight()
	{
		return default(float);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x4BD5530", Offset = "0x4BD5530", VA = "0x4BD5530")]
	public static float ShapeAttenuationDirLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x4BD5560", Offset = "0x4BD5560", VA = "0x4BD5560")]
	public static float ShapeAttenuationSpotConeLight(Vector3 forward, Vector3 wo, float spotAngle, float innerSpotPercent01)
	{
		return default(float);
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x4BD5620", Offset = "0x4BD5620", VA = "0x4BD5620")]
	public static float ShapeAttenuationSpotBoxLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x4BD5650", Offset = "0x4BD5650", VA = "0x4BD5650")]
	public static float ShapeAttenuationSpotPyramidLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x4BD5710", Offset = "0x4BD5710", VA = "0x4BD5710")]
	public static float ShapeAttenuationAreaTubeLight(Vector3 lightPositionWS, Vector3 lightSide, float lightWidth, Camera cam)
	{
		return default(float);
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x4BD5EE0", Offset = "0x4BD5EE0", VA = "0x4BD5EE0")]
	private static float ShapeAttenuateForwardLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x4BD5F10", Offset = "0x4BD5F10", VA = "0x4BD5F10")]
	public static float ShapeAttenuationAreaRectangleLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x4BD5FD0", Offset = "0x4BD5FD0", VA = "0x4BD5FD0")]
	public static float ShapeAttenuationAreaDiscLight(Vector3 forward, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x4BD6090", Offset = "0x4BD6090", VA = "0x4BD6090")]
	public static Vector4 GetFlareData0(Vector2 screenPos, Vector2 translationScale, Vector2 rayOff0, Vector2 vLocalScreenRatio, float angleDeg, float position, float angularOffset, Vector2 positionOffset, bool autoRotate)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4BD6330", Offset = "0x4BD6330", VA = "0x4BD6330")]
	private static Vector2 GetLensFlareRayOffset(Vector2 screenPos, float position, float globalCos0, float globalSin0)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4BD6380", Offset = "0x4BD6380", VA = "0x4BD6380")]
	private static Vector3 WorldToViewport(Camera camera, bool isLocalLight, bool isCameraRelative, Matrix4x4 viewProjMatrix, Vector3 positionWS)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x4BD66B0", Offset = "0x4BD66B0", VA = "0x4BD66B0")]
	private static Vector3 WorldToViewportLocal(bool isCameraRelative, Matrix4x4 viewProjMatrix, Vector3 cameraPosWS, Vector3 positionWS)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4BD6740", Offset = "0x4BD6740", VA = "0x4BD6740")]
	private static Vector3 WorldToViewportDistance(Camera cam, Vector3 positionWS)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4BD68B0", Offset = "0x4BD68B0", VA = "0x4BD68B0")]
	public static bool IsCloudLayerOpacityNeeded(Camera cam)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4BD6D60", Offset = "0x4BD6D60", VA = "0x4BD6D60")]
	private static void SetOcclusionPermutation(CommandBuffer cmd, bool useBackgroundCloudOcclusion, bool volumetricCloudOcclusion, bool hasCloudLayer, int _FlareCloudOpacity, int _FlareSunOcclusionTex, Texture cloudOpacityTexture, Texture sunOcclusionTexture)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4BD6F20", Offset = "0x4BD6F20", VA = "0x4BD6F20")]
	public static void ComputeOcclusion(Material lensFlareShader, Camera cam, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Vector3 cameraPositionWS, Matrix4x4 viewProjMatrix, CommandBuffer cmd, bool taaEnabled, bool hasCloudLayer, Texture cloudOpacityTexture, Texture sunOcclusionTexture, int _FlareOcclusionTex, int _FlareCloudOpacity, int _FlareOcclusionIndex, int _FlareTex, int _FlareColorValue, int _FlareSunOcclusionTex, int _FlareData0, int _FlareData1, int _FlareData2, int _FlareData3, int _FlareData4)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4BD8C40", Offset = "0x4BD8C40", VA = "0x4BD8C40")]
	public static void DoLensFlareDataDrivenCommon(Material lensFlareShader, Camera cam, float actualWidth, float actualHeight, bool usePanini, float paniniDistance, float paniniCropToFit, bool isCameraRelative, Vector3 cameraPositionWS, Matrix4x4 viewProjMatrix, CommandBuffer cmd, bool taaEnabled, bool hasCloudLayer, Texture cloudOpacityTexture, Texture sunOcclusionTexture, RenderTargetIdentifier colorBuffer, Func<Light, Camera, Vector3, float> GetLensFlareLightAttenuation, int _FlareOcclusionRemapTex, int _FlareOcclusionTex, int _FlareOcclusionIndex, int _FlareCloudOpacity, int _FlareSunOcclusionTex, int _FlareTex, int _FlareColorValue, int _FlareData0, int _FlareData1, int _FlareData2, int _FlareData3, int _FlareData4, bool debugView)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4BDCAD0", Offset = "0x4BDCAD0", VA = "0x4BDCAD0")]
	public static void DoLensFlareScreenSpaceCommon(Material lensFlareShader, Camera cam, float actualWidth, float actualHeight, Color tintColor, Texture bloomTexture, Texture spectralLut, Texture streakTextureTmp, Texture streakTextureTmp2, Vector4 parameters1, Vector4 parameters2, Vector4 parameters3, Vector4 parameters4, Vector4 parameters5, CommandBuffer cmd, RTHandle result, int _BloomTexture, int _LensFlareScreenSpaceResultTexture, int _LensFlareScreenSpaceSpectralLut, int _LensFlareScreenSpaceStreakTex, int _LensFlareScreenSpaceMipLevel, int _LensFlareScreenSpaceTintColor, int _LensFlareScreenSpaceParams1, int _LensFlareScreenSpaceParams2, int _LensFlareScreenSpaceParams3, int _LensFlareScreenSpaceParams4, int _LensFlareScreenSpaceParams5, bool debugView)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4BD88F0", Offset = "0x4BD88F0", VA = "0x4BD88F0")]
	private static Vector2 DoPaniniProjection(Vector2 screenPos, float actualWidth, float actualHeight, float fieldOfView, float paniniProjectionCropToFit, float paniniProjectionDistance)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x4BDD570", Offset = "0x4BDD570", VA = "0x4BDD570")]
	private static Vector2 CalcViewExtents(float actualWidth, float actualHeight, float fieldOfView)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x4BDD5C0", Offset = "0x4BDD5C0", VA = "0x4BDD5C0")]
	private static Vector2 CalcCropExtents(float actualWidth, float actualHeight, float fieldOfView, float d)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x4BDD6D0", Offset = "0x4BDD6D0", VA = "0x4BDD6D0")]
	private static Vector2 Panini_Generic_Inv(Vector2 projPos, float d)
	{
		return default(Vector2);
	}
}
