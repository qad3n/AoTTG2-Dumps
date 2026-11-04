// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettingsRenderGraph
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200015E")]
internal class DebugDisplaySettingsRenderGraph : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x200015F")]
	[DisplayInfo(name = "Rendering", order = 10)]
	private class SettingsPanel : DebugDisplaySettingsPanel
	{
		[Token(Token = "0x6000B50")]
		[Address(RVA = "0x2B33070", Offset = "0x2B31670", VA = "0x182B33070")]
		public SettingsPanel(DebugDisplaySettingsRenderGraph _)
		{
		}
	}

	[Token(Token = "0x1700014E")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x2B1F610", Offset = "0x2B1DC10", VA = "0x182B1F610", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x2B1F4C0", Offset = "0x2B1DAC0", VA = "0x182B1F4C0")]
	public DebugDisplaySettingsRenderGraph()
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x2B1F460", Offset = "0x2B1DA60", VA = "0x182B1F460", Slot = "4")]
	private IDebugDisplaySettingsPanelDisposable UnityEngine_002ERendering_002EIDebugDisplaySettingsData_002ECreatePanel()
	{
		return null;
	}
}
