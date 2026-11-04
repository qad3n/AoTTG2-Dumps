// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.CLProperty
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/CLProperty.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000612")]
internal class CLProperty : BaseModel
{
	[Token(Token = "0x17000A7F")]
	public TypeReference Type
	{
		[Token(Token = "0x6003B4B")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B4C")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A80")]
	[JsonProperty("label")]
	public string Name
	{
		[Token(Token = "0x6003B4D")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B4E")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A81")]
	public XmlInfo Info
	{
		[Token(Token = "0x6003B4F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B50")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A82")]
	[JsonProperty("readonly")]
	public bool IsReadonly
	{
		[Token(Token = "0x6003B51")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B52")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A83")]
	[JsonIgnore]
	public string[] EnumNames
	{
		[Token(Token = "0x6003B53")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003B54")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6003B55")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CLProperty()
	{
	}
}
