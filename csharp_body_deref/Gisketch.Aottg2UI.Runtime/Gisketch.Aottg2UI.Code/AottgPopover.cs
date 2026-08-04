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

[Token(Token = "0x200006A")]
public abstract class AottgPopover
{
	[Token(Token = "0x17000059")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x3A60B00", Offset = "0x3A60B00", VA = "0x3A60B00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x3A60B30", Offset = "0x3A60B30", VA = "0x3A60B30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002D8")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x3A60C60", Offset = "0x3A60C60", VA = "0x3A60C60")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgPopoverAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3A60E50", Offset = "0x3A60E50", VA = "0x3A60E50")]
	protected AottgPopover()
	{
	}
}
