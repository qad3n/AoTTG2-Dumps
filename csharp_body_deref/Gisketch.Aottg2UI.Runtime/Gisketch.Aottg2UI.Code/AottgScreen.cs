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

[Token(Token = "0x200006B")]
public abstract class AottgScreen
{
	[Token(Token = "0x1700005B")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x3A60E60", Offset = "0x3A60E60", VA = "0x3A60E60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x3A60E90", Offset = "0x3A60E90", VA = "0x3A60E90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002DD")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3A61020", Offset = "0x3A61020", VA = "0x3A61020")]
	internal GisketchScreenDefinition BuildDefinition(string id, string title, string searchTitle, string searchGroup, string backScreenId, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3A61260", Offset = "0x3A61260", VA = "0x3A61260")]
	protected AottgScreen()
	{
	}
}
