// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000029")]
internal class DebugDisplaySettingsCommon : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x200002A")]
	[DisplayInfo(name = "Frequently Used", order = -1)]
	private class SettingsPanel : DebugDisplaySettingsPanel
	{
		[Token(Token = "0x400010B")]
		private const string k_GoToSectionString = "Go to Section...";

		[Token(Token = "0x17000073")]
		public override DebugUI.Flags Flags
		{
			[Token(Token = "0x60000F1")]
			[Address(RVA = "0x846EF0", Offset = "0x8454F0", VA = "0x180846EF0", Slot = "10")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x2C08CB0", Offset = "0x2C072B0", VA = "0x182C08CB0")]
		public SettingsPanel()
		{
		}
	}

	[Token(Token = "0x17000072")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2BFF920", Offset = "0x2BFDF20", VA = "0x182BFF920", Slot = "4")]
	public IDebugDisplaySettingsPanelDisposable CreatePanel()
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugDisplaySettingsCommon()
	{
	}
}
