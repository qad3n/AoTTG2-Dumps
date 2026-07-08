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
		[Address(RVA = "0x48A8DC0", Offset = "0x48A8DC0", VA = "0x48A8DC0")]
		get
		{
			return default(ProbeVolumeBakingProcessSettings);
		}
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x48A8E80", Offset = "0x48A8E80", VA = "0x48A8E80")]
	internal ProbeVolumeBakingProcessSettings(ProbeDilationSettings dilationSettings, VirtualOffsetSettings virtualOffsetSettings)
	{
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x48A8E30", Offset = "0x48A8E30", VA = "0x48A8E30")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x48A8EB0", Offset = "0x48A8EB0", VA = "0x48A8EB0")]
	internal void Upgrade()
	{
	}
}
