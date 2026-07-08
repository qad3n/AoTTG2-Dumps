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
	[Address(RVA = "0x48A8D30", Offset = "0x48A8D30", VA = "0x48A8D30")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x48A8D50", Offset = "0x48A8D50", VA = "0x48A8D50")]
	internal void UpgradeFromTo(ProbeVolumeBakingProcessSettings.SettingsVersion from, ProbeVolumeBakingProcessSettings.SettingsVersion to)
	{
	}
}
