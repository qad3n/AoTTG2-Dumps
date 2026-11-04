// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeBakingProcessSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000129")]
internal struct ProbeVolumeBakingProcessSettings
{
	[Token(Token = "0x200012A")]
	internal enum SettingsVersion
	{
		[Token(Token = "0x400057A")]
		Initial = 0,
		[Token(Token = "0x400057B")]
		ThreadedVirtualOffset = 1,
		[Token(Token = "0x400057C")]
		Max = 2,
		[Token(Token = "0x400057D")]
		Current = ThreadedVirtualOffset
	}

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private SettingsVersion m_Version;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x4")]
	public ProbeDilationSettings dilationSettings;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x18")]
	public VirtualOffsetSettings virtualOffsetSettings;

	[Token(Token = "0x1700012A")]
	internal static ProbeVolumeBakingProcessSettings Default
	{
		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x2B13A80", Offset = "0x2B12080", VA = "0x182B13A80")]
		get
		{
			return default(ProbeVolumeBakingProcessSettings);
		}
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x2B13A50", Offset = "0x2B12050", VA = "0x182B13A50")]
	internal ProbeVolumeBakingProcessSettings(ProbeDilationSettings dilationSettings, VirtualOffsetSettings virtualOffsetSettings)
	{
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x2B139A0", Offset = "0x2B11FA0", VA = "0x182B139A0")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x2B13A10", Offset = "0x2B12010", VA = "0x182B13A10")]
	internal void Upgrade()
	{
	}
}
