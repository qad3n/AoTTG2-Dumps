// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgPopoverEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007D")]
public sealed class AottgPopoverEntry
{
	[Token(Token = "0x1700006B")]
	public string Id
	{
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x5263800", Offset = "0x5262800", VA = "0x5263800")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverEntry.c (Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x1700006C")]
	public Type Type
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x5263810", Offset = "0x5262810", VA = "0x5263810")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverEntry.c (Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Type): clean
			return this._Type_k__BackingField;
		}
	}

	[Token(Token = "0x1700006D")]
	public AottgPopoverAttribute Attribute
	{
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x5263820", Offset = "0x5262820", VA = "0x5263820")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverEntry.c (Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Attribute): clean
			return this._Attribute_k__BackingField;
		}
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x52635F0", Offset = "0x52625F0", VA = "0x52635F0")]
	internal AottgPopoverEntry(string id, Type type, AottgPopoverAttribute attribute)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverEntry.c (Gisketch.Aottg2UI.Code.AottgPopoverEntry$$.ctor): clean
		base();
		this._Id_k__BackingField = id;
		this._Type_k__BackingField = type;
		this._Attribute_k__BackingField = attribute;
		return;
	}
}
