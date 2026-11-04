// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgPopover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007E")]
public abstract class AottgPopover
{
	[Token(Token = "0x1700007D")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x18C6320", Offset = "0x18C4920", VA = "0x1818C6320", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x18C6220", Offset = "0x18C4820", VA = "0x1818C6220", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003BD")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x18C6030", Offset = "0x18C4630", VA = "0x1818C6030")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgPopoverAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AottgPopover()
	{
	}
}
