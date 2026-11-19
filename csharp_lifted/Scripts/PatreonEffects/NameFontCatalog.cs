// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameFontCatalog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameFontCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using TMPro;

namespace PatreonEffects;

[Token(Token = "0x200008C")]
public static class NameFontCatalog
{
	[Token(Token = "0x40002EB")]
	public const string Normal = "Normal";

	[Token(Token = "0x40002EC")]
	public const string Aottg2 = "Aottg2";

	[Token(Token = "0x40002ED")]
	public const string Serif = "Serif";

	[Token(Token = "0x40002EE")]
	public const string EightBit = "EightBit";

	[Token(Token = "0x40002EF")]
	public const string Comics = "Comics";

	[Token(Token = "0x40002F0")]
	public const string Jacquard = "Jacquard";

	[Token(Token = "0x40002F1")]
	public const string Pixelify = "Pixelify";

	[Token(Token = "0x40002F2")]
	public const string Oxanium = "Oxanium";

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, TMP_FontAsset> Cache;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] Ids;

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x58C7C60", Offset = "0x58C6C60", VA = "0x58C7C60")]
	public static string Label(string id)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Label): 1 lines keep C-only constructs
		bool bVar1;
		String a;
		String* ppSVar2;

		a = NameFontCatalog.Normalize(id);
		bVar1 = (a == "Aottg2");
		if (bVar1) {
			ppSVar2 = &"AoTTG 2";
		}
		else {
			bVar1 = (a == "EightBit");
			if (bVar1) {
				ppSVar2 = &"LED";
			}
			else {
				bVar1 = (a == "Jacquard");
				if (bVar1) {
					ppSVar2 = &"Old Pixel";
				}
				else {
					bVar1 = (a == "Pixelify");
					if (bVar1) {
						ppSVar2 = &"8-Bit";
					}
					else {
						bVar1 = (a == "Oxanium");
						if (!bVar1) {
							return a;
						}
						ppSVar2 = &"Tech";
					}
				}
			}
		}
		return *ppSVar2;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x58C7DD0", Offset = "0x58C6DD0", VA = "0x58C7DD0")]
	public static string Normalize(string id)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Normalize): clean
		bool bVar1;

		bVar1 = (id == "Aottg2");
		if (!bVar1) {
			bVar1 = (id == "Serif");
			if (!bVar1) {
				bVar1 = (id == "EightBit");
				if (!bVar1) {
					bVar1 = (id == "Comics");
					if (!bVar1) {
						bVar1 = (id == "Jacquard");
						if (!bVar1) {
							bVar1 = (id == "Pixelify");
							if (!bVar1) {
								bVar1 = (id == "Oxanium");
								if (!bVar1) {
									id = "Normal";
								}
							}
						}
					}
				}
			}
		}
		return id;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x58C13E0", Offset = "0x58C03E0", VA = "0x58C13E0")]
	public static TMP_FontAsset Load(string id)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Load): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		MethodInfo a;
		TMP_FontAsset pTVar3;
		String path;
		TMP_FontAsset local_20;

		local_20 = null;
		a = (MethodInfo)NameFontCatalog.Normalize(id);
		bVar2 = ((String)a == "Normal");
		if (bVar2) {
			pTVar3 = GisketchTypography.Resolve("text", 400, null);
			return pTVar3;
		}
		pSVar1 = (Dictionary<object, object>)NameFontCatalog.Cache;
		if (pSVar1 == null) {
	label_059c15b9: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.TryGetValue((object)a, (object*)&local_20);
		if (bVar2) {
			pTVar3 = local_20;
		}
		else {
			path = NameFontCatalog.Path((String)a);
			pTVar3 = Resources.Load<TMP_FontAsset>(path);
			bVar2 = ((Object)pTVar3 == null);
			if (bVar2) {
				pTVar3 = GisketchTypography.Resolve("text", 400, null);
			}
			else {
				pSVar1 = (Dictionary<object, object>)NameFontCatalog.Cache;
				if (pSVar1 == null) goto label_059c15b9;
				pSVar1.set_Item((object)a, (object)pTVar3);
			}
		}
		return pTVar3;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x58C80E0", Offset = "0x58C70E0", VA = "0x58C80E0")]
	public static void Apply(TMP_Text text, string id)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Apply): clean
		bool bVar1;
		String text_00;
		TMP_FontAsset pTVar2;

		bVar1 = ((Object)text == null);
		if (!bVar1) {
			if (text == null) {
				throw new NullReferenceException();
			}
			text_00 = text.get_text();
			pTVar2 = NameFontCatalog.Load(id);
			pTVar2 = GisketchTypography.ForText(text_00, pTVar2);
			bVar1 = ((Object)pTVar2 != null);
			if (bVar1) {
				text.font = pTVar2;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x58C81E0", Offset = "0x58C71E0", VA = "0x58C81E0")]
	public static void Apply(TMP_InputField input, string id)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Apply): 8 lines keep C-only constructs
		byte bVar1;
		TMP_Text pTVar2;
		bool bVar3;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo pMVar4;
		TMP_Text text;

		bVar3 = ((Object)input == null);
		if (bVar3) {
			return;
		}
		if (input == null) {
			throw new NullReferenceException();
		}
		pTVar2 = input.m_TextComponent;
		pMVar4 = extraout_RDX;
		if ((typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor == 0) {
			pMVar4 = extraout_RDX_00;
		}
		NameFontCatalog.Apply(pTVar2, id);
		pTVar2 = (TMP_Text)input.m_Placeholder;
		pMVar4 = extraout_RDX_01;
		if (pTVar2 != null) {
			bVar1 = (typeof(TMP_Text)._2).typeHierarchyDepth;
			pMVar4 = (MethodInfo)(ulong)bVar1;
			if (bVar1 <= (pTVar2.klass._2).typeHierarchyDepth) {
				text = null;
				if ((pTVar2.klass._2).typeHierarchy[(long)&pMVar4[-1].field_0x57] ==typeof(TMP_Text)) {
					text = pTVar2;
				}
				goto label_059c82ba;
			}
		}
		text = null;
	label_059c82ba: ;
		NameFontCatalog.Apply(text, id);
		input.ForceLabelUpdate();
		return;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x58C12E0", Offset = "0x58C02E0", VA = "0x58C12E0")]
	public static TMP_FontAsset FontForPlayer(Player player, bool guild)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$FontForPlayer): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		ProfileSettings pSVar3;
		StringSetting pSVar4;
		TMP_FontAsset pTVar5;
		String id;
		undefined3 in_register_00000031;
		uint uVar6;

		uVar6 = CONCAT31(in_register_00000031, guild);
		if ((player == null) ||(bVar2 = PatreonHelper.HasNameEffectAccess(player), !bVar2)) {
			id = "Normal";
			goto label_059c13ce;
		}
		if ((typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor == 0) {
			pSVar3 = NameFontCatalog.Profile(player);
			if (pSVar3 == null) goto label_059c1392;
	label_059c134e: ;
			if (guild) {
				pSVar4 = pSVar3.GuildFont;
			}
			else {
				pSVar4 = pSVar3.NameFont;
			}
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar3 = NameFontCatalog.Profile(player);
			if (pSVar3 != null) goto label_059c134e;
	label_059c1392: ;
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
			id = "Normal";
		}
		if (uVar1 == 0) {
		}
	label_059c13ce: ;
		return pTVar5;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x58C82E0", Offset = "0x58C72E0", VA = "0x58C82E0")]
	private static ProfileSettings Profile(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Profile): 2 lines keep C-only constructs
		bool bVar1;
		Dictionary<int, object> __this;
		object local_18;

		local_18 = null;
		if ((player != null) &&(__this = *(Dictionary<int, object>*)((long)(typeof(InGameManager)).static_fields + 0x28), __this != null)) {
			if (((typeof(InGameManager))._2).cctor_finished_or_no_cctor == 0) {
				__this = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
				if (__this == null) {
					throw new NullReferenceException();
				}
			}
			bVar1 = __this.TryGetValue(player.actorNumber, ref local_18);
			if ((bVar1) && (local_18 != null)) {
				local_18 = local_18 + 3;
				goto label_059c83c6;
			}
		}
		if ((player == null) || (player.IsLocal == false)) {
			return null;
		}
		local_18 = (object)&SettingsManager.ProfileSettings;
	label_059c83c6: ;
		return (ProfileSettings)local_18.klass;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x58C7F10", Offset = "0x58C6F10", VA = "0x58C7F10")]
	private static string Path(string id)
	{
		// Lifted from source/cpp/PatreonEffects/NameFontCatalog.c (PatreonEffects.NameFontCatalog$$Path): 1 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;

		bVar1 = (id == "Serif");
		if (bVar1) {
			ppSVar2 = &"UI/Fonts/IBMPlexSerif-SemiBold SDF";
		}
		else {
			bVar1 = (id == "Aottg2");
			if (bVar1) {
				ppSVar2 = &"UI/Fonts/header SDF";
			}
			else {
				bVar1 = (id == "EightBit");
				if (bVar1) {
					ppSVar2 = &"UI/Fonts/BitcountSingle-Regular SDF";
				}
				else {
					bVar1 = (id == "Comics");
					if (bVar1) {
						ppSVar2 = &"UI/Fonts/ComicRelief-Bold SDF";
					}
					else {
						bVar1 = (id == "Jacquard");
						if (bVar1) {
							ppSVar2 = &"UI/Fonts/Jacquard12-Regular SDF";
						}
						else {
							bVar1 = (id == "Pixelify");
							if (bVar1) {
								ppSVar2 = &"UI/Fonts/PixelifySans-Regular SDF";
							}
							else {
								bVar1 = (id == "Oxanium");
								if (!bVar1) {
									return null;
								}
								ppSVar2 = &"UI/Fonts/Oxanium-SemiBold SDF";
							}
						}
					}
				}
			}
		}
		return *ppSVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/PatreonEffects/NameFontCatalog.c.

	// PatreonEffects.NameFontCatalog$$.cctor: clean
	static NameFontCatalog()
	{
		Dictionary<string, TMP_FontAsset> __this;
		String[] pSVar2;

		__this = new Dictionary<string, TMP_FontAsset>() ;
		NameFontCatalog.Cache = __this;
		pSVar2 = (String[])new string[8];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "Normal";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "Aottg2";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "Serif";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "EightBit";
						if (4 < (uint)pSVar2.Length) {
							pSVar2[4] = "Comics";
							if (5 < (uint)pSVar2.Length) {
								pSVar2[5] = "Jacquard";
								if (6 < (uint)pSVar2.Length) {
									pSVar2[6] = "Pixelify";
									if ((pSVar2.Length & 0xfffffff8) != 0) {
										pSVar2[7] = "Oxanium";
										NameFontCatalog.Ids = pSVar2;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
