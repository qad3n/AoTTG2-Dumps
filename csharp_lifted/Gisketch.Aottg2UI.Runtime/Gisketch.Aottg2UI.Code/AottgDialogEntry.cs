// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007C")]
public sealed class AottgDialogEntry
{
	[Token(Token = "0x17000068")]
	public string Id
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x52637D0", Offset = "0x52627D0", VA = "0x52637D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogEntry.c (Gisketch.Aottg2UI.Code.AottgDialogEntry$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x17000069")]
	public Type Type
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x52637E0", Offset = "0x52627E0", VA = "0x52637E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogEntry.c (Gisketch.Aottg2UI.Code.AottgDialogEntry$$get_Type): clean
			return this._Type_k__BackingField;
		}
	}

	[Token(Token = "0x1700006A")]
	public AottgDialogAttribute Attribute
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x52637F0", Offset = "0x52627F0", VA = "0x52637F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogEntry.c (Gisketch.Aottg2UI.Code.AottgDialogEntry$$get_Attribute): clean
			return this._Attribute_k__BackingField;
		}
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x5263590", Offset = "0x5262590", VA = "0x5263590")]
	internal AottgDialogEntry(string id, Type type, AottgDialogAttribute attribute)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogEntry.c (Gisketch.Aottg2UI.Code.AottgDialogEntry$$.ctor): clean
		base();
		this._Id_k__BackingField = id;
		this._Type_k__BackingField = type;
		this._Attribute_k__BackingField = attribute;
		return;
	}
}
