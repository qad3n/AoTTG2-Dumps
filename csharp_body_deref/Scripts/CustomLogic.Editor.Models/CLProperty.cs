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

[Token(Token = "0x2000671")]
internal class CLProperty : BaseModel
{
	[Token(Token = "0x17000AC7")]
	public TypeReference Type
	{
		[Token(Token = "0x6003DD9")]
		[Address(RVA = "0x5A97B50", Offset = "0x5A96B50", VA = "0x5A97B50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003DDA")]
		[Address(RVA = "0x5A97B60", Offset = "0x5A96B60", VA = "0x5A97B60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000AC8")]
	[JsonProperty("label")]
	public string Name
	{
		[Token(Token = "0x6003DDB")]
		[Address(RVA = "0x5A97B70", Offset = "0x5A96B70", VA = "0x5A97B70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003DDC")]
		[Address(RVA = "0x5A97B80", Offset = "0x5A96B80", VA = "0x5A97B80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000AC9")]
	public XmlInfo Info
	{
		[Token(Token = "0x6003DDD")]
		[Address(RVA = "0x5A97B90", Offset = "0x5A96B90", VA = "0x5A97B90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003DDE")]
		[Address(RVA = "0x5A97BA0", Offset = "0x5A96BA0", VA = "0x5A97BA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000ACA")]
	[JsonProperty("readonly")]
	public bool IsReadonly
	{
		[Token(Token = "0x6003DDF")]
		[Address(RVA = "0x5A97BB0", Offset = "0x5A96BB0", VA = "0x5A97BB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003DE0")]
		[Address(RVA = "0x5A97BC0", Offset = "0x5A96BC0", VA = "0x5A97BC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000ACB")]
	[JsonIgnore]
	public string[] EnumNames
	{
		[Token(Token = "0x6003DE1")]
		[Address(RVA = "0x5A97BD0", Offset = "0x5A96BD0", VA = "0x5A97BD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003DE2")]
		[Address(RVA = "0x5A97BE0", Offset = "0x5A96BE0", VA = "0x5A97BE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6003DE3")]
	[Address(RVA = "0x5A97BF0", Offset = "0x5A96BF0", VA = "0x5A97BF0")]
	public CLProperty()
	{
	}
}
