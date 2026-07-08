using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000025")]
public sealed class GisketchSearchEntry
{
	[Token(Token = "0x40000C3")]
	private const string SectionIcon = "menuList";

	[Token(Token = "0x40000C4")]
	private const string ButtonIcon = "buttonA";

	[Token(Token = "0x40000C5")]
	private const string InputIcon = "open";

	[Token(Token = "0x40000C6")]
	private const string SelectIcon = "arrowDown";

	[Token(Token = "0x17000013")]
	public GisketchNodeDefinition Node
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x39DCD70", Offset = "0x39DCD70", VA = "0x39DCD70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x39DCD80", Offset = "0x39DCD80", VA = "0x39DCD80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public GameObject Target
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x39DCD90", Offset = "0x39DCD90", VA = "0x39DCD90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public string ScreenId
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x39DCDA0", Offset = "0x39DCDA0", VA = "0x39DCDA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public string ScreenTitle
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x39DCDB0", Offset = "0x39DCDB0", VA = "0x39DCDB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public string SearchGroup
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x39DCDC0", Offset = "0x39DCDC0", VA = "0x39DCDC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public string SectionId
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x39DCDD0", Offset = "0x39DCDD0", VA = "0x39DCDD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public string SectionTitle
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x39DCDE0", Offset = "0x39DCDE0", VA = "0x39DCDE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public string TargetId
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x39DCDF0", Offset = "0x39DCDF0", VA = "0x39DCDF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public string Id
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x39DCE00", Offset = "0x39DCE00", VA = "0x39DCE00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	public string Title
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x39DCE10", Offset = "0x39DCE10", VA = "0x39DCE10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public string DisplayTitle
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x39DCE20", Offset = "0x39DCE20", VA = "0x39DCE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public string Keywords
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x39DD150", Offset = "0x39DD150", VA = "0x39DD150")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public string Icon
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x39DD160", Offset = "0x39DD160", VA = "0x39DD160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000020")]
	public string Kind
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x39DD170", Offset = "0x39DD170", VA = "0x39DD170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x39DC4F0", Offset = "0x39DC4F0", VA = "0x39DC4F0")]
	public GisketchSearchEntry(GisketchNodeDefinition node, GameObject target)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x39DC900", Offset = "0x39DC900", VA = "0x39DC900")]
	public GisketchSearchEntry(string screenId, string screenTitle, string searchGroup, string sectionId, string sectionTitle, string targetId, string title, string keywords, string icon, string kind, [Optional] GameObject target)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x39DCE40", Offset = "0x39DCE40", VA = "0x39DCE40")]
	public string DisplayTitleFor(string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x39DC750", Offset = "0x39DC750", VA = "0x39DC750")]
	private static string TitleFor(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x39DCE30", Offset = "0x39DCE30", VA = "0x39DCE30")]
	private string PathTitle()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x39DCEE0", Offset = "0x39DCEE0", VA = "0x39DCEE0")]
	private string PathTitle(bool includeScreen)
	{
		return null;
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x39DD180", Offset = "0x39DD180", VA = "0x39DD180")]
	private bool IsMainMenuChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x39DCE90", Offset = "0x39DCE90", VA = "0x39DCE90")]
	private bool IsActiveScreen(string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x39DC7F0", Offset = "0x39DC7F0", VA = "0x39DC7F0")]
	private static string IconFor(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x39DC890", Offset = "0x39DC890", VA = "0x39DC890")]
	private static string KindFor(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x39DCB90", Offset = "0x39DCB90", VA = "0x39DCB90")]
	private static string IconForKind(string kind)
	{
		return null;
	}
}
