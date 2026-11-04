// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007F")]
public abstract class AottgScreen
{
	[Token(Token = "0x1700007F")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x18C6830", Offset = "0x18C4E30", VA = "0x1818C6830", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x18C6720", Offset = "0x18C4D20", VA = "0x1818C6720", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C2")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x18C6430", Offset = "0x18C4A30", VA = "0x1818C6430")]
	internal GisketchScreenDefinition BuildDefinition(string id, string title, string titleKey, string searchTitle, string searchTitleKey, string searchGroup, string backScreenId, string backActionId, GisketchScreenLifecycle lifecycle, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x18C66A0", Offset = "0x18C4CA0", VA = "0x1818C66A0")]
	private static string Localized(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AottgScreen()
	{
	}
}
