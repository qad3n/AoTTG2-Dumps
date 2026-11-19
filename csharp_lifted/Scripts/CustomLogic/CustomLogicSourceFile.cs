// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSourceFile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSourceFile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000645")]
public class CustomLogicSourceFile
{
	[Token(Token = "0x17000A84")]
	public string Name
	{
		[Token(Token = "0x6003C7B")]
		[Address(RVA = "0x5A7F3A0", Offset = "0x5A7E3A0", VA = "0x5A7F3A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_Name): clean
			return this._Name_k__BackingField;
		}
	}

	[Token(Token = "0x17000A85")]
	public string Content
	{
		[Token(Token = "0x6003C7C")]
		[Address(RVA = "0x5A7F3B0", Offset = "0x5A7E3B0", VA = "0x5A7F3B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_Content): clean
			return this._Content_k__BackingField;
		}
	}

	[Token(Token = "0x17000A86")]
	public CustomLogicSourceType Type
	{
		[Token(Token = "0x6003C7D")]
		[Address(RVA = "0x5A7F3C0", Offset = "0x5A7E3C0", VA = "0x5A7F3C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_Type): clean
			return this._Type_k__BackingField;
		}
	}

	[Token(Token = "0x17000A87")]
	public int StartLine
	{
		[Token(Token = "0x6003C7E")]
		[Address(RVA = "0x5A7F3D0", Offset = "0x5A7E3D0", VA = "0x5A7F3D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_StartLine): clean
			return this._StartLine_k__BackingField;
		}
		[Token(Token = "0x6003C7F")]
		[Address(RVA = "0x5A7F3E0", Offset = "0x5A7E3E0", VA = "0x5A7F3E0")]
		[CompilerGenerated]
		internal set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$set_StartLine): clean
			this._StartLine_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A88")]
	public int EndLine
	{
		[Token(Token = "0x6003C80")]
		[Address(RVA = "0x5A7F3F0", Offset = "0x5A7E3F0", VA = "0x5A7F3F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_EndLine): clean
			return this._EndLine_k__BackingField;
		}
		[Token(Token = "0x6003C81")]
		[Address(RVA = "0x5A7F400", Offset = "0x5A7E400", VA = "0x5A7F400")]
		[CompilerGenerated]
		internal set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$set_EndLine): clean
			this._EndLine_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A89")]
	public int MapLogicOffset
	{
		[Token(Token = "0x6003C82")]
		[Address(RVA = "0x5A7F410", Offset = "0x5A7E410", VA = "0x5A7F410")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_MapLogicOffset): clean
			return this._MapLogicOffset_k__BackingField;
		}
		[Token(Token = "0x6003C83")]
		[Address(RVA = "0x5A7F420", Offset = "0x5A7E420", VA = "0x5A7F420")]
		[CompilerGenerated]
		internal set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$set_MapLogicOffset): clean
			this._MapLogicOffset_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A8A")]
	public int LineCount
	{
		[Token(Token = "0x6003C86")]
		[Address(RVA = "0x5A73560", Offset = "0x5A72560", VA = "0x5A73560")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$get_LineCount): clean
			String __this_00;
			String[] pSVar1;

			__this_00 = this._Content_k__BackingField;
			if (__this_00 != null) {
				pSVar1 = __this_00.Split(10, 0);
				if (pSVar1 != null) {
					return (int32_t)pSVar1.Length;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x6003C84")]
	[Address(RVA = "0x5A77EC0", Offset = "0x5A76EC0", VA = "0x5A77EC0")]
	public CustomLogicSourceFile(string name, string content, CustomLogicSourceType type)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$.ctor): clean
		base();
		this._Name_k__BackingField = name;
		this._Content_k__BackingField = content;
		this._Type_k__BackingField = type;
		this._StartLine_k__BackingField = 0;
		this._EndLine_k__BackingField = 0;
		this._MapLogicOffset_k__BackingField = 0;
		return;
	}

	[Token(Token = "0x6003C85")]
	[Address(RVA = "0x5A7A2A0", Offset = "0x5A792A0", VA = "0x5A7A2A0")]
	public CustomLogicSourceFile(string name, string content, CustomLogicSourceType type, int mapLogicOffset)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSourceFile.c (CustomLogic.CustomLogicSourceFile$$.ctor): clean
		base();
		this._Name_k__BackingField = name;
		this._Content_k__BackingField = content;
		this._Type_k__BackingField = type;
		this._StartLine_k__BackingField = 0;
		this._EndLine_k__BackingField = 0;
		this._MapLogicOffset_k__BackingField = mapLogicOffset;
		return;
	}
}
