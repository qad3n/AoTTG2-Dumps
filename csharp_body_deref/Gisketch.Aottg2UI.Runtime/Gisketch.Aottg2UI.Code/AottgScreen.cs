// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000085")]
public abstract class AottgScreen
{
	[Token(Token = "0x1700007F")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x5267290", Offset = "0x5266290", VA = "0x5267290", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x52672C0", Offset = "0x52662C0", VA = "0x52672C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600040E")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x5267440", Offset = "0x5266440", VA = "0x5267440")]
	internal GisketchScreenDefinition BuildDefinition(string id, string title, string titleKey, string searchTitle, string searchTitleKey, string searchGroup, string backScreenId, string backActionId, GisketchScreenLifecycle lifecycle, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x5267750", Offset = "0x5266750", VA = "0x5267750")]
	private static string Localized(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x52677C0", Offset = "0x52667C0", VA = "0x52677C0")]
	protected AottgScreen()
	{
	}
}
