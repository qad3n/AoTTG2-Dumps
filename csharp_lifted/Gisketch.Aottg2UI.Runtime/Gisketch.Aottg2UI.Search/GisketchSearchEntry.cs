// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000037")]
public sealed class GisketchSearchEntry
{
	[Token(Token = "0x4000118")]
	private const string SectionIcon = "menuList";

	[Token(Token = "0x4000119")]
	private const string ButtonIcon = "buttonA";

	[Token(Token = "0x400011A")]
	private const string InputIcon = "open";

	[Token(Token = "0x400011B")]
	private const string SelectIcon = "arrowDown";

	[Token(Token = "0x17000023")]
	public GisketchNodeDefinition Node
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x52472A0", Offset = "0x52462A0", VA = "0x52472A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Node): clean
			return this._Node_k__BackingField;
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x52472B0", Offset = "0x52462B0", VA = "0x52472B0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$set_Node): clean
			this._Node_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000024")]
	public GameObject Target
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x52472C0", Offset = "0x52462C0", VA = "0x52472C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Target): clean
			return this._Target_k__BackingField;
		}
	}

	[Token(Token = "0x17000025")]
	public string ScreenId
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x52472D0", Offset = "0x52462D0", VA = "0x52472D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenId): clean
			return this._ScreenId_k__BackingField;
		}
	}

	[Token(Token = "0x17000026")]
	public string ScreenTitle
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x52472E0", Offset = "0x52462E0", VA = "0x52472E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenTitle): clean
			return this._ScreenTitle_k__BackingField;
		}
	}

	[Token(Token = "0x17000027")]
	public string SearchGroup
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x52472F0", Offset = "0x52462F0", VA = "0x52472F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SearchGroup): clean
			return this._SearchGroup_k__BackingField;
		}
	}

	[Token(Token = "0x17000028")]
	public string SectionId
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x5247300", Offset = "0x5246300", VA = "0x5247300")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionId): clean
			return this._SectionId_k__BackingField;
		}
	}

	[Token(Token = "0x17000029")]
	public string SectionTitle
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x5247310", Offset = "0x5246310", VA = "0x5247310")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionTitle): clean
			return this._SectionTitle_k__BackingField;
		}
	}

	[Token(Token = "0x1700002A")]
	public string TargetId
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x5247320", Offset = "0x5246320", VA = "0x5247320")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_TargetId): clean
			return this._TargetId_k__BackingField;
		}
	}

	[Token(Token = "0x1700002B")]
	public string Id
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x5247330", Offset = "0x5246330", VA = "0x5247330")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x1700002C")]
	public string Title
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x5247340", Offset = "0x5246340", VA = "0x5247340")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Title): clean
			return this._Title_k__BackingField;
		}
	}

	[Token(Token = "0x1700002D")]
	public string DisplayTitle
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x5247350", Offset = "0x5246350", VA = "0x5247350")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_DisplayTitle): clean
			String pSVar1;

			return pSVar1;
		}
	}

	[Token(Token = "0x1700002E")]
	public string Keywords
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x5247690", Offset = "0x5246690", VA = "0x5247690")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Keywords): clean
			return this._Keywords_k__BackingField;
		}
	}

	[Token(Token = "0x1700002F")]
	public string Icon
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x52476A0", Offset = "0x52466A0", VA = "0x52476A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Icon): clean
			return this._Icon_k__BackingField;
		}
	}

	[Token(Token = "0x17000030")]
	public string Kind
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x52476B0", Offset = "0x52466B0", VA = "0x52476B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Kind): clean
			return this._Kind_k__BackingField;
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x5246A10", Offset = "0x5245A10", VA = "0x5246A10")]
	public GisketchSearchEntry(GisketchNodeDefinition node, GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor): 15 lines keep C-only constructs
		String* ppSVar1;
		String screenId;
		GisketchSearchDefinition pGVar2;
		GisketchNodeDefinition pGVar3;
		String icon;
		GisketchSearchDefinition pGVar4;
		String* ppSVar5;
		String title;
		String kind;
		String sectionId;
		String sectionTitle;
		String targetId;
		bool bVar6;

		ppSVar1 = *(String**)(g_data_07556758 + 0xb8);
		screenId = *ppSVar1;
		if (node == null) {
			title = *ppSVar1;
			kind = (String)**(ulong*)(g_data_07556758 + 0xb8);
			icon = GisketchSearchEntry.IconForKind(kind);
			pGVar3 = *(GisketchNodeDefinition*)(g_data_07556758 + 0xb8);
			sectionId = screenId;
			sectionTitle = screenId;
			targetId = screenId;
			goto label_05346c0c;
		}
		targetId = node.id;
		pGVar4 = node.search;
		bVar6 = pGVar4 == null;
		ppSVar5 = &pGVar4.sectionId;
		if (bVar6) {
			ppSVar5 = ppSVar1;
		}
		sectionId = *ppSVar5;
		ppSVar5 = &pGVar4.sectionTitle;
		if (bVar6) {
			ppSVar5 = ppSVar1;
		}
		sectionTitle = *ppSVar5;
		if (bVar6) {
	label_05346a91: ;
			bVar6 = String.IsNullOrEmpty(node.text);
			if (!bVar6) {
				pGVar2 = (GisketchSearchDefinition)&node.text;
				goto label_05346b2d;
			}
			bVar6 = String.IsNullOrEmpty(node.placeholder);
			if (!bVar6) {
				pGVar2 = (GisketchSearchDefinition)&node.placeholder;
				goto label_05346b2d;
			}
			title = node.id;
			if (title == null) {
				pGVar2 = *(GisketchSearchDefinition*)(g_data_07556758 + 0xb8);
				goto label_05346b2d;
			}
		}
		else {
			bVar6 = String.IsNullOrEmpty(pGVar4.title);
			if (bVar6) goto label_05346a91;
			pGVar4 = node.search;
			if (pGVar4 == null) goto label_05346c53;
			pGVar2 = &pGVar4.fields;
	label_05346b2d: ;
			title = pGVar2.title;
		}
		pGVar4 = node.search;
		if (pGVar4 == null) {
			kind = (String)**(ulong*)(g_data_07556758 + 0xb8);
			goto label_05346b95;
		}
		kind = pGVar4.keywords;
		bVar6 = String.IsNullOrEmpty(pGVar4.icon);
		pGVar4 = node.search;
		if (bVar6) {
			if (pGVar4 == null) {
	label_05346b95: ;
				pGVar3 = &node.fields;
			}
			else {
				bVar6 = String.IsNullOrEmpty(pGVar4.kind);
				if (bVar6) goto label_05346b95;
				pGVar4 = node.search;
				if (pGVar4 == null) goto label_05346c53;
				pGVar3 = (GisketchNodeDefinition)&pGVar4.kind;
			}
			icon = GisketchSearchEntry.IconForKind(pGVar3.type);
			pGVar4 = node.search;
			if (pGVar4 != null) goto label_05346bbf;
	label_05346bce: ;
			pGVar3 = &node.fields;
		}
		else {
			if (pGVar4 == null) goto label_05346c53;
			icon = pGVar4.icon;
	label_05346bbf: ;
			bVar6 = String.IsNullOrEmpty(pGVar4.kind);
			if (bVar6) goto label_05346bce;
			pGVar4 = node.search;
			if (pGVar4 == null) {
	label_05346c53: ;
				throw new NullReferenceException();
			}
			pGVar3 = (GisketchNodeDefinition)&pGVar4.kind;
		}
	label_05346c0c: ;
		base(screenId, screenId, screenId, sectionId, sectionTitle, targetId, title, kind, icon, pGVar3.type, target);
		this._Node_k__BackingField = node;
		return;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x5246E10", Offset = "0x5245E10", VA = "0x5246E10")]
	public GisketchSearchEntry(string screenId, string screenTitle, string searchGroup, string sectionId, string sectionTitle, string targetId, string title, string keywords, string icon, string kind, [Optional] GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor): 5 lines keep C-only constructs
		String* targetAddress;
		bool bVar1;
		String* targetAddress_00;

		base();
		this._Target_k__BackingField = target;
		if (screenId == null) {
			screenId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		targetAddress_00 = &this._ScreenId_k__BackingField;
		this._ScreenId_k__BackingField = screenId;
		if (screenTitle == null) {
			screenTitle = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._ScreenTitle_k__BackingField = screenTitle;
		if (searchGroup == null) {
			searchGroup = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._SearchGroup_k__BackingField = searchGroup;
		if (sectionId == null) {
			sectionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._SectionId_k__BackingField = sectionId;
		if (sectionTitle == null) {
			sectionTitle = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._SectionTitle_k__BackingField = sectionTitle;
		if (targetId == null) {
			targetId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		targetAddress = &this._TargetId_k__BackingField;
		this._TargetId_k__BackingField = targetId;
		bVar1 = String.IsNullOrEmpty(this._TargetId_k__BackingField);
		if (!bVar1) {
			targetAddress_00 = targetAddress;
		}
		this._Id_k__BackingField = *targetAddress_00;
		if (title == null) {
			title = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._Title_k__BackingField = title;
		if (keywords == null) {
			keywords = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._Keywords_k__BackingField = keywords;
		bVar1 = String.IsNullOrEmpty(icon);
		if (bVar1) {
			icon = GisketchSearchEntry.IconForKind(kind);
		}
		this._Icon_k__BackingField = icon;
		if (kind == null) {
			kind = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._Kind_k__BackingField = kind;
		return;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x5247370", Offset = "0x5246370", VA = "0x5247370")]
	public string DisplayTitleFor(string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$DisplayTitleFor): clean
		bool bVar1;
		bool bVar2;
		String pSVar3;

		bVar1 = String.IsNullOrEmpty(this._ScreenId_k__BackingField);
		bVar2 = true;
		if (!bVar1) {
			bVar1 = String.IsNullOrEmpty(activeScreenId);
			if (!bVar1) {
				bVar2 = String.Equals(this._ScreenId_k__BackingField, activeScreenId, 5);
				bVar2 = !bVar2;
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x5246C60", Offset = "0x5245C60", VA = "0x5246C60")]
	private static string TitleFor(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$TitleFor): clean
		GisketchSearchDefinition pGVar1;
		String pSVar2;
		bool bVar3;

		if (node != null) {
			pGVar1 = node.search;
			if (pGVar1 != null) {
				bVar3 = String.IsNullOrEmpty(pGVar1.title);
				if (!bVar3) {
					pGVar1 = node.search;
					if (pGVar1 == null) {
						throw new NullReferenceException();
					}
					return pGVar1.title;
				}
			}
			bVar3 = String.IsNullOrEmpty(node.text);
			if (!bVar3) {
				return node.text;
			}
			bVar3 = String.IsNullOrEmpty(node.placeholder);
			if (!bVar3) {
				return node.placeholder;
			}
			pSVar2 = node.id;
			if (pSVar2 != null) {
				return pSVar2;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x5247360", Offset = "0x5246360", VA = "0x5247360")]
	private string PathTitle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x5247420", Offset = "0x5246420", VA = "0x5247420")]
	private string PathTitle(bool includeScreen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		String pSVar3;
		String[] values;
		String str2;

		bVar2 = true;
		if (includeScreen) {
			bVar2 = false;
			bVar1 = String.Equals(this._ScreenId_k__BackingField, "main-menu", 5);
			if (bVar1) {
				bVar2 = String.Equals(this._Kind_k__BackingField, "screen", 5);
				bVar2 = !bVar2;
			}
		}
		bVar1 = String.IsNullOrEmpty(this._ScreenTitle_k__BackingField);
		if (!bVar2) {
			pSVar3 = (&this._ScreenId_k__BackingField)[!bVar1];
			bVar2 = String.IsNullOrEmpty(pSVar3);
			if (!bVar2) {
				bVar2 = String.IsNullOrEmpty(pSVar3);
				if (bVar2) {
					return this._Title_k__BackingField;
				}
				bVar2 = String.IsNullOrEmpty(this._SectionTitle_k__BackingField);
				bVar1 = String.IsNullOrEmpty(this._Title_k__BackingField);
				if (bVar2) {
					if (bVar1) {
						return pSVar3;
					}
					bVar2 = (this._Title_k__BackingField == pSVar3);
					if (bVar2) {
						return pSVar3;
					}
					str2 = this._Title_k__BackingField;
				}
				else {
					if ((!bVar1) &&(bVar2 = (this._Title_k__BackingField == this._SectionTitle_k__BackingField), !bVar2)) {
						values = (String[])new string[5];
						if (values == null) {
							throw new NullReferenceException();
						}
						if ((int)values.Length != 0) {
							values[0] = pSVar3;
							if ((values.Length & 0xfffffffe) != 0) {
								values[1] = " > ";
								if (2 < (uint)values.Length) {
									values[2] = this._SectionTitle_k__BackingField;
									if ((values.Length & 0xfffffffc) != 0) {
										values[3] = " > ";
										if (4 < (uint)values.Length) {
											values[4] = this._Title_k__BackingField;
											pSVar3 = String.Concat(values);
											return pSVar3;
										}
									}
								}
							}
						}
						throw new IndexOutOfRangeException();
					}
					str2 = this._SectionTitle_k__BackingField;
				}
				goto label_053475b8;
			}
		}
		bVar2 = String.IsNullOrEmpty(this._SectionTitle_k__BackingField);
		pSVar3 = this._Title_k__BackingField;
		if (!bVar2) {
			bVar2 = String.IsNullOrEmpty(pSVar3);
			if ((!bVar2) &&(bVar2 = (this._Title_k__BackingField == this._SectionTitle_k__BackingField), !bVar2)) {
				pSVar3 = this._SectionTitle_k__BackingField;
				str2 = this._Title_k__BackingField;
	label_053475b8: ;
				pSVar3 = String.Concat(pSVar3, " > ", str2);
				return pSVar3;
			}
			pSVar3 = this._SectionTitle_k__BackingField;
		}
		return pSVar3;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x52476C0", Offset = "0x52466C0", VA = "0x52476C0")]
	private bool IsMainMenuChild()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsMainMenuChild): clean
		bool bVar1;
		bool bVar2;

		bVar2 = false;
		bVar1 = String.Equals(this._ScreenId_k__BackingField, "main-menu", 5);
		if (bVar1) {
			bVar2 = String.Equals(this._Kind_k__BackingField, "screen", 5);
			bVar2 = !bVar2;
		}
		return bVar2;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x52473D0", Offset = "0x52463D0", VA = "0x52473D0")]
	private bool IsActiveScreen(string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsActiveScreen): clean
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(this._ScreenId_k__BackingField);
		if (!bVar1) {
			bVar1 = String.IsNullOrEmpty(activeScreenId);
			if (!bVar1) {
				bVar1 = String.Equals(this._ScreenId_k__BackingField, activeScreenId, 5);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5246D00", Offset = "0x5245D00", VA = "0x5246D00")]
	private static string IconFor(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconFor): clean
		GisketchSearchDefinition pGVar1;
		bool bVar2;
		String pSVar3;

		if (node == null) {
			pSVar3 = GisketchSearchEntry.IconForKind((String)**(ulong*)(g_data_07556758 + 0xb8));
			return pSVar3;
		}
		pGVar1 = node.search;
		if (pGVar1 != null) {
			bVar2 = String.IsNullOrEmpty(pGVar1.icon);
			pGVar1 = node.search;
			if (!bVar2) {
				if (pGVar1 != null) {
					return pGVar1.icon;
				}
	label_05346d8e: ;
				throw new NullReferenceException();
			}
			if (pGVar1 != null) {
				bVar2 = String.IsNullOrEmpty(pGVar1.kind);
				if (!bVar2) {
					pGVar1 = node.search;
					if (pGVar1 != null) {
						return pSVar3;
					}
					goto label_05346d8e;
				}
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5246DA0", Offset = "0x5245DA0", VA = "0x5246DA0")]
	private static string KindFor(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$KindFor): clean
		GisketchSearchDefinition pGVar1;
		bool bVar2;

		if (node == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pGVar1 = node.search;
		if (pGVar1 != null) {
			bVar2 = String.IsNullOrEmpty(pGVar1.kind);
			if (!bVar2) {
				pGVar1 = node.search;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				return pGVar1.kind;
			}
		}
		return node.type;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x52470A0", Offset = "0x52460A0", VA = "0x52470A0")]
	private static string IconForKind(string kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchEntry.c (Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconForKind): 1 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;

		bVar1 = String.Equals(kind, "section", 5);
		ppSVar2 = &"menuList";
		if (!bVar1) {
			bVar1 = String.Equals(kind, "screen", 5);
			if (!bVar1) {
				bVar1 = String.Equals(kind, "setting", 5);
				if (!bVar1) {
					bVar1 = String.Equals(kind, "InputField", 5);
					ppSVar2 = &"open";
					if (!bVar1) {
						bVar1 = String.Equals(kind, "TextArea", 5);
						if (!bVar1) {
							bVar1 = String.Equals(kind, "input", 5);
							if (!bVar1) {
								bVar1 = String.Equals(kind, "Dropdown", 5);
								ppSVar2 = &"arrowDown";
								if (!bVar1) {
									bVar1 = String.Equals(kind, "Select", 5);
									if (!bVar1) {
										bVar1 = String.Equals(kind, "select", 5);
										if (bVar1) {
											ppSVar2 = &"arrowDown";
										}
										else {
											ppSVar2 = &"buttonA";
										}
									}
								}
							}
						}
					}
				}
			}
		}
		return *ppSVar2;
	}
}
