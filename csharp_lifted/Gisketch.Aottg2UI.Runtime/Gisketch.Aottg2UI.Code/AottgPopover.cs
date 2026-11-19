// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgPopover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000084")]
public abstract class AottgPopover
{
	[Token(Token = "0x1700007D")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x5266DB0", Offset = "0x5265DB0", VA = "0x5266DB0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopover.c (Gisketch.Aottg2UI.Code.AottgPopover$$get_RootStyle): clean
			return "popover";
		}
	}

	[Token(Token = "0x1700007E")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x5266DE0", Offset = "0x5265DE0", VA = "0x5266DE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopover.c (Gisketch.Aottg2UI.Code.AottgPopover$$get_RootLayout): clean
			GisketchLength __this_00;
			GisketchLayoutDefinition pGVar1;

			__this_00 = new GisketchLength();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.value = 420.0;
			__this_00.unit = "point";
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, __this_00, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000409")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x5266F90", Offset = "0x5265F90", VA = "0x5266F90")]
	internal GisketchOverlayDefinition BuildDefinition(string id, AottgPopoverAttribute attribute, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopover.c (Gisketch.Aottg2UI.Code.AottgPopover$$BuildDefinition): clean
		List<GisketchNodeDefinition> __this_00;
		bool bVar1;
		AottgUi __this_01;
		GisketchOverlayDefinition __this_02;
		GisketchNodeDefinition __this_03;
		String pSVar2;
		GisketchLayoutDefinition pGVar3;
		GisketchNodeDefinition[] pGVar4;
		int iVar5;

		__this_01 = new AottgUi(id, actions);
		this.Build(__this_01);
		iVar5 = 0;
		__this_02 = new GisketchOverlayDefinition();
		if (__this_02 != null) {
			__this_02.id = id;
			__this_02.modal = false;
			if (attribute == null) {
				bVar1 = false;
			}
			else {
				bVar1 = attribute._DismissOnBackdrop_k__BackingField;
				iVar5 = attribute._Lifecycle_k__BackingField;
			}
			__this_02.dismissOnBackdrop = bVar1;
			__this_02.lifecycle = iVar5;
			__this_03 = new GisketchNodeDefinition();
			if (__this_03 != null) {
				__this_03.type = "Panel";
				__this_03.id = id;
				pSVar2 = this.get_RootStyle();
				__this_03.style = pSVar2;
				pGVar3 = this.get_RootLayout();
				__this_03.layout = pGVar3;
				if (__this_01 != null) {
					__this_00 = __this_01._children;
					if (__this_00 != null) {
						pGVar4 = (GisketchNodeDefinition[])__this_00.ToArray();
						__this_03.children = pGVar4;
						__this_02.root = __this_03;
						return __this_02;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x5267280", Offset = "0x5266280", VA = "0x5267280")]
	protected AottgPopover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopover.c (Gisketch.Aottg2UI.Code.AottgPopover$$.ctor): clean
		base();
		return;
	}
}
