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

[Token(Token = "0x2000084")]
public abstract class AottgPopover
{
	[Token(Token = "0x1700007D")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x5266DB0", Offset = "0x5265DB0", VA = "0x5266DB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x5266DE0", Offset = "0x5265DE0", VA = "0x5266DE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000409")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x5266F90", Offset = "0x5265F90", VA = "0x5266F90")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgPopoverAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x5267280", Offset = "0x5266280", VA = "0x5267280")]
	protected AottgPopover()
	{
	}
}
