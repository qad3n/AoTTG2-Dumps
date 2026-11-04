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
[Token(Token = "0x2000127")]
internal struct ProbeDilationSettings
{
	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x0")]
	public bool enableDilation;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x4")]
	public float dilationDistance;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x8")]
	public float dilationValidityThreshold;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0xC")]
	public int dilationIterations;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x10")]
	public bool squaredDistWeighting;

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x2B12D20", Offset = "0x2B11320", VA = "0x182B12D20")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void UpgradeFromTo(ProbeVolumeBakingProcessSettings.SettingsVersion from, ProbeVolumeBakingProcessSettings.SettingsVersion to)
	{
	}
}
