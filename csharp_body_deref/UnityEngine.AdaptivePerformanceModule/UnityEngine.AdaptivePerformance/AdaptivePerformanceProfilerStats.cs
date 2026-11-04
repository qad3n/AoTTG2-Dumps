// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200003C")]
public static class AdaptivePerformanceProfilerStats
{
	[Token(Token = "0x200003D")]
	public readonly struct CustomProfilerMarker<T> where T : struct
	{
		[Token(Token = "0x4000118")]
		[FieldOffset(Offset = "0x0")]
		private readonly ProfilerMarker m_Marker;

		[Token(Token = "0x4000119")]
		[FieldOffset(Offset = "0x0")]
		private readonly byte m_Type;

		[Token(Token = "0x60001FA")]
		public CustomProfilerMarker(string name, ProfilerMarkerDataUnit dataUnit)
		{
		}

		[Token(Token = "0x60001FB")]
		public void Sample(T value)
		{
		}

		[Token(Token = "0x60001FC")]
		private static byte GetProfilerMarkerDataType()
		{
			return default(byte);
		}
	}

	[Token(Token = "0x200003E")]
	public struct ScalerInfo
	{
		[Token(Token = "0x400011A")]
		[FieldOffset(Offset = "0x0")]
		public unsafe fixed byte scalerName[320];

		[Token(Token = "0x400011B")]
		[FieldOffset(Offset = "0x140")]
		public uint enabled;

		[Token(Token = "0x400011C")]
		[FieldOffset(Offset = "0x144")]
		public int overrideLevel;

		[Token(Token = "0x400011D")]
		[FieldOffset(Offset = "0x148")]
		public int currentLevel;

		[Token(Token = "0x400011E")]
		[FieldOffset(Offset = "0x14C")]
		public int maxLevel;

		[Token(Token = "0x400011F")]
		[FieldOffset(Offset = "0x150")]
		public float scale;

		[Token(Token = "0x4000120")]
		[FieldOffset(Offset = "0x154")]
		public uint applied;
	}

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ProfilerCategory AdaptivePerformanceProfilerCategory;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x8")]
	public static CustomProfilerMarker<float> CurrentCPUMarker;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x18")]
	public static CustomProfilerMarker<float> AvgCPUMarker;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x28")]
	public static CustomProfilerMarker<float> CurrentGPUMarker;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x38")]
	public static CustomProfilerMarker<float> AvgGPUMarker;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x48")]
	public static CustomProfilerMarker<int> CurrentCPULevelMarker;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x58")]
	public static CustomProfilerMarker<int> CurrentGPULevelMarker;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x68")]
	public static CustomProfilerMarker<float> CurrentFrametimeMarker;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x78")]
	public static CustomProfilerMarker<float> AvgFrametimeMarker;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x88")]
	public static CustomProfilerMarker<int> WarningLevelMarker;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x98")]
	public static CustomProfilerMarker<float> TemperatureLevelMarker;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0xA8")]
	public static CustomProfilerMarker<float> TemperatureTrendMarker;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0xB8")]
	public static CustomProfilerMarker<int> BottleneckMarker;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0xC8")]
	public static CustomProfilerMarker<int> PerformanceModeMarker;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0xD8")]
	public static readonly Guid kAdaptivePerformanceProfilerModuleGuid;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0xE8")]
	public static readonly int kScalerDataTag;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0xF0")]
	private static List<ScalerInfo> scalerInfos;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0xF8")]
	private static Dictionary<string, int> scalerInfosIndex;

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2E8AD40", Offset = "0x2E89340", VA = "0x182E8AD40")]
	public static void EmitScalerDataToProfilerStream(string scalerName, bool enabled, int overrideLevel, int currentLevel, float scale, bool applied, int maxLevel)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void FlushScalerDataToProfilerStream()
	{
	}
}
