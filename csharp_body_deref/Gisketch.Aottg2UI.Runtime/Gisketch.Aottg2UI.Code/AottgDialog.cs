// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000066")]
public abstract class AottgDialog
{
	[Token(Token = "0x1700004B")]
	protected virtual string Title
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x3A5DFA0", Offset = "0x3A5DFA0", VA = "0x3A5DFA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	protected virtual string TitleIcon
	{
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x3A5DFC0", Offset = "0x3A5DFC0", VA = "0x3A5DFC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x3A5DFD0", Offset = "0x3A5DFD0", VA = "0x3A5DFD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	protected virtual string HeaderStyle
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x3A5E000", Offset = "0x3A5E000", VA = "0x3A5E000", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	protected virtual string BodyStyle
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x3A5E030", Offset = "0x3A5E030", VA = "0x3A5E030", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	protected virtual string FooterStyle
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x3A5E060", Offset = "0x3A5E060", VA = "0x3A5E060", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000051")]
	protected virtual string HeaderCloseEnabledKey
	{
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x3A5E090", Offset = "0x3A5E090", VA = "0x3A5E090", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	protected virtual string HeaderTitleKey
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x3A5E0A0", Offset = "0x3A5E0A0", VA = "0x3A5E0A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	protected virtual bool BodyScrollable
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x3A5E0B0", Offset = "0x3A5E0B0", VA = "0x3A5E0B0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000054")]
	protected virtual AottgButtonVariant Variant
	{
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x3A5E0C0", Offset = "0x3A5E0C0", VA = "0x3A5E0C0", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000055")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x3A5E0D0", Offset = "0x3A5E0D0", VA = "0x3A5E0D0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	protected virtual GisketchLayoutDefinition HeaderLayout
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x3A5E4A0", Offset = "0x3A5E4A0", VA = "0x3A5E4A0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	protected virtual GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x3A5E560", Offset = "0x3A5E560", VA = "0x3A5E560", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	protected virtual GisketchLayoutDefinition FooterLayout
	{
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x3A5E620", Offset = "0x3A5E620", VA = "0x3A5E620", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x3A5E6F0", Offset = "0x3A5E6F0", VA = "0x3A5E6F0", Slot = "18")]
	protected virtual void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x3A5E960", Offset = "0x3A5E960", VA = "0x3A5E960", Slot = "19")]
	protected virtual void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x3A5E970", Offset = "0x3A5E970", VA = "0x3A5E970", Slot = "20")]
	protected virtual void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x3A5E980", Offset = "0x3A5E980", VA = "0x3A5E980")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgDialogAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3A5EC90", Offset = "0x3A5EC90", VA = "0x3A5EC90")]
	private static void AddSection(List<GisketchNodeDefinition> children, string id, string style, GisketchLayoutDefinition layout, Action<AottgUi> build, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x3A5F190", Offset = "0x3A5F190", VA = "0x3A5F190")]
	private void AddFooter(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x3A5EE30", Offset = "0x3A5EE30", VA = "0x3A5EE30")]
	private void AddBody(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x3A5F510", Offset = "0x3A5F510", VA = "0x3A5F510")]
	private static GisketchNodeDefinition Wrap(string id, string style, GisketchNodeDefinition[] children, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x3A5EC70", Offset = "0x3A5EC70", VA = "0x3A5EC70")]
	private static GisketchLayoutDefinition Fixed(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x3A5F780", Offset = "0x3A5F780", VA = "0x3A5F780")]
	private static GisketchLayoutDefinition ScrollBodyLayout()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x3A5F620", Offset = "0x3A5F620", VA = "0x3A5F620")]
	private static GisketchLayoutDefinition BodyPanelLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x3A5F920", Offset = "0x3A5F920", VA = "0x3A5F920")]
	private static GisketchLayoutDefinition Copy(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x3A5FB10", Offset = "0x3A5FB10", VA = "0x3A5FB10")]
	protected AottgDialog()
	{
	}
}
