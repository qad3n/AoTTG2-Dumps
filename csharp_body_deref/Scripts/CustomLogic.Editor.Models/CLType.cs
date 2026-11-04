// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.CLType
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/CLType.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000613")]
internal class CLType : BaseModel
{
	[Token(Token = "0x17000A84")]
	public string Name
	{
		[Token(Token = "0x6003B56")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B57")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A85")]
	public XmlInfo Info
	{
		[Token(Token = "0x6003B58")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B59")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A86")]
	[JsonIgnore]
	public bool IsStatic
	{
		[Token(Token = "0x6003B5A")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B5B")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A87")]
	[JsonIgnore]
	public bool IsAbstract
	{
		[Token(Token = "0x6003B5C")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B5D")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A88")]
	[JsonIgnore]
	public bool InheritBaseMembers
	{
		[Token(Token = "0x6003B5E")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B5F")]
		[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A89")]
	[JsonIgnore]
	public bool IsComponent
	{
		[Token(Token = "0x6003B60")]
		[Address(RVA = "0x20FB1B0", Offset = "0x20F97B0", VA = "0x1820FB1B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B61")]
		[Address(RVA = "0x20FB210", Offset = "0x20F9810", VA = "0x1820FB210")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8A")]
	[JsonIgnore]
	public string[] TypeParameters
	{
		[Token(Token = "0x6003B62")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B63")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8B")]
	[JsonIgnore]
	public string Category
	{
		[Token(Token = "0x6003B64")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B65")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8C")]
	[JsonIgnore]
	public CLType BaseType
	{
		[Token(Token = "0x6003B66")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B67")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8D")]
	[JsonIgnore]
	public (string Name, string Path)[] LinkedPrefabs
	{
		[Token(Token = "0x6003B68")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B69")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8E")]
	public CLConstructor[] Constructors
	{
		[Token(Token = "0x6003B6A")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B6B")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8F")]
	[JsonProperty("staticFields")]
	public CLProperty[] StaticProperties
	{
		[Token(Token = "0x6003B6C")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B6D")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A90")]
	[JsonProperty("instanceFields")]
	public CLProperty[] InstanceProperties
	{
		[Token(Token = "0x6003B6E")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B6F")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A91")]
	public CLMethod[] StaticMethods
	{
		[Token(Token = "0x6003B70")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B71")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A92")]
	public CLMethod[] InstanceMethods
	{
		[Token(Token = "0x6003B72")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B73")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A93")]
	public string Kind
	{
		[Token(Token = "0x6003B74")]
		[Address(RVA = "0x20FB1C0", Offset = "0x20F97C0", VA = "0x1820FB1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A94")]
	public string BaseTypeName
	{
		[Token(Token = "0x6003B75")]
		[Address(RVA = "0x20FB180", Offset = "0x20F9780", VA = "0x1820FB180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003B76")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CLType()
	{
	}
}
