// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000080")]
public abstract class AottgDialog
{
	[Token(Token = "0x1700006E")]
	protected virtual string Title
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x5264650", Offset = "0x5263650", VA = "0x5264650", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	protected virtual string TitleIcon
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x5264670", Offset = "0x5263670", VA = "0x5264670", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x5264680", Offset = "0x5263680", VA = "0x5264680", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	protected virtual string HeaderStyle
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x52646B0", Offset = "0x52636B0", VA = "0x52646B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	protected virtual string BodyStyle
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x52646E0", Offset = "0x52636E0", VA = "0x52646E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	protected virtual string FooterStyle
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x5264710", Offset = "0x5263710", VA = "0x5264710", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	protected virtual string HeaderCloseEnabledKey
	{
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x5264740", Offset = "0x5263740", VA = "0x5264740", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	protected virtual string HeaderTitleKey
	{
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x5264750", Offset = "0x5263750", VA = "0x5264750", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	protected virtual bool GuardUnsavedChanges
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x5264760", Offset = "0x5263760", VA = "0x5264760", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000077")]
	protected virtual bool BodyScrollable
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x5264770", Offset = "0x5263770", VA = "0x5264770", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	protected virtual AottgButtonVariant Variant
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x5264780", Offset = "0x5263780", VA = "0x5264780", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000079")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x5264790", Offset = "0x5263790", VA = "0x5264790", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	protected virtual GisketchLayoutDefinition HeaderLayout
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x5264850", Offset = "0x5263850", VA = "0x5264850", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	protected virtual GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x5264900", Offset = "0x5263900", VA = "0x5264900", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	protected virtual GisketchLayoutDefinition FooterLayout
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x52649B0", Offset = "0x52639B0", VA = "0x52649B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x5264A80", Offset = "0x5263A80", VA = "0x5264A80", Slot = "19")]
	protected virtual void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x5264BB0", Offset = "0x5263BB0", VA = "0x5264BB0", Slot = "20")]
	protected virtual void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x5264BC0", Offset = "0x5263BC0", VA = "0x5264BC0", Slot = "21")]
	protected virtual void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x52640F0", Offset = "0x52630F0", VA = "0x52640F0")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgDialogAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x5264BF0", Offset = "0x5263BF0", VA = "0x5264BF0")]
	private static void AddSection(List<GisketchNodeDefinition> children, string id, string style, GisketchLayoutDefinition layout, Action<AottgUi> build, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x5265010", Offset = "0x5264010", VA = "0x5265010")]
	private void AddFooter(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x5264D40", Offset = "0x5263D40", VA = "0x5264D40")]
	private void AddBody(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x5265200", Offset = "0x5264200", VA = "0x5265200")]
	private static GisketchNodeDefinition Wrap(string id, string style, GisketchNodeDefinition[] children, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5264BD0", Offset = "0x5263BD0", VA = "0x5264BD0")]
	private static GisketchLayoutDefinition Fixed(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5265360", Offset = "0x5264360", VA = "0x5265360")]
	private static GisketchLayoutDefinition ScrollBodyLayout()
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x52652D0", Offset = "0x52642D0", VA = "0x52652D0")]
	private static GisketchLayoutDefinition BodyPanelLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5265440", Offset = "0x5264440", VA = "0x5265440")]
	private static GisketchLayoutDefinition Copy(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5265590", Offset = "0x5264590", VA = "0x5265590")]
	protected AottgDialog()
	{
	}
}
