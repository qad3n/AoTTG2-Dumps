// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutDropdownOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutDropdownOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000779")]
internal class MobileLayoutDropdownOverlay : MonoBehaviour
{
	[Token(Token = "0x40025B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FieldInfo OptionsPanelField;

	[Token(Token = "0x40025B5")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _optionsPanel;

	[Token(Token = "0x6004812")]
	[Address(RVA = "0x5BA8470", Offset = "0x5BA7470", VA = "0x5BA8470")]
	public void Setup(DropdownSettingElement dropdown, Transform overlayRoot)
	{
		// Lifted from source/cpp/UI/MobileLayoutDropdownOverlay.c (UI.MobileLayoutDropdownOverlay$$Setup): 1 lines keep C-only constructs
		Object x;
		bool bVar1;
		GameObject pUVar2;
		Transform __this_00;
		GameObject pUVar3;
		FieldInfo pSVar4;

		if (Il2CppMethodInitialized_07547a9a == false) {
			Il2CppMethodInitialized_07547a9a = true;
			if ((typeof(MobileLayoutDropdownOverlay)._2).cctor_finished_or_no_cctor != 0) goto label_05ca84a1;
	label_05ca8546: ;
			pSVar4 = MobileLayoutDropdownOverlay.OptionsPanelField;
			if (pSVar4 != null) goto label_05ca84b4;
	label_05ca8561: ;
			if (this == null) goto label_05ca85eb;
	label_05ca856a: ;
			this._optionsPanel = null;
		}
		else {
			if ((typeof(MobileLayoutDropdownOverlay)._2).cctor_finished_or_no_cctor == 0) goto label_05ca8546;
	label_05ca84a1: ;
			pSVar4 = MobileLayoutDropdownOverlay.OptionsPanelField;
			if (pSVar4 == null) goto label_05ca8561;
	label_05ca84b4: ;
			pUVar2 = (GameObject)pSVar4.unknown(dropdown);
			if (this == null) goto label_05ca85eb;
			if (pUVar2 == null) goto label_05ca856a;
			pUVar3 = null;
			if (pUVar2.klass == typeof(GameObject)) {
				pUVar3 = pUVar2;
			}
			this._optionsPanel = pUVar3;
		}
		x = (Object)this._optionsPanel;
		bVar1 = (x != null);
		if (!bVar1) {
			return;
		}
		pUVar2 = this._optionsPanel;
		if ((pUVar2 != null) &&(__this_00 = pUVar2.transform, __this_00 != null)) {
			__this_00.SetParent(overlayRoot, true);
			return;
		}
	label_05ca85eb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004813")]
	[Address(RVA = "0x5BB07C0", Offset = "0x5BAF7C0", VA = "0x5BB07C0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/MobileLayoutDropdownOverlay.c (UI.MobileLayoutDropdownOverlay$$LateUpdate): clean
		Object x;
		GameObject pUVar1;
		bool bVar2;
		Transform __this_00;

		x = (Object)this._optionsPanel;
		bVar2 = (x != null);
		if (!bVar2) {
			return;
		}
		pUVar1 = this._optionsPanel;
		if (pUVar1 != null) {
			bVar2 = pUVar1.activeSelf;
			if (!bVar2) {
				return;
			}
			pUVar1 = this._optionsPanel;
			if ((pUVar1 != null) &&(__this_00 = pUVar1.transform, __this_00 != null)) {
				__this_00.SetAsLastSibling();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004814")]
	[Address(RVA = "0x5BB0860", Offset = "0x5BAF860", VA = "0x5BB0860")]
	public MobileLayoutDropdownOverlay()
	{
		// Lifted from source/cpp/UI/MobileLayoutDropdownOverlay.c (UI.MobileLayoutDropdownOverlay$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileLayoutDropdownOverlay.c.

	// UI.MobileLayoutDropdownOverlay$$.cctor: clean
	static MobileLayoutDropdownOverlay()
	{
		Il2CppType handle;
		Type pSVar1;
		FieldInfo pSVar2;

		handle = TypeRef_UI_DropdownSettingElement;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = (FieldInfo)pSVar1.unknown("_optionsPanel", 0x24);
		MobileLayoutDropdownOverlay.OptionsPanelField = pSVar2;
		return;
	}
}
