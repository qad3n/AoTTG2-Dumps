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
[Token(Token = "0x2000141")]
internal struct ProbeVolumeBakingProcessSettings
{
	[Token(Token = "0x2000142")]
	internal enum SettingsVersion
	{
		[Token(Token = "0x400058A")]
		Initial = 0,
		[Token(Token = "0x400058B")]
		ThreadedVirtualOffset = 1,
		[Token(Token = "0x400058C")]
		Max = 2,
		[Token(Token = "0x400058D")]
		Current = 1
	}

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private SettingsVersion m_Version;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x4")]
	public ProbeDilationSettings dilationSettings;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x18")]
	public VirtualOffsetSettings virtualOffsetSettings;

	[Token(Token = "0x17000120")]
	internal static ProbeVolumeBakingProcessSettings Default
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x4BCDE80", Offset = "0x4BCDE80", VA = "0x4BCDE80")]
		get
		{
			return default(ProbeVolumeBakingProcessSettings);
		}
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x4BCDF40", Offset = "0x4BCDF40", VA = "0x4BCDF40")]
	internal ProbeVolumeBakingProcessSettings(ProbeDilationSettings dilationSettings, VirtualOffsetSettings virtualOffsetSettings)
	{
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x4BCDEF0", Offset = "0x4BCDEF0", VA = "0x4BCDEF0")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x4BCDF70", Offset = "0x4BCDF70", VA = "0x4BCDF70")]
	internal void Upgrade()
	{
	}
}
