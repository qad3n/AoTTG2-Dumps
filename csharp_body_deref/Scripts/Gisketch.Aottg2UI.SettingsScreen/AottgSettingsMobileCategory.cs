// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UI;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000196")]
internal static class AottgSettingsMobileCategory
{
	[Token(Token = "0x2000197")]
	private sealed class LayoutRow : AottgComponent
	{
		[Token(Token = "0x40008F2")]
		[FieldOffset(Offset = "0x10")]
		private readonly MobileInputLayoutRole _role;

		[Token(Token = "0x60008E1")]
		[Address(RVA = "0x5D48EB0", Offset = "0x5D47EB0", VA = "0x5D48EB0")]
		internal LayoutRow(MobileInputLayoutRole role)
		{
		}

		[Token(Token = "0x60008E2")]
		[Address(RVA = "0x5D48F80", Offset = "0x5D47F80", VA = "0x5D48F80", Slot = "4")]
		public override void Build(AottgUi ui)
		{
		}
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x5D48200", Offset = "0x5D47200", VA = "0x5D48200")]
	internal static void Build(AottgUi ui, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x5D48E90", Offset = "0x5D47E90", VA = "0x5D48E90")]
	internal static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x5D482D0", Offset = "0x5D472D0", VA = "0x5D482D0")]
	private static AottgSettingsGroup[] Groups()
	{
		return null;
	}
}
