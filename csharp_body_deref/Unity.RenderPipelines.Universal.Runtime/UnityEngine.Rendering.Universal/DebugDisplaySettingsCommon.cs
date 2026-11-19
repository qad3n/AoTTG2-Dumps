// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x65FA2C0", Offset = "0x65F92C0", VA = "0x65FA2C0", Slot = "10")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x65F9F40", Offset = "0x65F8F40", VA = "0x65F9F40")]
		public SettingsPanel()
		{
		}
	}

	[Token(Token = "0x17000072")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x65F9EF0", Offset = "0x65F8EF0", VA = "0x65F9EF0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x65F9F00", Offset = "0x65F8F00", VA = "0x65F9F00", Slot = "4")]
	public IDebugDisplaySettingsPanelDisposable CreatePanel()
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x65FA2B0", Offset = "0x65F92B0", VA = "0x65FA2B0")]
	public DebugDisplaySettingsCommon()
	{
	}
}
