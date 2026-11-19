// ==================== AoTTG2 cross-reference ====================
// Type: UI.PromptPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PromptPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/PromptPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200079D")]
internal class PromptPopup : BasePopup
{
	[Token(Token = "0x17000CB8")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004996")]
		[Address(RVA = "0x5BC24C0", Offset = "0x5BC14C0", VA = "0x5BC24C0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$get_TopBarHeight): clean
			return 55.0;
		}
	}

	[Token(Token = "0x17000CB9")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004997")]
		[Address(RVA = "0x5BC24D0", Offset = "0x5BC14D0", VA = "0x5BC24D0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$get_BottomBarHeight): clean
			return 55.0;
		}
	}

	[Token(Token = "0x17000CBA")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004998")]
		[Address(RVA = "0x5BC24E0", Offset = "0x5BC14E0", VA = "0x5BC24E0", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$get_TitleFontSize): clean
			return 0x1a;
		}
	}

	[Token(Token = "0x17000CBB")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004999")]
		[Address(RVA = "0x5BC24F0", Offset = "0x5BC14F0", VA = "0x5BC24F0", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$get_ButtonFontSize): clean
			return 0x16;
		}
	}

	[Token(Token = "0x600499A")]
	[Address(RVA = "0x5BB8610", Offset = "0x5BB7610", VA = "0x5BB8610", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$Setup): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		Transform pUVar1;
		GameObject __this_01;
		Image pUVar2;

		this.Setup(parent);
		pUVar1 = this.transform;
		__this_01 = ElementFactory.InstantiateAndBind(pUVar1, "Prefabs/Panels/BackgroundDim");
		if (__this_01 != null) {
			pUVar2 = __this_01.GetComponent<Image>();
			if (pUVar2 != null) {
				pUVar2.set_color((Color)(ZEXT816(0x3e99999a00000000) << 0x40));
				__this_01.AddComponent<IgnoreScaler>();
				pUVar1 = __this_01.transform;
				if (pUVar1 != null) {
					pUVar1.SetSiblingIndex(0);
					__this_00 = (HashSet<object>)this._staticTransforms;
					pUVar1 = __this_01.transform;
					if (__this_00 != null) {
						__this_00.Add((object)pUVar1);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600499B")]
	[Address(RVA = "0x5BC2500", Offset = "0x5BC1500", VA = "0x5BC2500")]
	public void Update()
	{
		// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$Update): 1 lines keep C-only constructs
		byte bVar1;
		InGameMenu __this_00;
		bool bVar2;

		bVar2 = Input.GetKeyDown(0x1b);
		if ((!bVar2) || (this.IsActive == false)) {
			return;
		}
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		if (__this_00 != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
				if (((typeof(GisketchInputCapture))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar2 = GisketchInputCapture.BlocksUiInput;
				if (bVar2) {
					return;
				}
				__this_00.TryDismissGameplayMenu();
				return;
			}
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x600499C")]
	[Address(RVA = "0x5BBC2C0", Offset = "0x5BBB2C0", VA = "0x5BBC2C0")]
	public PromptPopup()
	{
		// Lifted from source/cpp/UI/PromptPopup.c (UI.PromptPopup$$.ctor): clean
		base();
		return;
	}
}
