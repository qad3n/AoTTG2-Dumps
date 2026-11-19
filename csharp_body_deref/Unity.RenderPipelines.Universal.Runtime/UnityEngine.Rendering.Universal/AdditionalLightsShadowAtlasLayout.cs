// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x664E1A0", Offset = "0x664D1A0", VA = "0x664E1A0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006F4")]
			[Address(RVA = "0x664E090", Offset = "0x664D090", VA = "0x664E090")]
			set
			{
			}
		}

		[Token(Token = "0x170001DA")]
		public bool pointLightShadow
		{
			[Token(Token = "0x60006F5")]
			[Address(RVA = "0x664E1B0", Offset = "0x664D1B0", VA = "0x664E1B0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006F6")]
			[Address(RVA = "0x664E0A0", Offset = "0x664D0A0", VA = "0x664E0A0")]
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
	[Address(RVA = "0x664CD60", Offset = "0x664BD60", VA = "0x664CD60")]
	public AdditionalLightsShadowAtlasLayout(UniversalLightData lightData, UniversalShadowData shadowData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x664E1C0", Offset = "0x664D1C0", VA = "0x664E1C0")]
	public int GetTotalShadowSlicesCount()
	{
		return default(int);
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x664E1D0", Offset = "0x664D1D0", VA = "0x664E1D0")]
	public int GetTotalShadowResolutionRequestCount()
	{
		return default(int);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x664E1E0", Offset = "0x664D1E0", VA = "0x664E1E0")]
	public bool HasTooManyShadowMaps()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x664E1F0", Offset = "0x664D1F0", VA = "0x664E1F0")]
	public int GetShadowSlicesScaleFactor()
	{
		return default(int);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x664E200", Offset = "0x664D200", VA = "0x664E200")]
	public int GetAtlasSize()
	{
		return default(int);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x664E210", Offset = "0x664D210", VA = "0x664E210")]
	public bool HasSpaceForLight(int originalVisibleLightIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x664E220", Offset = "0x664D220", VA = "0x664E220")]
	public ShadowResolutionRequest GetSortedShadowResolutionRequest(int sortedShadowResolutionRequestIndex)
	{
		return default(ShadowResolutionRequest);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x664E250", Offset = "0x664D250", VA = "0x664E250")]
	public ShadowResolutionRequest GetSliceShadowResolutionRequest(int originalVisibleLightIndex, int sliceIndex)
	{
		return default(ShadowResolutionRequest);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x664E290", Offset = "0x664D290", VA = "0x664E290")]
	public static void ClearStaticCaches()
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x664E0B0", Offset = "0x664D0B0", VA = "0x664E0B0")]
	private static int EstimateScaleFactorNeededToFitAllShadowsInAtlas(in NativeArray<ShadowResolutionRequest> shadowResolutionRequests, int endIndex, int atlasSize)
	{
		return default(int);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x664DF90", Offset = "0x664CF90", VA = "0x664DF90")]
	private static Func<ShadowResolutionRequest, ShadowResolutionRequest, int> CreateCompareShadowResolutionRequesPredicate()
	{
		return null;
	}
}
