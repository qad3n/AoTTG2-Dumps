// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E5")]
internal sealed class AottgBadgeIconRow : AottgComponent
{
	[Token(Token = "0x4000EA1")]
	private const string NodeType = "AottgBadgeIconRow";

	[Token(Token = "0x4000EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _size;

	[Token(Token = "0x4000EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float _gap;

	[Token(Token = "0x4000EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x4000EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _visibleKey;

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x57D6ED0", Offset = "0x57D5ED0", VA = "0x57D6ED0")]
	static AottgBadgeIconRow()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRow.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_075454a9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_075454a9 = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow_BuildRow);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgBadgeIconRow", __this_00);
		return;
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x57D6F90", Offset = "0x57D5F90", VA = "0x57D6F90")]
	public AottgBadgeIconRow(string id, float size, [Optional][DefaultParameterValue(4f)] float gap, [Optional] string stateKey, [Optional] string visibleKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRow.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.ctor): clean
		base();
		this._id = id;
		this._size = size;
		this._gap = gap;
		this._stateKey = stateKey;
		this._visibleKey = visibleKey;
		return;
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x57D7010", Offset = "0x57D6010", VA = "0x57D7010", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRow.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$Build): 1 lines keep C-only constructs
		float fVar1;
		bool bVar2;
		GisketchNodeDefinition __this_00;
		GisketchUIBindingDefinition __this_01;
		GisketchLayoutDefinition pGVar3;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "AottgBadgeIconRow";
			__this_00.id = this._id;
			__this_00.textKey = this._stateKey;
			fVar1 = this._gap;
			__this_00.referenceWidth = this._size;
			__this_00.referenceHeight = fVar1;
			__this_01 = null;
			bVar2 = String.IsNullOrEmpty(this._visibleKey);
			if (!bVar2) {
				__this_01 = new GisketchUIBindingDefinition();
				if (__this_01 == null) goto label_058d71ed;
				__this_01.visible = this._visibleKey;
			}
			__this_00.bind = __this_01;
			pGVar3 = AottgUi.Layout("Row", null, "Center", null, null, this._gap, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar3;
			if (ui != null) {
				ui.Add(__this_00);
				return;
			}
		}
	label_058d71ed: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x57D7200", Offset = "0x57D6200", VA = "0x57D7200")]
	private static bool BuildRow(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRow.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$BuildRow): clean
		float fVar1;
		GisketchUIState state;
		String stateKey;
		GisketchUIBindingDefinition pGVar2;
		bool controlsActive;
		AottgBadgeIconRowRuntime __this;
		float fVar3;
		float gap;

		if (((go != null) &&(__this = go.AddComponent<AottgBadgeIconRowRuntime>(), node != null)) &&(context != null)) {
			fVar1 = node.referenceWidth;
			fVar3 = node.referenceHeight;
			state = context.State;
			stateKey = node.textKey;
			pGVar2 = node.bind;
			if (pGVar2 == null) {
				controlsActive = true;
			}
			else {
				controlsActive = String.IsNullOrEmpty(pGVar2.visible);
			}
			if (__this != null) {
				gap = 0.0;
				if (0.0 <= fVar3) {
					gap = fVar3;
				}
				fVar3 = 1.0;
				if (1.0 <= fVar1) {
					fVar3 = fVar1;
				}
				__this.Setup(fVar3, gap, state, stateKey, controlsActive);
				return true;
			}
		}
		throw new NullReferenceException();
	}
}
