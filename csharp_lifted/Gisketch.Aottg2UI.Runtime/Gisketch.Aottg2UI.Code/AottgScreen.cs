// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000085")]
public abstract class AottgScreen
{
	[Token(Token = "0x1700007F")]
	protected virtual string RootStyle
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x5267290", Offset = "0x5266290", VA = "0x5267290", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c (Gisketch.Aottg2UI.Code.AottgScreen$$get_RootStyle): clean
			return "screen";
		}
	}

	[Token(Token = "0x17000080")]
	protected virtual GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x52672C0", Offset = "0x52662C0", VA = "0x52672C0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c (Gisketch.Aottg2UI.Code.AottgScreen$$get_RootLayout): clean
			GisketchLength __this_00;
			GisketchLength __this_01;
			GisketchLayoutDefinition pGVar1;

			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				__this_01 = new GisketchLength();
				if (__this_01 != null) {
					__this_01.value = 100.0;
					__this_01.unit = "percent";
					pGVar1 = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, __this_00, __this_01, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					return pGVar1;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x600040E")]
	protected abstract void Build(AottgUi ui);

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x5267440", Offset = "0x5266440", VA = "0x5267440")]
	internal GisketchScreenDefinition BuildDefinition(string id, string title, string titleKey, string searchTitle, string searchTitleKey, string searchGroup, string backScreenId, string backActionId, GisketchScreenLifecycle lifecycle, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c (Gisketch.Aottg2UI.Code.AottgScreen$$BuildDefinition): clean
		List<GisketchNodeDefinition> __this_00;
		bool bVar1;
		AottgUi __this_01;
		GisketchScreenDefinition __this_02;
		GisketchNodeDefinition __this_03;
		String pSVar2;
		GisketchLayoutDefinition pGVar3;
		GisketchNodeDefinition[] pGVar4;

		__this_01 = new AottgUi(id, actions);
		this.Build(__this_01);
		__this_02 = new GisketchScreenDefinition();
		if (__this_02 != null) {
			__this_02.id = id;
			bVar1 = String.IsNullOrEmpty(titleKey);
			if (!bVar1) {
				title = Aottg2GisketchLocale.Text(titleKey);
			}
			__this_02.title = title;
			bVar1 = String.IsNullOrEmpty(searchTitleKey);
			if (!bVar1) {
				searchTitle = Aottg2GisketchLocale.Text(searchTitleKey);
			}
			__this_02.searchTitle = searchTitle;
			bVar1 = String.IsNullOrEmpty(searchGroup);
			if (bVar1) {
				searchGroup = id;
			}
			__this_02.searchGroup = searchGroup;
			__this_02.backScreenId = backScreenId;
			__this_02.backActionId = backActionId;
			__this_02.lifecycle = lifecycle;
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

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x5267750", Offset = "0x5266750", VA = "0x5267750")]
	private static string Localized(string key, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c (Gisketch.Aottg2UI.Code.AottgScreen$$Localized): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(key);
		if (bVar1) {
			return fallback;
		}
		return pSVar2;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x52677C0", Offset = "0x52667C0", VA = "0x52677C0")]
	protected AottgScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgScreen.c (Gisketch.Aottg2UI.Code.AottgScreen$$.ctor): clean
		base();
		return;
	}
}
