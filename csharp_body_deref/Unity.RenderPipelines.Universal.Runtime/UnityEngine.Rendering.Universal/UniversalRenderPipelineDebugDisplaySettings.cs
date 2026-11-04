// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplaySettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200006B")]
public class UniversalRenderPipelineDebugDisplaySettings : DebugDisplaySettings<UniversalRenderPipelineDebugDisplaySettings>
{
	[Token(Token = "0x170000BA")]
	private DebugDisplaySettingsCommon commonSettings
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000287")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public DebugDisplaySettingsMaterial materialSettings
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000289")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public DebugDisplaySettingsRendering renderingSettings
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public DebugDisplaySettingsLighting lightingSettings
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	public DebugDisplaySettingsVolume volumeSettings
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	internal DebugDisplaySettingsStats<URPProfileId> displayStats
	{
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000291")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	internal DebugDisplayGPUResidentDrawer gpuResidentDrawerSettings
	{
		[Token(Token = "0x6000292")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000293")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public override bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x2C33380", Offset = "0x2C31980", VA = "0x182C33380", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2C33320", Offset = "0x2C31920", VA = "0x182C33320")]
	public UniversalRenderPipelineDebugDisplaySettings()
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x2C32E60", Offset = "0x2C31460", VA = "0x182C32E60", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x2C33220", Offset = "0x2C31820", VA = "0x182C33220")]
	internal void UpdateDisplayStats()
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x2C33280", Offset = "0x2C31880", VA = "0x182C33280")]
	internal void UpdateMaterials()
	{
	}
}
