// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000119")]
internal struct AdditionalLightsShadowAtlasLayout
{
	[Token(Token = "0x200011A")]
	internal struct ShadowResolutionRequest
	{
		[Token(Token = "0x200011B")]
		[Flags]
		private enum SettingsOptions : ushort
		{
			[Token(Token = "0x4000633")]
			None = 0,
			[Token(Token = "0x4000634")]
			SoftShadow = 1,
			[Token(Token = "0x4000635")]
			PointLightShadow = 2,
			[Token(Token = "0x4000636")]
			All = 0xFFFF
		}

		[Token(Token = "0x400062B")]
		[FieldOffset(Offset = "0x0")]
		public ushort visibleLightIndex;

		[Token(Token = "0x400062C")]
		[FieldOffset(Offset = "0x2")]
		public ushort perLightShadowSliceIndex;

		[Token(Token = "0x400062D")]
		[FieldOffset(Offset = "0x4")]
		public ushort requestedResolution;

		[Token(Token = "0x400062E")]
		[FieldOffset(Offset = "0x6")]
		public ushort offsetX;

		[Token(Token = "0x400062F")]
		[FieldOffset(Offset = "0x8")]
		public ushort offsetY;

		[Token(Token = "0x4000630")]
		[FieldOffset(Offset = "0xA")]
		public ushort allocatedResolution;

		[Token(Token = "0x4000631")]
		[FieldOffset(Offset = "0xC")]
		private SettingsOptions m_ShadowProperties;

		[Token(Token = "0x170001D9")]
		public bool softShadow
		{
			[Token(Token = "0x60006F3")]
			[Address(RVA = "0x2C6E210", Offset = "0x2C6C810", VA = "0x182C6E210")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006F4")]
			[Address(RVA = "0x2C6E250", Offset = "0x2C6C850", VA = "0x182C6E250")]
			set
			{
			}
		}

		[Token(Token = "0x170001DA")]
		public bool pointLightShadow
		{
			[Token(Token = "0x60006F5")]
			[Address(RVA = "0x2C6E200", Offset = "0x2C6C800", VA = "0x182C6E200")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006F6")]
			[Address(RVA = "0x2C6E220", Offset = "0x2C6C820", VA = "0x182C6E220")]
			set
			{
			}
		}
	}

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x0")]
	private static List<RectInt> s_UnusedAtlasSquareAreas;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x8")]
	private static List<ShadowResolutionRequest> s_ShadowResolutionRequests;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x10")]
	private static float[] s_VisibleLightIndexToCameraSquareDistance;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x18")]
	private static Func<ShadowResolutionRequest, ShadowResolutionRequest, int> s_CompareShadowResolutionRequest;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x20")]
	private static ShadowResolutionRequest[] s_SortedShadowResolutionRequests;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<ShadowResolutionRequest> m_SortedShadowResolutionRequests;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<int> m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x20")]
	private int m_TotalShadowSlicesCount;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x24")]
	private int m_TotalShadowResolutionRequestCount;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x28")]
	private bool m_TooManyShadowMaps;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x2C")]
	private int m_ShadowSlicesScaleFactor;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x30")]
	private int m_AtlasSize;

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x2C52F20", Offset = "0x2C51520", VA = "0x182C52F20")]
	public AdditionalLightsShadowAtlasLayout(UniversalLightData lightData, UniversalShadowData shadowData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
	public int GetTotalShadowSlicesCount()
	{
		return default(int);
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
	public int GetTotalShadowResolutionRequestCount()
	{
		return default(int);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
	public bool HasTooManyShadowMaps()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
	public int GetShadowSlicesScaleFactor()
	{
		return default(int);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
	public int GetAtlasSize()
	{
		return default(int);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x2C52F10", Offset = "0x2C51510", VA = "0x182C52F10")]
	public bool HasSpaceForLight(int originalVisibleLightIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x2C52EE0", Offset = "0x2C514E0", VA = "0x182C52EE0")]
	public ShadowResolutionRequest GetSortedShadowResolutionRequest(int sortedShadowResolutionRequestIndex)
	{
		return default(ShadowResolutionRequest);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x2C52EA0", Offset = "0x2C514A0", VA = "0x182C52EA0")]
	public ShadowResolutionRequest GetSliceShadowResolutionRequest(int originalVisibleLightIndex, int sliceIndex)
	{
		return default(ShadowResolutionRequest);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x2C52B70", Offset = "0x2C51170", VA = "0x182C52B70")]
	public static void ClearStaticCaches()
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x2C52D70", Offset = "0x2C51370", VA = "0x182C52D70")]
	private static int EstimateScaleFactorNeededToFitAllShadowsInAtlas(in NativeArray<ShadowResolutionRequest> shadowResolutionRequests, int endIndex, int atlasSize)
	{
		return default(int);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x2C52C70", Offset = "0x2C51270", VA = "0x182C52C70")]
	private static Func<ShadowResolutionRequest, ShadowResolutionRequest, int> CreateCompareShadowResolutionRequesPredicate()
	{
		return null;
	}
}
