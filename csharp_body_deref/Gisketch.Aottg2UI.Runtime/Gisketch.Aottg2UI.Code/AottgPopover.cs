using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000068")]
public abstract class AottgPopover
{
	[Token(Token = "0x17000057")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x39F57C0", Offset = "0x39F57C0", VA = "0x39F57C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x39F57F0", Offset = "0x39F57F0", VA = "0x39F57F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002C8")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x39F59B0", Offset = "0x39F59B0", VA = "0x39F59B0")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgPopoverAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x39F5C90", Offset = "0x39F5C90", VA = "0x39F5C90")]
	protected AottgPopover()
	{
	}
}
