// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200002C")]
public class DebugDisplaySettingsLighting : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x200002D")]
	internal static class Strings
	{
		[Token(Token = "0x4000110")]
		[FieldOffset(Offset = "0x0")]
		public static readonly DebugUI.Widget.NameAndTooltip LightingDebugMode;

		[Token(Token = "0x4000111")]
		[FieldOffset(Offset = "0x10")]
		public static readonly DebugUI.Widget.NameAndTooltip LightingFeatures;

		[Token(Token = "0x4000112")]
		[FieldOffset(Offset = "0x20")]
		public static readonly DebugUI.Widget.NameAndTooltip HDRDebugMode;
	}

	[Token(Token = "0x200002E")]
	internal static class WidgetFactory
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x65FA840", Offset = "0x65F9840", VA = "0x65FA840")]
		internal static DebugUI.Widget CreateLightingDebugMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000102")]
		[Address(RVA = "0x65FAAD0", Offset = "0x65F9AD0", VA = "0x65FAAD0")]
		internal static DebugUI.Widget CreateLightingFeatures(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000103")]
		[Address(RVA = "0x65FACD0", Offset = "0x65F9CD0", VA = "0x65FACD0")]
		internal static DebugUI.Widget CreateHDRDebugMode(SettingsPanel panel)
		{
			return null;
		}
	}

	[Token(Token = "0x2000032")]
	[DisplayInfo(name = "Lighting", order = 3)]
	internal class SettingsPanel : DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>
	{
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x65FA490", Offset = "0x65F9490", VA = "0x65FA490")]
		public SettingsPanel(DebugDisplaySettingsLighting data)
		{
		}
	}

	[Token(Token = "0x17000074")]
	public DebugLightingMode lightingDebugMode
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x65FA3A0", Offset = "0x65F93A0", VA = "0x65FA3A0")]
		[CompilerGenerated]
		get
		{
			return default(DebugLightingMode);
		}
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x65FA3B0", Offset = "0x65F93B0", VA = "0x65FA3B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public DebugLightingFeatureFlags lightingFeatureFlags
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x65FA3C0", Offset = "0x65F93C0", VA = "0x65FA3C0")]
		[CompilerGenerated]
		get
		{
			return default(DebugLightingFeatureFlags);
		}
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x65FA3D0", Offset = "0x65F93D0", VA = "0x65FA3D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public HDRDebugMode hdrDebugMode
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x65FA3E0", Offset = "0x65F93E0", VA = "0x65FA3E0")]
		[CompilerGenerated]
		get
		{
			return default(HDRDebugMode);
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x65FA3F0", Offset = "0x65F93F0", VA = "0x65FA3F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x65FA400", Offset = "0x65F9400", VA = "0x65FA400", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x65FA420", Offset = "0x65F9420", VA = "0x65FA420", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	public bool IsLightingActive
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x65FA430", Offset = "0x65F9430", VA = "0x65FA430", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x65FA440", Offset = "0x65F9440", VA = "0x65FA440", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x65FA690", Offset = "0x65F9690", VA = "0x65FA690")]
	public DebugDisplaySettingsLighting()
	{
	}
}
