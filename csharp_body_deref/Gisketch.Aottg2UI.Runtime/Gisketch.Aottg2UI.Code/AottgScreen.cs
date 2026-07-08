using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000069")]
public abstract class AottgScreen
{
	[Token(Token = "0x17000059")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x39F5CA0", Offset = "0x39F5CA0", VA = "0x39F5CA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x39F5CD0", Offset = "0x39F5CD0", VA = "0x39F5CD0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002CD")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x39F5E60", Offset = "0x39F5E60", VA = "0x39F5E60")]
	internal GisketchScreenDefinition BuildDefinition(string id, string title, string searchTitle, string searchGroup, string backScreenId, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x39F60A0", Offset = "0x39F60A0", VA = "0x39F60A0")]
	protected AottgScreen()
	{
	}
}
