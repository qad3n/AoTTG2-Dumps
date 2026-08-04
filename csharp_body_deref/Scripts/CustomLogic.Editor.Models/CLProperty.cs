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

[Token(Token = "0x20004BD")]
internal class CLProperty : BaseModel
{
	[Token(Token = "0x17000988")]
	public TypeReference Type
	{
		[Token(Token = "0x60031D8")]
		[Address(RVA = "0x4186D20", Offset = "0x4186D20", VA = "0x4186D20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60031D9")]
		[Address(RVA = "0x4186D30", Offset = "0x4186D30", VA = "0x4186D30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000989")]
	[JsonProperty("label")]
	public string Name
	{
		[Token(Token = "0x60031DA")]
		[Address(RVA = "0x4186D40", Offset = "0x4186D40", VA = "0x4186D40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60031DB")]
		[Address(RVA = "0x4186D50", Offset = "0x4186D50", VA = "0x4186D50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700098A")]
	public XmlInfo Info
	{
		[Token(Token = "0x60031DC")]
		[Address(RVA = "0x4186D60", Offset = "0x4186D60", VA = "0x4186D60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60031DD")]
		[Address(RVA = "0x4186D70", Offset = "0x4186D70", VA = "0x4186D70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700098B")]
	[JsonProperty("readonly")]
	public bool IsReadonly
	{
		[Token(Token = "0x60031DE")]
		[Address(RVA = "0x4186D80", Offset = "0x4186D80", VA = "0x4186D80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60031DF")]
		[Address(RVA = "0x4186D90", Offset = "0x4186D90", VA = "0x4186D90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700098C")]
	[JsonIgnore]
	public string[] EnumNames
	{
		[Token(Token = "0x60031E0")]
		[Address(RVA = "0x4186DA0", Offset = "0x4186DA0", VA = "0x4186DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60031E1")]
		[Address(RVA = "0x4186DB0", Offset = "0x4186DB0", VA = "0x4186DB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60031E2")]
	[Address(RVA = "0x4186DC0", Offset = "0x4186DC0", VA = "0x4186DC0")]
	public CLProperty()
	{
	}
}
