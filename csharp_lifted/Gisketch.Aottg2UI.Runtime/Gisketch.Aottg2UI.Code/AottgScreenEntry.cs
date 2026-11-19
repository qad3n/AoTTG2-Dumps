// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgScreenEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007B")]
public sealed class AottgScreenEntry
{
	[Token(Token = "0x1700005E")]
	public string Id
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x5263730", Offset = "0x5262730", VA = "0x5263730")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x1700005F")]
	public string Title
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x5263740", Offset = "0x5262740", VA = "0x5263740")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_Title): clean
			return this._Title_k__BackingField;
		}
	}

	[Token(Token = "0x17000060")]
	public string TitleKey
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x5263750", Offset = "0x5262750", VA = "0x5263750")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_TitleKey): clean
			return this._TitleKey_k__BackingField;
		}
	}

	[Token(Token = "0x17000061")]
	public string SearchTitle
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x5263760", Offset = "0x5262760", VA = "0x5263760")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_SearchTitle): clean
			return this._SearchTitle_k__BackingField;
		}
	}

	[Token(Token = "0x17000062")]
	public string SearchTitleKey
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x5263770", Offset = "0x5262770", VA = "0x5263770")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_SearchTitleKey): clean
			return this._SearchTitleKey_k__BackingField;
		}
	}

	[Token(Token = "0x17000063")]
	public string SearchGroup
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x5263780", Offset = "0x5262780", VA = "0x5263780")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_SearchGroup): clean
			return this._SearchGroup_k__BackingField;
		}
	}

	[Token(Token = "0x17000064")]
	public string BackScreenId
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x5263790", Offset = "0x5262790", VA = "0x5263790")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_BackScreenId): clean
			return this._BackScreenId_k__BackingField;
		}
	}

	[Token(Token = "0x17000065")]
	public string BackActionId
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x52637A0", Offset = "0x52627A0", VA = "0x52637A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_BackActionId): clean
			return this._BackActionId_k__BackingField;
		}
	}

	[Token(Token = "0x17000066")]
	public GisketchScreenLifecycle Lifecycle
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x52637B0", Offset = "0x52627B0", VA = "0x52637B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_Lifecycle): clean
			return this._Lifecycle_k__BackingField;
		}
	}

	[Token(Token = "0x17000067")]
	public Type Type
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x52637C0", Offset = "0x52627C0", VA = "0x52637C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$get_Type): clean
			return this._Type_k__BackingField;
		}
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x5263480", Offset = "0x5262480", VA = "0x5263480")]
	internal AottgScreenEntry(string id, string title, string titleKey, string searchTitle, string searchTitleKey, string searchGroup, string backScreenId, string backActionId, GisketchScreenLifecycle lifecycle, Type type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreenEntry.c (Gisketch.Aottg2UI.Code.AottgScreenEntry$$.ctor): clean
		base();
		this._Id_k__BackingField = id;
		this._Title_k__BackingField = title;
		this._TitleKey_k__BackingField = titleKey;
		this._SearchTitle_k__BackingField = searchTitle;
		this._SearchTitleKey_k__BackingField = searchTitleKey;
		this._SearchGroup_k__BackingField = searchGroup;
		this._BackScreenId_k__BackingField = backScreenId;
		this._BackActionId_k__BackingField = backActionId;
		this._Lifecycle_k__BackingField = lifecycle;
		this._Type_k__BackingField = type;
		return;
	}
}
