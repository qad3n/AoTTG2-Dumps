// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000318")]
internal static class ProfileDialogUi
{
	[Token(Token = "0x4000F9B")]
	internal const float PickerPanelWidth = 630f;

	[Token(Token = "0x4000F9C")]
	internal const float PreviewPanelWidth = 480f;

	[Token(Token = "0x4000F9D")]
	internal const string AvatarDraftKey = "profile-avatar-key";

	[Token(Token = "0x4000F9E")]
	internal const string BannerDraftKey = "profile-banner-key";

	[Token(Token = "0x4000F9F")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000FA0")]
	private const float PanelMotionSeconds = 0.16f;

	[Token(Token = "0x17000228")]
	public static GisketchLayoutDefinition SplitRootLayout
	{
		[Token(Token = "0x600135A")]
		[Address(RVA = "0x57FB670", Offset = "0x57FA670", VA = "0x57FB670")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitRootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(1134.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x17000229")]
	public static GisketchLayoutDefinition SplitBodyLayout
	{
		[Token(Token = "0x600135B")]
		[Address(RVA = "0x57FB7E0", Offset = "0x57FA7E0", VA = "0x57FB7E0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitBodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Row", null, "FlexStart", null, null, 24.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x57FBDB0", Offset = "0x57FADB0", VA = "0x57FBDB0")]
	public static GisketchGridPickerItem[] GridItems(AottgProfilePreset[] presets)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$GridItems): 22 lines keep C-only constructs
		uint uVar1;
		GisketchGridPickerItem[] pGVar2;
		String area;
		String str1;
		String pSVar3;
		GisketchGridPickerItem[] pGVar4;
		ulong uVar5;
		String* ppSVar6;
		ulong uVar7;
		GisketchGridPickerItem targetAddress;
		int local_8c;
		byte[] local_88 = new byte[24];
		String pSStack_70;
		byte[] local_58 = new byte[24];
		ulong uStack_40;

		pSVar3 = "presets=";
		area = "ProfileDialogUi.GridItems";
		local_58._16_8_ = 0;
		uStack_40._0_1_ = false;
		uStack_40._1_1_ = false;
		uStack_40._2_6_ = 0;
		local_58._0_8_ = null;
		local_58._8_8_ = null;
		if (presets == null) {
			local_8c = 0;
		}
		else {
			local_8c = (int32_t)presets.Length;
		}
		str1 = local_8c.ToString();
		pSVar3 = String.Concat(pSVar3, str1);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Time((GisketchUiPerfLog.Scope)local_88, area, pSVar3);
		local_58._16_8_ = local_88._16_8_;
		uStack_40 = pSStack_70;
		local_58._0_8_ = local_88._0_8_;
		local_58._8_8_ = local_88._8_8_;
		if (presets == null) {
			pGVar4 = (GisketchGridPickerItem[])new GisketchGridPickerItem[0];
		}
		else {
			pGVar4 = (GisketchGridPickerItem[])new GisketchGridPickerItem[(uint32_t)presets.Length];
			if (0 < (int)presets.Length) {
				if (pGVar4 == null) {
					local_88._16_8_ = null;
					pSStack_70 = null;
					local_88._0_8_ = null;
					local_88._8_8_ = null;
					local_88 = new GisketchGridPickerItem(presets[0].Key, presets[0].Label, presets[0].Sprite, null);
					throw new NullReferenceException();
				}
				uVar5 = presets.Length & 0xffffffff;
				ppSVar6 = &presets[0].Sprite;
				uVar7 = 0;
				pGVar2 = pGVar4;
				do {
					targetAddress = pGVar2.m_Items;
					if (uVar5 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					local_88._16_8_ = null;
					pSStack_70 = null;
					local_88._0_8_ = null;
					local_88._8_8_ = null;
					local_88 = new GisketchGridPickerItem(((AottgProfilePreset)(ppSVar6 + -2)).Key, ppSVar6[-1], *ppSVar6, null);
					if ((uint)pGVar4.Length <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					pGVar2[0].Sprite = (String)local_88._16_8_;
					pGVar2[0].Keywords = pSStack_70;
					targetAddress.Key = (String)local_88._0_8_;
					pGVar2[0].Label = (String)local_88._8_8_;
					uVar7 = uVar7 + 1;
					uVar1 = (uint)presets.Length;
					uVar5 = (ulong)uVar1;
					ppSVar6 = ppSVar6 + 3;
					pGVar2 = (GisketchGridPickerItem[])targetAddress;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
		}
		local_58.Dispose();
		return pGVar4;
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x57FEB00", Offset = "0x57FDB00", VA = "0x57FEB00")]
	public static void SelectAvatar(GisketchActionContext context, GisketchGridPickerItem item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectAvatar): clean


		AottgProfileDialogSelection.AvatarKey = item.Key;
		GisketchFormState.SetDraft(context.GameObject, "profile-avatar-key", item.Key);
		ProfileDialogUi.UpdatePreviewImage(context, "profile-preview-avatar-image", item.Sprite);
		return;
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x57FEE70", Offset = "0x57FDE70", VA = "0x57FEE70")]
	public static void SelectBanner(GisketchActionContext context, GisketchGridPickerItem item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectBanner): clean


		AottgProfileDialogSelection.BannerKey = item.Key;
		GisketchFormState.SetDraft(context.GameObject, "profile-banner-key", item.Key);
		ProfileDialogUi.UpdatePreviewImage(context, "profile-preview-banner-image", item.Sprite);
		return;
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x57FEBA0", Offset = "0x57FDBA0", VA = "0x57FEBA0")]
	private static void UpdatePreviewImage(GisketchActionContext context, string imageId, string sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$UpdatePreviewImage): 8 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		Transform pUVar3;
		Image __this;
		Sprite value;
		bool bStack_79;
		GisketchUiPerfLog.Scope GStack_78;
		GisketchUiPerfLog.Scope GStack_50;

		GStack_78._startMs._0_4_ = 0;
		GStack_78._startMs._4_2_ = 0;
		GStack_78._startMs._6_2_ = 0;
		GStack_78._enabled = false;
		GStack_78._hotLoop = false;
		GStack_78._26_6_ = 0;
		GStack_78._area = null;
		GStack_78._detail = null;
		bStack_79 = false;
		pSVar2 = String.Concat(imageId, " sprite=", sprite);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GStack_50 = GisketchUiPerfLog.Time("ProfileDialogUi.UpdatePreviewImage", pSVar2);
		GStack_78._startMs = GStack_50._startMs;
		GStack_78._enabled = GStack_50._enabled;
		GStack_78._hotLoop = GStack_50._hotLoop;
		GStack_78._26_6_ = GStack_50._26_6_;
		GStack_78._area = GStack_50._area;
		GStack_78._detail = GStack_50._detail;
		GStack_50._area = null;
		GStack_50._detail = (String)&GStack_78;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			pUVar3 = context.GameObject.transform;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			pUVar3 = pUVar3.root;
		}
		else {
			pUVar3 = null;
		}
		__this = ProfileDialogUi.Find<Image>(pUVar3, imageId);
		bStack_79 = ((Object)__this != null);
		pSVar2 = bStack_79.ToString();
		pSVar2 = String.Concat("found=", pSVar2);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ProfileDialogUi.UpdatePreviewImage", pSVar2);
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			value = GisketchSpriteLoader.Load(sprite);
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.sprite = value;
		}
		GStack_78.Dispose();
		return;
	}

	[Token(Token = "0x6001360")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x57FEF10", Offset = "0x57FDF10", VA = "0x57FEF10")]
	public static GisketchMotionDefinition PanelEnterMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelEnterMotion): clean
		GisketchMotionDefinition pGVar1;

		pGVar1 = AottgUi.Motion("slideRight", null, 0.16, 0.0, 0.0, 0);
		return pGVar1;
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x57FEF60", Offset = "0x57FDF60", VA = "0x57FEF60")]
	public static GisketchMotionDefinition PanelExitMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelExitMotion): clean
		GisketchMotionDefinition pGVar1;

		pGVar1 = AottgUi.Motion("slideRight", null, 0.16, 0.0, 0.0, 0);
		return pGVar1;
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x57FEFB0", Offset = "0x57FDFB0", VA = "0x57FEFB0")]
	public static GisketchMotionDefinition PreviewEnterMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewEnterMotion): clean
		GisketchMotionDefinition pGVar1;

		pGVar1 = AottgUi.Motion("slideRightSmall", null, 0.16, 0.0, 0.0, 1);
		return pGVar1;
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x57FF000", Offset = "0x57FE000", VA = "0x57FF000")]
	public static GisketchMotionDefinition PreviewExitMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewExitMotion): clean
		GisketchMotionDefinition pGVar1;

		pGVar1 = AottgUi.Motion("slideRightSmall", null, 0.16, 0.0, 0.0, 1);
		return pGVar1;
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x57FDDF0", Offset = "0x57FCDF0", VA = "0x57FDDF0")]
	public static void SaveCallout(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveCallout): 2 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		int variant;

		variant = 0;
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			if (ui == null) {
	label_058fde9c: ;
				throw new NullReferenceException();
			}
			ppSVar2 = &"MainMenu.Profile.SaveAccountScope";
		}
		else {
			if (ui == null) goto label_058fde9c;
			variant = 2;
			ppSVar2 = &"MainMenu.Profile.SaveLocalScope";
		}
		ui.CalloutKey(variant, *ppSVar2, "profile-save-scope");
		return;
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x57FE600", Offset = "0x57FD600", VA = "0x57FE600")]
	public static void SaveFooter(AottgDialogFooter footer, string actionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter): clean
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this;

		if (footer != null) {
			footer.QuietKey("Common.Cancel", "overlay.close");
			pGVar1 = footer.PrimaryKey("Common.Save", actionId);
			__this = new GisketchUIBindingDefinition();
			if (__this != null) {
				__this.enabled = "profile.save.idle";
				if (pGVar1 != null) {
					pGVar1.bind = __this;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x57FF050", Offset = "0x57FE050", VA = "0x57FF050")]
	internal static void SaveFooter(AottgUi footer, string actionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c (Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter): clean
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this;

		if (footer != null) {
			footer.ButtonKey(3, "Common.Cancel", "overlay.close", null, null, null, null);
			pGVar1 = footer.ButtonKey(0, "Common.Save", actionId, null, null, null, null);
			__this = new GisketchUIBindingDefinition();
			if (__this != null) {
				__this.enabled = "profile.save.idle";
				if (pGVar1 != null) {
					pGVar1.bind = __this;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c.

	// Gisketch.Aottg2UI.Game.ProfileDialogUi$$Find<object>: 2 lines keep C-only constructs
	private static object Find_object(Transform root, String id)
	{
		uint uVar1;
		uint uVar2;
		Object x;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		ulong uVar6;

		if ((method.rgctx_data == null) &&(il2cpp_codegen_initialize_runtime_metadata(&typeof(Object)), method.rgctx_data == null)) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)root == null);
		if ((!bVar3) && (bVar3 = String.IsNullOrEmpty(id), !bVar3)) {
			if ((root == null) ||(pSVar4 = root.GetComponentsInChildren<object>(true), pSVar4 == null)) {
	label_037140db: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)pSVar4[uVar6];
					bVar3 = (x != null);
					if (bVar3) {
						if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) goto label_037140db;
						a = __this.name;
						bVar3 = (a == id);
						if (bVar3) {
							return (object)x;
						}
					}
					uVar6 = uVar6 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
			}
		}
		return null;
	}
}
