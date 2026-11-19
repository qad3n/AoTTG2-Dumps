// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.CLMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/CLMethod.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x200066F")]
internal class CLMethod : BaseModel
{
	[Token(Token = "0x17000ABC")]
	public CLParameter[] Parameters
	{
		[Token(Token = "0x6003DC1")]
		[Address(RVA = "0x5A979D0", Offset = "0x5A969D0", VA = "0x5A979D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$get_Parameters): clean
			return this._Parameters_k__BackingField;
		}
		[Token(Token = "0x6003DC2")]
		[Address(RVA = "0x5A979E0", Offset = "0x5A969E0", VA = "0x5A979E0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$set_Parameters): clean
			this._Parameters_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000ABD")]
	public TypeReference ReturnType
	{
		[Token(Token = "0x6003DC3")]
		[Address(RVA = "0x5A979F0", Offset = "0x5A969F0", VA = "0x5A979F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$get_ReturnType): clean
			return this._ReturnType_k__BackingField;
		}
		[Token(Token = "0x6003DC4")]
		[Address(RVA = "0x5A97A00", Offset = "0x5A96A00", VA = "0x5A97A00")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$set_ReturnType): clean
			this._ReturnType_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000ABE")]
	[JsonProperty("label")]
	public string Name
	{
		[Token(Token = "0x6003DC5")]
		[Address(RVA = "0x5A97A10", Offset = "0x5A96A10", VA = "0x5A97A10")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$get_Name): clean
			return this._Name_k__BackingField;
		}
		[Token(Token = "0x6003DC6")]
		[Address(RVA = "0x5A97A20", Offset = "0x5A96A20", VA = "0x5A97A20")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$set_Name): clean
			this._Name_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000ABF")]
	public XmlInfo Info
	{
		[Token(Token = "0x6003DC7")]
		[Address(RVA = "0x5A97A30", Offset = "0x5A96A30", VA = "0x5A97A30")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$get_Info): clean
			return this._Info_k__BackingField;
		}
		[Token(Token = "0x6003DC8")]
		[Address(RVA = "0x5A97A40", Offset = "0x5A96A40", VA = "0x5A97A40")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$set_Info): clean
			this._Info_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003DC9")]
	[Address(RVA = "0x5A97A50", Offset = "0x5A96A50", VA = "0x5A97A50")]
	public CLMethod()
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/CLMethod.c (CustomLogic.Editor.Models.CLMethod$$.ctor): clean
		base();
		return;
	}
}
