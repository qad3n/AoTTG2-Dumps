// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeDilationSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200013F")]
internal struct ProbeDilationSettings
{
	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x0")]
	public bool enableDilation;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x4")]
	public float dilationDistance;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x8")]
	public float dilationValidityThreshold;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0xC")]
	public int dilationIterations;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x10")]
	public bool squaredDistWeighting;

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x4BCDDF0", Offset = "0x4BCDDF0", VA = "0x4BCDDF0")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x4BCDE10", Offset = "0x4BCDE10", VA = "0x4BCDE10")]
	internal void UpgradeFromTo(ProbeVolumeBakingProcessSettings.SettingsVersion from, ProbeVolumeBakingProcessSettings.SettingsVersion to)
	{
	}
}
