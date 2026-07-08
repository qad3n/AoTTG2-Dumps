using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000064")]
public abstract class AottgDialog
{
	[Token(Token = "0x1700004A")]
	protected virtual string Title
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x39F3510", Offset = "0x39F3510", VA = "0x39F3510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	protected virtual string TitleIcon
	{
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x39F3530", Offset = "0x39F3530", VA = "0x39F3530", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x39F3540", Offset = "0x39F3540", VA = "0x39F3540", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	protected virtual string HeaderStyle
	{
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x39F3570", Offset = "0x39F3570", VA = "0x39F3570", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	protected virtual string BodyStyle
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x39F35A0", Offset = "0x39F35A0", VA = "0x39F35A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	protected virtual string FooterStyle
	{
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x39F35D0", Offset = "0x39F35D0", VA = "0x39F35D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	protected virtual string HeaderCloseEnabledKey
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x39F3600", Offset = "0x39F3600", VA = "0x39F3600", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000051")]
	protected virtual bool BodyScrollable
	{
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x39F3610", Offset = "0x39F3610", VA = "0x39F3610", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000052")]
	protected virtual AottgButtonVariant Variant
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x39F3620", Offset = "0x39F3620", VA = "0x39F3620", Slot = "12")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000053")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x39F3630", Offset = "0x39F3630", VA = "0x39F3630", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	protected virtual GisketchLayoutDefinition HeaderLayout
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x39F3700", Offset = "0x39F3700", VA = "0x39F3700", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	protected virtual GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x39F37C0", Offset = "0x39F37C0", VA = "0x39F37C0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	protected virtual GisketchLayoutDefinition FooterLayout
	{
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x39F3880", Offset = "0x39F3880", VA = "0x39F3880", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x39F3950", Offset = "0x39F3950", VA = "0x39F3950", Slot = "17")]
	protected virtual void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x39F3A60", Offset = "0x39F3A60", VA = "0x39F3A60", Slot = "18")]
	protected virtual void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x39F3A70", Offset = "0x39F3A70", VA = "0x39F3A70", Slot = "19")]
	protected virtual void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x39F2FD0", Offset = "0x39F2FD0", VA = "0x39F2FD0")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgDialogAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x39F3AA0", Offset = "0x39F3AA0", VA = "0x39F3AA0")]
	private static void AddSection(List<GisketchNodeDefinition> children, string id, string style, GisketchLayoutDefinition layout, Action<AottgUi> build, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x39F3ED0", Offset = "0x39F3ED0", VA = "0x39F3ED0")]
	private void AddFooter(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x39F3BF0", Offset = "0x39F3BF0", VA = "0x39F3BF0")]
	private void AddBody(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x39F40C0", Offset = "0x39F40C0", VA = "0x39F40C0")]
	private static GisketchNodeDefinition Wrap(string id, string style, GisketchNodeDefinition[] children, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x39F3A80", Offset = "0x39F3A80", VA = "0x39F3A80")]
	private static GisketchLayoutDefinition Fixed(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x39F4230", Offset = "0x39F4230", VA = "0x39F4230")]
	private static GisketchLayoutDefinition ScrollBodyLayout()
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x39F41A0", Offset = "0x39F41A0", VA = "0x39F41A0")]
	private static GisketchLayoutDefinition BodyPanelLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x39F4310", Offset = "0x39F4310", VA = "0x39F4310")]
	private static GisketchLayoutDefinition Copy(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x39F4470", Offset = "0x39F4470", VA = "0x39F4470")]
	protected AottgDialog()
	{
	}
}
