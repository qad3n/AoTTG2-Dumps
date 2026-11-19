// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000037")]
public sealed class GisketchSearchEntry
{
	[Token(Token = "0x4000118")]
	private const string SectionIcon = "menuList";

	[Token(Token = "0x4000119")]
	private const string ButtonIcon = "buttonA";

	[Token(Token = "0x400011A")]
	private const string InputIcon = "open";

	[Token(Token = "0x400011B")]
	private const string SelectIcon = "arrowDown";

	[Token(Token = "0x17000023")]
	public GisketchNodeDefinition Node
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x52472A0", Offset = "0x52462A0", VA = "0x52472A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x52472B0", Offset = "0x52462B0", VA = "0x52472B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public GameObject Target
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x52472C0", Offset = "0x52462C0", VA = "0x52472C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public string ScreenId
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x52472D0", Offset = "0x52462D0", VA = "0x52472D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public string ScreenTitle
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x52472E0", Offset = "0x52462E0", VA = "0x52472E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public string SearchGroup
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x52472F0", Offset = "0x52462F0", VA = "0x52472F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public string SectionId
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x5247300", Offset = "0x5246300", VA = "0x5247300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	public string SectionTitle
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x5247310", Offset = "0x5246310", VA = "0x5247310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public string TargetId
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x5247320", Offset = "0x5246320", VA = "0x5247320")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002B")]
	public string Id
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x5247330", Offset = "0x5246330", VA = "0x5247330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public string Title
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x5247340", Offset = "0x5246340", VA = "0x5247340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public string DisplayTitle
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x5247350", Offset = "0x5246350", VA = "0x5247350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public string Keywords
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x5247690", Offset = "0x5246690", VA = "0x5247690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public string Icon
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x52476A0", Offset = "0x52466A0", VA = "0x52476A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public string Kind
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x52476B0", Offset = "0x52466B0", VA = "0x52476B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x5246A10", Offset = "0x5245A10", VA = "0x5246A10")]
	public GisketchSearchEntry(GisketchNodeDefinition node, GameObject target)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x5246E10", Offset = "0x5245E10", VA = "0x5246E10")]
	public GisketchSearchEntry(string screenId, string screenTitle, string searchGroup, string sectionId, string sectionTitle, string targetId, string title, string keywords, string icon, string kind, [Optional] GameObject target)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x5247370", Offset = "0x5246370", VA = "0x5247370")]
	public string DisplayTitleFor(string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x5246C60", Offset = "0x5245C60", VA = "0x5246C60")]
	private static string TitleFor(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x5247360", Offset = "0x5246360", VA = "0x5247360")]
	private string PathTitle()
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x5247420", Offset = "0x5246420", VA = "0x5247420")]
	private string PathTitle(bool includeScreen)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x52476C0", Offset = "0x52466C0", VA = "0x52476C0")]
	private bool IsMainMenuChild()
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x52473D0", Offset = "0x52463D0", VA = "0x52473D0")]
	private bool IsActiveScreen(string activeScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5246D00", Offset = "0x5245D00", VA = "0x5246D00")]
	private static string IconFor(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5246DA0", Offset = "0x5245DA0", VA = "0x5246DA0")]
	private static string KindFor(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x52470A0", Offset = "0x52460A0", VA = "0x52470A0")]
	private static string IconForKind(string kind)
	{
		return null;
	}
}
