// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000326")]
internal sealed class AottgProfileSocialLinksEditor : AottgComponent
{
	[Token(Token = "0x4000FCC")]
	private const int MaxLinks = 8;

	[Token(Token = "0x4000FCD")]
	private const string RootId = "profile-details-socials";

	[Token(Token = "0x4000FCE")]
	private const string RowsDraftKey = "profile-details-socials-rows";

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x5807F90", Offset = "0x5806F90", VA = "0x5807F90", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Build): 3 lines keep C-only constructs
		AottgProfileSocialLinksEditor.c__DisplayClass3_0 __this_00;
		String[] collection;
		List<string> __this_01;
		Action<AottgUi> __this_02;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		if (Il2CppMethodInitialized_0754566c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0_Build_b__0) ;
			Il2CppMethodInitialized_0754566c = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgProfileSocialLinksEditor.c__DisplayClass3_0));
		__this_00 = new Object();
		collection = AottgActiveProfile.SocialLinks();
		__this_01 = new List<string>((IEnumerable<T>)collection);
		if (__this_00 != null) {
			__this_00.links = __this_01;
			__this_02 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass3_0_Build_b__0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				ui.Panel("default", __this_02, "profile-details-socials", layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x5808190", Offset = "0x5807190", VA = "0x5808190")]
	private static void SocialRow(AottgUi ui, int index, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SocialRow): 5 lines keep C-only constructs
		bool bVar1;
		AottgProfileSocialLinksEditor.c__DisplayClass4_0 __this;
		Action<AottgUi> __this_00;
		String pSVar2;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		String* targetAddress;
		int local_34;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgProfileSocialLinksEditor.c__DisplayClass4_0));
		__this = new Object();
		if (__this != null) {
			__this.index = index;
			targetAddress = &__this.value;
			__this.value = value;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__0);
			local_34 = __this.index;
			pSVar2 = local_34.ToString();
			pSVar2 = String.Concat("profile-details-social-row-", pSVar2);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				pGVar3 = ui.Panel("default", __this_00, pSVar2, layout, null);
				bVar1 = String.IsNullOrWhiteSpace(*targetAddress);
				if (pGVar3 != null) {
					pGVar3.active = !bVar1;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x5808400", Offset = "0x5807400", VA = "0x5808400")]
	private static void AddRow(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$AddRow): clean
		bool bVar1;
		Transform pUVar2;
		String pSVar3;
		Object x;
		int iVar4;
		int iStack_3c;
		GameObject pUStack_38;

		pUVar2 = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if ((context.GameObject == null) ||(pUVar2 = context.GameObject.transform, pUVar2 == null)) {
	label_05908581: ;
				throw new NullReferenceException();
			}
			pUVar2 = pUVar2.root;
		}
		pUStack_38 = context.GameObject;
		iVar4 = 0;
		bVar1 = ((Object)pUVar2 == null);
		if (!bVar1) {
			do {
				iStack_3c = iVar4;
				pSVar3 = iStack_3c.ToString();
				pSVar3 = String.Concat("profile-details-social-row-", pSVar3);
				x = (Object)AottgProfileSocialLinksEditor.Find(pUVar2, pSVar3);
				bVar1 = (x != null);
				if (bVar1) {
					if (x == null) goto label_05908581;
					bVar1 = x.activeSelf;
					if (!bVar1) {
						x.SetActive(true);
						AottgProfileSocialLinksEditor.SyncRowsDraft(pUStack_38);
						return;
					}
				}
				iVar4 = iVar4 + 1;
			} while (iVar4 != 8);
		}
		return;
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x58088A0", Offset = "0x58078A0", VA = "0x58088A0")]
	private static void RemoveRow(GisketchActionContext context, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RemoveRow): clean
		bool bVar1;
		Transform pUVar2;
		String pSVar3;
		TMP_InputField __this;
		Object x;
		int iStack_30;
		int iStack_2c;

		pUVar2 = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) goto label_05908a97;
			pUVar2 = context.GameObject.transform;
			if (pUVar2 == null) goto label_05908a97;
			pUVar2 = pUVar2.root;
		}
		bVar1 = ((Object)pUVar2 == null);
		if (!bVar1) {
			iStack_30 = index;
			pSVar3 = iStack_30.ToString();
			pSVar3 = String.Concat("profile-details-social-", pSVar3);
			__this = AottgProfileSocialLinksEditor.FindComponent<TMP_InputField>(pUVar2, pSVar3);
			bVar1 = ((Object)__this != null);
			if (bVar1) {
				if (__this == null) goto label_05908a97;
				__this.SetTextWithoutNotify((String)**(ulong*)(g_data_07556758 + 0xb8));
			}
			iStack_2c = index;
			pSVar3 = iStack_2c.ToString();
			pSVar3 = String.Concat("profile-details-social-row-", pSVar3);
			x = (Object)AottgProfileSocialLinksEditor.Find(pUVar2, pSVar3);
			bVar1 = (x != null);
			if (bVar1) {
				if (x == null) {
	label_05908a97: ;
					throw new NullReferenceException();
				}
				x.SetActive(false);
			}
			AottgProfileSocialLinksEditor.SyncRowsDraft(context.GameObject);
		}
		return;
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x5808590", Offset = "0x5807590", VA = "0x5808590")]
	private static GameObject Find(Transform root, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Find): clean
		uint uVar1;
		Object x;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		Object __this;
		String a;
		GameObject pUVar5;
		ulong uVar6;

		if (root != null) {
			pSVar3 = root.GetComponentsInChildren<Transform>(true);
			if (pSVar3 != null) {
				if (0 < (int)pSVar3.Length) {
					uVar4 = pSVar3.Length & 0xffffffff;
					uVar6 = 0;
					do {
						if (uVar4 <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						x = (Object)pSVar3[uVar6];
						bVar2 = (x != null);
						if (bVar2) {
							if (x == null) goto label_059086a0;
							__this = (Object)x.gameObject;
							if (__this == null) goto label_059086a0;
							a = __this.name;
							bVar2 = String.Equals(a, id, 4);
							if (bVar2) {
								return pUVar5;
							}
						}
						uVar6 = uVar6 + 1;
						uVar1 = (uint)pSVar3.Length;
						uVar4 = (ulong)uVar1;
					} while ((long)uVar6 < (long)(int)uVar1);
				}
				return null;
			}
		}
	label_059086a0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60013CD")]
	private static T FindComponent<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x58083B0", Offset = "0x58073B0", VA = "0x58083B0")]
	private static string RowId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowId): clean
		String pSVar1;
		int iStack_4;

		pSVar1 = iStack_4.ToString();
		pSVar1 = String.Concat("profile-details-social-row-", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x5808AA0", Offset = "0x5807AA0", VA = "0x5808AA0")]
	private static string InputId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$InputId): clean
		String pSVar1;
		int iStack_4;

		pSVar1 = iStack_4.ToString();
		pSVar1 = String.Concat("profile-details-social-", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x5808AF0", Offset = "0x5807AF0", VA = "0x5808AF0")]
	private static string RowsState(int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowsState): clean
		CultureInfo provider;
		String pSVar1;
		int iStack_4;

		provider = CultureInfo.InvariantCulture;
		pSVar1 = iStack_4.ToString((IFormatProvider)provider);
		return pSVar1;
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x58086B0", Offset = "0x58076B0", VA = "0x58086B0")]
	private static void SyncRowsDraft(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SyncRowsDraft): clean
		GameObject source_00;
		bool bVar1;
		Transform pUVar2;
		String pSVar3;
		Object x;
		CultureInfo provider;
		int iVar4;
		int iVar5;
		int local_40;
		int local_3c;
		GameObject local_38;

		pUVar2 = null;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if (source != null) {
				pUVar2 = source.transform;
				if (pUVar2 != null) {
					pUVar2 = pUVar2.root;
					goto label_0590873d;
				}
			}
	label_0590881a: ;
			throw new NullReferenceException();
		}
	label_0590873d: ;
		iVar5 = 0;
		bVar1 = ((Object)pUVar2 == null);
		if (!bVar1) {
			iVar4 = 0;
			local_38 = source;
			do {
				local_40 = iVar4;
				pSVar3 = local_40.ToString();
				pSVar3 = String.Concat("profile-details-social-row-", pSVar3);
				x = (Object)AottgProfileSocialLinksEditor.Find(pUVar2, pSVar3);
				bVar1 = (x != null);
				if (bVar1) {
					if (x == null) goto label_0590881a;
					bVar1 = x.activeSelf;
					iVar5 = iVar5 + (uint)bVar1;
				}
				iVar4 = iVar4 + 1;
			} while (iVar4 != 8);
			local_3c = iVar5;
			source_00 = local_38;
			provider = CultureInfo.InvariantCulture;
			pSVar3 = local_3c.ToString((IFormatProvider)provider);
			GisketchFormState.SetDraft(source_00, "profile-details-socials-rows", pSVar3);
		}
		return;
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x57FE5B0", Offset = "0x57FD5B0", VA = "0x57FE5B0")]
	public AottgProfileSocialLinksEditor()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c (Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileSocialLinksEditor.c.

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$FindComponent<object>: 2 lines keep C-only constructs
	private static object FindComponent_object(Transform root, String id)
	{
		uint uVar1;
		Object x;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		Object __this;
		String a;
		ulong uVar5;

		if ((method.rgctx_data == null) &&(il2cpp_codegen_initialize_runtime_metadata(&typeof(Object)), method.rgctx_data == null)) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		if ((root == null) ||(pSVar3 = root.GetComponentsInChildren<object>(true), pSVar3 == null)) {
	label_03588873: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar3.Length) {
			uVar4 = pSVar3.Length & 0xffffffff;
			uVar5 = 0;
			do {
				if (uVar4 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				x = (Object)pSVar3[uVar5];
				bVar2 = (x != null);
				if (bVar2) {
					if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) goto label_03588873;
					a = __this.name;
					bVar2 = String.Equals(a, id, 4);
					if (bVar2) {
						return (object)x;
					}
				}
				uVar5 = uVar5 + 1;
				uVar1 = (uint)pSVar3.Length;
				uVar4 = (ulong)uVar1;
			} while ((long)uVar5 < (long)(int)uVar1);
		}
		return null;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgProfileSocialLinksEditor.c();
		AottgProfileSocialLinksEditor.c.__9 =(AottgProfileSocialLinksEditor.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$<Build>b__3_1: 1 lines keep C-only constructs
	private void c__Build_b__3_1(AottgUi header)
	{
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		if (header != null) {
			header.TextKey("MainMenu.Profile.SocialLinks", "accountInputLabel", null, null, null);
			__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_AddRow);
			pGVar1 = header.ButtonKey(1, "MainMenu.Profile.AddLink", __this_00, "profile-details-social-add", null, null, "plus");
			width = AottgUi.Points(136.0);
			height = AottgUi.Points(58.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<Build>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass3_0__Build_b__0(AottgUi socials)
	{
		object @object;
		List<string> pSVar1;
		Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		String pSVar3;
		CultureInfo provider;
		MethodInfo method_00;
		int iStack_34;

		pSVar3 = "default";
		pGVar2 = typeof(AottgProfileSocialLinksEditor.c).static_fields;
		__this_00 = pGVar2.__9__3_1;
		if (__this_00 == null) {
			if ((typeof(AottgProfileSocialLinksEditor.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgProfileSocialLinksEditor.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c_Build_b__3_1);
			pGVar2 = typeof(AottgProfileSocialLinksEditor.c).static_fields;
			pGVar2.__9__3_1 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (socials != null) {
			method_00 = (MethodInfo *)"profile-details-social-header";
			socials.Panel(pSVar3, __this_00, "profile-details-social-header", layout, null);
			pSVar1 = this.links;
			if (pSVar1 != null) {
				if (pSVar1._size < 1) {
					pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					pSVar3 = pSVar1.get_Item(0);
				}
				AottgProfileSocialLinksEditor.SocialRow(socials, 0, pSVar3);
				pSVar1 = this.links;
				if (pSVar1 != null) {
					if (pSVar1._size < 2) {
						pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						pSVar3 = pSVar1.get_Item(1);
					}
					AottgProfileSocialLinksEditor.SocialRow(socials, 1, pSVar3);
					pSVar1 = this.links;
					if (pSVar1 != null) {
						if (pSVar1._size < 3) {
							pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						else {
							pSVar3 = pSVar1.get_Item(2);
						}
						AottgProfileSocialLinksEditor.SocialRow(socials, 2, pSVar3);
						pSVar1 = this.links;
						if (pSVar1 != null) {
							if (pSVar1._size < 4) {
								pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
							}
							else {
								pSVar3 = pSVar1.get_Item(3);
							}
							AottgProfileSocialLinksEditor.SocialRow(socials, 3, pSVar3);
							pSVar1 = this.links;
							if (pSVar1 != null) {
								if (pSVar1._size < 5) {
									pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
								}
								else {
									pSVar3 = pSVar1.get_Item(4);
								}
								AottgProfileSocialLinksEditor.SocialRow(socials, 4, pSVar3);
								pSVar1 = this.links;
								if (pSVar1 != null) {
									if (pSVar1._size < 6) {
										pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
									}
									else {
										pSVar3 = pSVar1.get_Item(5);
									}
									AottgProfileSocialLinksEditor.SocialRow(socials, 5, pSVar3);
									pSVar1 = this.links;
									if (pSVar1 != null) {
										if (pSVar1._size < 7) {
											pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
										}
										else {
											pSVar3 = pSVar1.get_Item(6);
										}
										AottgProfileSocialLinksEditor.SocialRow(socials, 6, pSVar3);
										pSVar1 = this.links;
										if (pSVar1 != null) {
											if (pSVar1._size < 8) {
												pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
											}
											else {
												pSVar3 = pSVar1.get_Item(7);
											}
											AottgProfileSocialLinksEditor.SocialRow(socials, 7, pSVar3);
											pSVar1 = this.links;
											if (pSVar1 != null) {
												iStack_34 = pSVar1._size;
												if (Il2CppMethodInitialized_07545673 == false) {
													il2cpp_codegen_initialize_runtime_metadata(&typeof(CultureInfo)) ;
													Il2CppMethodInitialized_07545673 = true;
												}
												provider = CultureInfo.InvariantCulture;
												pSVar3 = iStack_34.ToString((IFormatProvider)provider);
												socials.FormDraft("profile-details-socials-rows", pSVar3, "Social Links", null);
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$<SocialRow>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass4_0__SocialRow_b__0(AottgUi row)
	{
		AottgProfileSocialLinksEditor.c__DisplayClass4_0 __this_00;
		String pSVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		String pSVar5;
		GisketchNodeDefinition pGVar6;
		Action<GisketchActionContext> __this_01;
		String tooltip;
		int iStack_38;
		int iStack_34;

		__this_00 = &this.fields;
		pSVar1 = (__this_00.index).ToString();
		pSVar1 = String.Concat("profile-details-social-icon-", pSVar1);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Points(22.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (row != null) {
			row.Image("Icons/kenney-icons/share2", "profileCardSocialIcon", pSVar1, pGVar4, null);
			iStack_34 = __this_00.index;
			pSVar1 = iStack_34.ToString();
			pSVar1 = String.Concat("profile-details-social-", pSVar1);
			iStack_38 = __this_00.index + 1;
			pSVar5 = iStack_38.ToString();
			pSVar5 = String.Concat("Social Link ", pSVar5);
			pGVar2 = AottgUi.Percent(100.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			pGVar6 = row.FormInput(pSVar1, pSVar5, "https://example.com/profile", 0, "inputField", pGVar4, null, null, 0.2, 0x100, null, null);
			if (pGVar6 != null) {
				pGVar6.value = this.value;
				pSVar1 = "material-icons/cancel";
				__this_01 = this.__9__1;
				if (__this_01 == null) {
					__this_01 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_c__DisplayClass4_0_SocialRow_b__1);
					this.__9__1 = __this_01;
				}
				pSVar5 = (__this_00.index).ToString();
				pSVar5 = String.Concat("profile-details-social-remove-", pSVar5);
				tooltip = Aottg2GisketchLocale.Text("MainMenu.Profile.RemoveSocialLink");
				pGVar6 = row.IconButton(3, pSVar1, __this_01, pSVar5, tooltip, null);
				pGVar2 = AottgUi.Points(58.0);
				pGVar3 = AottgUi.Points(58.0);
				pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar6 != null) {
					pGVar6.layout = pGVar4;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass4_0$$<SocialRow>b__1: clean
	private void c__DisplayClass4_0__SocialRow_b__1(GisketchActionContext context)
	{
		AottgProfileSocialLinksEditor.RemoveRow(context, this.index);
		return;
	}
}
