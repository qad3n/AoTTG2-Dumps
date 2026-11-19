// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtabStrip
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F8")]
public sealed class AottgSubtabStrip : AottgComponent
{
	[Token(Token = "0x4000A89")]
	public const string NodeType = "AottgSubtabStrip";

	[Token(Token = "0x4000A8A")]
	public const float Height = 52f;

	[Token(Token = "0x4000A8B")]
	public const float Gap = 32f;

	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A8D")]
	[FieldOffset(Offset = "0x18")]
	private readonly AottgSubtab[] _tabs;

	[Token(Token = "0x4000A8E")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _selectedId;

	[Token(Token = "0x4000A8F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Action<GisketchActionContext, string> _selected;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x5D7D690", Offset = "0x5D7C690", VA = "0x5D7D690")]
	public AottgSubtabStrip(string id, AottgSubtab[] tabs, string selectedId, Action<GisketchActionContext, string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c (Gisketch.Aottg2UI.Game.AottgSubtabStrip$$.ctor): clean
		base();
		this._id = id;
		if (tabs == null) {
			tabs = (AottgSubtab[])new AottgSubtab[0];
		}
		this._tabs = tabs;
		if (selectedId == null) {
			selectedId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._selectedId = selectedId;
		this._selected = selected;
		return;
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x5D7D750", Offset = "0x5D7C750", VA = "0x5D7D750", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c (Gisketch.Aottg2UI.Game.AottgSubtabStrip$$Build): 2 lines keep C-only constructs
		String text;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar1;
		String[] method_00;
		GisketchNodeDefinition[] pGVar2;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		MethodInfo method_01;
		String* method_02;

		if (Il2CppMethodInitialized_0754880d == false) {
			method_02 = &"settingsSubtabStrip";
			Il2CppMethodInitialized_0754880d = true;
		}
		AottgSubtabStripRuntime.RegisterFactory();
		text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip_Build_b__8_0);
		if (ui != null) {
			pGVar1 = ui.Button(4, text, __this_00, this._id, null, null, null);
			if (pGVar1 != null) {
				pGVar1.type = "AottgSubtabStrip";
				pGVar1.style = "settingsSubtabStrip";
				method_01 = (MethodInfo)this._selectedId;
				pGVar1.value = (String)method_01;
				method_00 = this.TabIds();
				pGVar1.options = method_00;
				pGVar2 = this.TabMetadata();
				pGVar1.deferredChildren = pGVar2;
				width = AottgUi.Percent(100.0);
				height = AottgUi.Points(52.0);
				pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				pGVar1.layout = pGVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x5D7DCF0", Offset = "0x5D7CCF0", VA = "0x5D7DCF0")]
	private void Select(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c (Gisketch.Aottg2UI.Game.AottgSubtabStrip$$Select): 3 lines keep C-only constructs
		String value;
		Action<GisketchActionContext, string> pSVar1;
		code *vtableDispatch;
		bool bVar2;
		String* ppSVar3;

		if (context.Node == null) {
			ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar3 = &((context.Node).fields).value;
		}
		value = *ppSVar3;
		bVar2 = String.IsNullOrEmpty(value);
		if ((bVar2) ||(pSVar1 = this._selected, pSVar1 == null)) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,value,pSVar1.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x5D7DA60", Offset = "0x5D7CA60", VA = "0x5D7DA60")]
	private string[] TabIds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c (Gisketch.Aottg2UI.Game.AottgSubtabStrip$$TabIds): 1 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		AottgSubtab[] pGVar3;
		AottgSubtab pGVar4;
		long lVar5;
		ulong uVar6;

		pGVar3 = this._tabs;
		if (pGVar3 != null) {
			pSVar2 = (String[])new string[(uint32_t)pGVar3.Length];
			pGVar3 = this._tabs;
			if (pGVar3 != null) {
				if (pSVar2 == null) {
					if ((int)pGVar3.Length < 1) {
						return null;
					}
				}
				else {
					lVar5 = 0;
					uVar6 = 0;
					do {
						uVar1 = (uint)pGVar3.Length;
						if ((long)(int)uVar1 <= (long)uVar6) {
							return pSVar2;
						}
						if (uVar1 <= uVar6) {
	label_05e7db64: ;
							throw new IndexOutOfRangeException();
						}
						if (pGVar3[uVar6] == null) {
							pGVar4 = *(AottgSubtab*)(g_data_07556758 + 0xb8);
							uVar1 = (uint)pSVar2.Length;
						}
						else {
							pGVar4 = &pGVar3[uVar6].fields;
							uVar1 = (uint)pSVar2.Length;
						}
						if (uVar1 <= uVar6) goto label_05e7db64;
						pSVar2[uVar6] = pGVar4._Id_k__BackingField;
						uVar6 = uVar6 + 1;
						pGVar3 = this._tabs;
						lVar5 = lVar5 + 8;
					} while (pGVar3 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x5D7DB70", Offset = "0x5D7CB70", VA = "0x5D7DB70")]
	private GisketchNodeDefinition[] TabMetadata()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c (Gisketch.Aottg2UI.Game.AottgSubtabStrip$$TabMetadata): 4 lines keep C-only constructs
		uint uVar1;
		AottgSubtab pGVar2;
		AottgSubtab pGVar3;
		GisketchNodeDefinition[] pGVar4;
		AottgSubtab[] pGVar5;
		GisketchNodeDefinition __this_00;
		String* ppSVar6;
		long lVar7;
		ulong uVar8;

		pGVar5 = this._tabs;
		if (pGVar5 != null) {
			pGVar4 = (GisketchNodeDefinition[])new GisketchNodeDefinition[(uint32_t)pGVar5.Length];
			pGVar5 = this._tabs;
			if (pGVar5 != null) {
				lVar7 = 0x20;
				uVar8 = 0;
				do {
					uVar1 = (uint)pGVar5.Length;
					if ((long)(int)uVar1 <= (long)uVar8) {
						return pGVar4;
					}
					if (uVar1 <= uVar8) {
	label_05e7dce3: ;
						throw new IndexOutOfRangeException();
					}
					pGVar2 = pGVar5[uVar8];
					__this_00 = new GisketchNodeDefinition();
					if (pGVar2 == null) {
						pGVar3 = *(AottgSubtab*)(g_data_07556758 + 0xb8);
					}
					else {
						pGVar3 = &pGVar2.fields;
					}
					if (__this_00 == null) break;
					__this_00.id = pGVar3._Id_k__BackingField;
					if (pGVar2 == null) {
						ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
					}
					else {
						ppSVar6 = &pGVar2._Label_k__BackingField;
					}
					__this_00.text = *ppSVar6;
					if (pGVar4 == null) break;
					if ((uint)pGVar4.Length <= uVar8) goto label_05e7dce3;
					pGVar4[uVar8] = __this_00;
					uVar8 = uVar8 + 1;
					pGVar5 = this._tabs;
					lVar7 = lVar7 + 8;
				} while (pGVar5 != null);
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStrip.c.

	// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$<Build>b__8_0: 3 lines keep C-only constructs
	private void Build_b__8_0(GisketchActionContext context)
	{
		String value;
		Action<GisketchActionContext, string> pSVar1;
		code *vtableDispatch;
		bool bVar2;
		String* ppSVar3;

		if (context.Node == null) {
			ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar3 = &((context.Node).fields).value;
		}
		value = *ppSVar3;
		bVar2 = String.IsNullOrEmpty(value);
		if ((bVar2) ||(pSVar1 = this._selected, pSVar1 == null)) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,value,pSVar1.method,vtableDispatch);
		return;
	}
}
