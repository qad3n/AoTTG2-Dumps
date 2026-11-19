// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000331")]
public sealed class AottgPublicProfileHover : AottgComponent
{
	[Token(Token = "0x4000FF8")]
	public const string NodeType = "PublicProfileHover";

	[Token(Token = "0x4000FF9")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000FFB")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _accountId;

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x580C1C0", Offset = "0x580B1C0", VA = "0x580C1C0")]
	static AottgPublicProfileHover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.cctor): clean
		AottgPublicProfileHover.RegisterFactory();
		return;
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x580C1D0", Offset = "0x580B1D0", VA = "0x580C1D0")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$RegisterFactory): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07545690 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07545690 = true;
			uVar2 = (typeof(AottgPublicProfileHover)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgPublicProfileHover)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AottgPublicProfileHover._registered;
		}
		else {
			cVar1 = *(sbyte)(typeof(AottgPublicProfileHover)).static_fields;
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(GisketchComponentRegistry))._2). cctor_finished_or_no_cctor == 0) {
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("PublicProfileHover", __this_00);
		AottgPublicProfileHover._registered = true;
		return;
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x580C300", Offset = "0x580B300", VA = "0x580C300")]
	public AottgPublicProfileHover(string id, string accountId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.ctor): clean
		base();
		this._id = id;
		this._accountId = accountId;
		return;
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x580C340", Offset = "0x580B340", VA = "0x580C340", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Build): clean
		String id;
		String accountId;
		GisketchNodeDefinition node;

		id = this._id;
		accountId = this._accountId;
		if ((typeof(AottgPublicProfileHover)._2).cctor_finished_or_no_cctor == 0) {
		}
		node = AottgPublicProfileHover.Node(id, accountId);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Add(node);
		return;
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x580C3C0", Offset = "0x580B3C0", VA = "0x580C3C0")]
	public static GisketchNodeDefinition Node(string id, string accountId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Node): clean
		GisketchNodeDefinition __this;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		AottgPublicProfileHover.RegisterFactory();
		__this = new GisketchNodeDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.type = "PublicProfileHover";
		__this.id = id;
		__this.text = accountId;
		width = AottgUi.Points(0.0);
		height = AottgUi.Points(0.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		__this.layout = pGVar1;
		return __this;
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x580C540", Offset = "0x580B540", VA = "0x580C540")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$BuildRuntime): clean
		bool bVar1;
		LayoutElement pUVar2;
		Transform pUVar3;
		GameObject __this;
		AottgPublicProfileHoverRuntime pGVar4;

		if ((go != null) &&(pUVar2 = go.AddComponent<LayoutElement>(), pUVar2 != null)) {
			pUVar2.set_ignoreLayout(true);
			pUVar3 = go.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.parent;
				bVar1 = ((Object)pUVar3 != null);
				if (!bVar1) {
					return true;
				}
				pUVar3 = go.transform;
				if ((((pUVar3 != null) &&(pUVar3 = pUVar3.parent, pUVar3 != null)) &&(__this = pUVar3.gameObject , __this != null)) &&((pGVar4 = __this.AddComponent<AottgPublicProfileHoverRuntime>(), node != null &&(pGVar4 != null)))) {
					pGVar4._accountId = node.text;
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}
}
