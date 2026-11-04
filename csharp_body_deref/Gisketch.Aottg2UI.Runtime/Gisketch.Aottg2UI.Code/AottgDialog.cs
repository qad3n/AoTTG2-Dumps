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

[Token(Token = "0x200007A")]
public abstract class AottgDialog
{
	[Token(Token = "0x1700006E")]
	protected virtual string Title
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	protected virtual string TitleIcon
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x18C5FE0", Offset = "0x18C45E0", VA = "0x1818C5FE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	protected virtual string HeaderStyle
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x18C5EB0", Offset = "0x18C44B0", VA = "0x1818C5EB0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000072")]
	protected virtual string BodyStyle
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x18C5C60", Offset = "0x18C4260", VA = "0x1818C5C60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	protected virtual string FooterStyle
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x18C5D90", Offset = "0x18C4390", VA = "0x1818C5D90", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	protected virtual string HeaderCloseEnabledKey
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	protected virtual string HeaderTitleKey
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	protected virtual bool GuardUnsavedChanges
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000077")]
	protected virtual bool BodyScrollable
	{
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	protected virtual AottgButtonVariant Variant
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000079")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x18C5EE0", Offset = "0x18C44E0", VA = "0x1818C5EE0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	protected virtual GisketchLayoutDefinition HeaderLayout
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x18C5DC0", Offset = "0x18C43C0", VA = "0x1818C5DC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	protected virtual GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x18C5B70", Offset = "0x18C4170", VA = "0x1818C5B70", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	protected virtual GisketchLayoutDefinition FooterLayout
	{
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x18C5C90", Offset = "0x18C4290", VA = "0x1818C5C90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x18C55A0", Offset = "0x18C3BA0", VA = "0x1818C55A0", Slot = "19")]
	protected virtual void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	protected virtual void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	protected virtual void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x18C4FE0", Offset = "0x18C35E0", VA = "0x1818C4FE0")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgDialogAttribute attribute, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x18C4E30", Offset = "0x18C3430", VA = "0x1818C4E30")]
	private static void AddSection(List<GisketchNodeDefinition> children, string id, string style, GisketchLayoutDefinition layout, Action<AottgUi> build, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x18C4C50", Offset = "0x18C3250", VA = "0x1818C4C50")]
	private void AddFooter(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x18C4830", Offset = "0x18C2E30", VA = "0x1818C4830")]
	private void AddBody(List<GisketchNodeDefinition> children, string id, AottgActionRegistry actions)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x18C5A90", Offset = "0x18C4090", VA = "0x1818C5A90")]
	private static GisketchNodeDefinition Wrap(string id, string style, GisketchNodeDefinition[] children, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x18C5980", Offset = "0x18C3F80", VA = "0x1818C5980")]
	private static GisketchLayoutDefinition Fixed(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x18C59B0", Offset = "0x18C3FB0", VA = "0x1818C59B0")]
	private static GisketchLayoutDefinition ScrollBodyLayout()
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x18C4F60", Offset = "0x18C3560", VA = "0x1818C4F60")]
	private static GisketchLayoutDefinition BodyPanelLayout(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x18C57E0", Offset = "0x18C3DE0", VA = "0x1818C57E0")]
	private static GisketchLayoutDefinition Copy(GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AottgDialog()
	{
	}
}
