// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.CLConstructor
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/CLConstructor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x200066E")]
internal class CLConstructor : BaseModel
{
	[Token(Token = "0x17000ABA")]
	public CLParameter[] Parameters
	{
		[Token(Token = "0x6003DBC")]
		[Address(RVA = "0x5A97980", Offset = "0x5A96980", VA = "0x5A97980")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLConstructor.c (CustomLogic.Editor.Models.CLConstructor$$get_Parameters): clean
			return this._Parameters_k__BackingField;
		}
		[Token(Token = "0x6003DBD")]
		[Address(RVA = "0x5A97990", Offset = "0x5A96990", VA = "0x5A97990")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLConstructor.c (CustomLogic.Editor.Models.CLConstructor$$set_Parameters): clean
			this._Parameters_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000ABB")]
	public XmlInfo Info
	{
		[Token(Token = "0x6003DBE")]
		[Address(RVA = "0x5A979A0", Offset = "0x5A969A0", VA = "0x5A979A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLConstructor.c (CustomLogic.Editor.Models.CLConstructor$$get_Info): clean
			return this._Info_k__BackingField;
		}
		[Token(Token = "0x6003DBF")]
		[Address(RVA = "0x5A979B0", Offset = "0x5A969B0", VA = "0x5A979B0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/CLConstructor.c (CustomLogic.Editor.Models.CLConstructor$$set_Info): clean
			this._Info_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003DC0")]
	[Address(RVA = "0x5A979C0", Offset = "0x5A969C0", VA = "0x5A979C0")]
	public CLConstructor()
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/CLConstructor.c (CustomLogic.Editor.Models.CLConstructor$$.ctor): clean
		base();
		return;
	}
}
