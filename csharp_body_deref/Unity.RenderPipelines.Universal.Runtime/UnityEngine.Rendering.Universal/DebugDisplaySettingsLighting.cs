// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C14070", Offset = "0x2C12670", VA = "0x182C14070")]
		internal static DebugUI.Widget CreateLightingDebugMode(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000102")]
		[Address(RVA = "0x2C142F0", Offset = "0x2C128F0", VA = "0x182C142F0")]
		internal static DebugUI.Widget CreateLightingFeatures(SettingsPanel panel)
		{
			return null;
		}

		[Token(Token = "0x6000103")]
		[Address(RVA = "0x2C13C40", Offset = "0x2C12240", VA = "0x182C13C40")]
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
		[Address(RVA = "0x2C08FE0", Offset = "0x2C075E0", VA = "0x182C08FE0")]
		public SettingsPanel(DebugDisplaySettingsLighting data)
		{
		}
	}

	[Token(Token = "0x17000074")]
	public DebugLightingMode lightingDebugMode
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(DebugLightingMode);
		}
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public DebugLightingFeatureFlags lightingFeatureFlags
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(DebugLightingFeatureFlags);
		}
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public HDRDebugMode hdrDebugMode
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(HDRDebugMode);
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x2BFF9D0", Offset = "0x2BFDFD0", VA = "0x182BFF9D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x2BFF9F0", Offset = "0x2BFDFF0", VA = "0x182BFF9F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	public bool IsLightingActive
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2BFF970", Offset = "0x2BFDF70", VA = "0x182BFF970", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugDisplaySettingsLighting()
	{
	}
}
