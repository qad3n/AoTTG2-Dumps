// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IconPickPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/IconPickPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000796")]
internal class IconPickPopup : PromptPopup
{
	[Token(Token = "0x4002654")]
	protected const int Columns = 7;

	[Token(Token = "0x4002655")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected string[] _options;

	[Token(Token = "0x4002656")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BaseSetting _setting;

	[Token(Token = "0x4002657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected UnityAction _onSelect;

	[Token(Token = "0x4002658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _label;

	[Token(Token = "0x4002659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected List<GameObject> _groups;

	[Token(Token = "0x400265A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected int _currentIndex;

	[Token(Token = "0x400265B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected int[] _intOptionValues;

	[Token(Token = "0x17000C92")]
	protected override string Title
	{
		[Token(Token = "0x6004947")]
		[Address(RVA = "0x5BBF390", Offset = "0x5BBE390", VA = "0x5BBF390", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000C93")]
	protected override float Width
	{
		[Token(Token = "0x6004948")]
		[Address(RVA = "0x5BBF3B0", Offset = "0x5BBE3B0", VA = "0x5BBF3B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_Width): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000C94")]
	protected override float Height
	{
		[Token(Token = "0x6004949")]
		[Address(RVA = "0x5BBF3C0", Offset = "0x5BBE3C0", VA = "0x5BBF3C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_Height): clean
			return 800.0;
		}
	}

	[Token(Token = "0x17000C95")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600494A")]
		[Address(RVA = "0x5BBF3D0", Offset = "0x5BBE3D0", VA = "0x5BBF3D0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000C96")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600494B")]
		[Address(RVA = "0x5BBF3E0", Offset = "0x5BBE3E0", VA = "0x5BBF3E0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000C97")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600494C")]
		[Address(RVA = "0x5BBF3F0", Offset = "0x5BBE3F0", VA = "0x5BBF3F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_HorizontalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x17000C98")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600494D")]
		[Address(RVA = "0x5BBF400", Offset = "0x5BBE400", VA = "0x5BBF400", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$get_VerticalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x600494E")]
	[Address(RVA = "0x5BBF410", Offset = "0x5BBE410", VA = "0x5BBF410", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		String pSVar1;
		ElementStyle __this_00;
		UnityAction __this_01;

		this.Setup(parent);
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 70.0, 20.0, pSVar1);
		parent_00 = this.BottomBar;
		pSVar1 = UIManager.GetLocaleCommon("Back");
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_IconPickPopup_Setup_b__22_0);
		ElementFactory.CreateTextButton(parent_00, __this_00, pSVar1, 0.0, __this_01);
		return;
	}

	[Token(Token = "0x600494F")]
	[Address(RVA = "0x5BBF540", Offset = "0x5BBE540", VA = "0x5BBF540")]
	public void Show(BaseSetting setting, Text label, string[] options, string[] icons, string[] tooltips, UnityAction onSelect, TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$Show): 24 lines keep C-only constructs
		int iVar1;
		List<GameObject> pSVar2;
		Object obj;
		bool bVar3;
		System_Collections_Generic_List_TSource__o pSVar4;
		System_Collections_Generic_List_List_T___o __this_00;
		System_Collections_Generic_List_List_T___o pSVar5;
		System_Collections_Generic_List_List_T___o __this_01;
		List<string> pSVar6;
		List<string> pSVar7;
		Il2CppClass pIVar8;
		Exception __this_02;
		String message;
		int piVar9;
		int iVar10;
		MethodInfo pMVar11;
		String* metadataPointer;
		byte[] local_78 = new byte[8];
		Object local_68;
		byte[] local_58 = new byte[16];
		Object local_48;
		int local_40;
		System_Collections_Generic_List_List_T___o local_38;

		local_78 = (byte[])0x0;
		local_68 = null;
		this._intOptionValues = intOptionValues;
		this._setting = setting;
		this._onSelect = onSelect;
		this._options = options;
		this._label = label;
		pSVar2 = this._groups;
		if (pSVar2 == null) {
	label_05cbfaf8: ;
			throw new NullReferenceException();
		}
		local_58.GetEnumerator((List<object>)pSVar2);
		local_68 = local_48;
		local_78 = (byte[])local_58._0_8_;
		local_58._0_8_ = null;
		local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
		while (true) {
			bVar3 = local_78.MoveNext();
			obj = local_68;
			if (!(bVar3)) break;
			Object.Destroy(obj);
		}
		local_78.Dispose();
		pSVar2 = this._groups;
		if (pSVar2 == null) goto label_05cbfaf8;
		piVar9 = &pSVar2._version;
		*piVar9 = *piVar9 + 1;
		iVar10 = pSVar2._size;
		pSVar2._size = 0;
		if (0 < iVar10) {
			Array.Clear((Array)pSVar2._items, 0, iVar10);
		}
		if ((options == null) || (icons == null)) goto label_05cbfaf8;
		iVar1 = (int)options.Length;
		if (iVar1 != (int)icons.Length) {
			pIVar8 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_02 = (Exception)il2cpp_codegen_object_new(pIVar8);
			metadataPointer = &"Options and icons not equal length";
	label_05cbfab4: ;
			message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
			__this_02 = new Exception(message);
			pMVar11 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_IconPickPopup_Show);
			throw (object)__this_02;
		}
		if ((tooltips != null) && (iVar1 != (int)tooltips.Length)) {
			pIVar8 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_02 = (Exception)il2cpp_codegen_object_new(pIVar8);
			metadataPointer = &"Options and tooltips not equal length";
			goto label_05cbfab4;
		}
		pSVar4 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)options);
		__this_00 = Util.GroupItems<string>((List<T>)pSVar4, 7);
		pSVar4 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)icons);
		pMVar11 = (MethodInfo)0x7;
		pSVar5 = Util.GroupItems<string>((List<T>)pSVar4, 7);
		if (tooltips == null) {
			this._currentIndex = 0;
			if (__this_00 == null) goto label_05cbfaf8;
		}
		else {
			pSVar4 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)tooltips);
			pMVar11 = (MethodInfo)0x7;
			__this_01 = Util.GroupItems<string>((List<T>)pSVar4, 7);
			this._currentIndex = 0;
			if (__this_00 == null) goto label_05cbfaf8;
			piVar9 = &__this_00._size;
			if (__this_01 != null) {
				iVar1 = *piVar9;
				if (pSVar5 == null) {
					if (0 < iVar1) {
						__this_00.get_Item(0);
						goto label_05cbfaf8;
					}
				}
				else if (0 < iVar1) {
					iVar10 = 0;
					local_40 = piVar9;
					local_38 = pSVar5;
					do {
						pSVar5 = local_38;
						iVar1 = __this_01._size;
						pMVar11 = (MethodInfo)__this_00.get_Item(iVar10);
						pSVar6 = (List<string>)pSVar5.get_Item(iVar10);
						if (iVar10 < iVar1) {
							pSVar7 = (List<string>)__this_01.get_Item(iVar10);
						}
						else {
							pSVar7 = il2cpp_codegen_object_new(typeof(List<string>)) ;
							pSVar7 = new List<string>();
						}
						this.CreateRow((List<string>)pMVar11, pSVar6, pSVar7, tooltipPopup);
						iVar10 = iVar10 + 1;
					} while (iVar10 < *local_40);
				}
				goto label_05cbfa5d;
			}
		}
		piVar9 = &__this_00._size;
		if (pSVar5 == null) {
			if (0 < *piVar9) {
				__this_00.get_Item(0);
				throw new NullReferenceException();
			}
		}
		else if (0 < *piVar9) {
			iVar10 = 0;
			do {
				pMVar11 = (MethodInfo)__this_00.get_Item(iVar10);
				pSVar6 = (List<string>)pSVar5.get_Item(iVar10);
				pSVar7 = new List<string>();
				this.CreateRow((List<string>)pMVar11, pSVar6, pSVar7, tooltipPopup);
				iVar10 = iVar10 + 1;
			} while (iVar10 < __this_00._size);
		}
	label_05cbfa5d: ;
		this.Show();
		return;
	}

	[Token(Token = "0x6004950")]
	[Address(RVA = "0x5BC02E0", Offset = "0x5BBF2E0", VA = "0x5BC02E0")]
	private void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$OnBottomBarButtonClick): clean
		this.Hide();
		return;
	}

	[Token(Token = "0x6004951")]
	[Address(RVA = "0x5BBFB70", Offset = "0x5BBEB70", VA = "0x5BBFB70")]
	protected void CreateRow(List<string> items, List<string> icons, List<string> tooltips, TooltipPopup tooltipPopup)
	{
		// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$CreateRow): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar3;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		UnityEvent __this_01;
		bool bVar6;
		GameObject __this_02;
		IconPickPopup.c__DisplayClass25_0 pUVar7;
		Transform pUVar8;
		Object uo;
		String pSVar9;
		Button pUVar10;
		UnityAction __this_03;
		String name;
		Texture value;
		RawImage __this_04;
		HoverTooltip pUVar11;
		Text pUVar12;
		int index;
		float spacing;
		Color UVar13;

		pUVar8 = this.SinglePanel;
		spacing = this.get_VerticalSpacing();
		__this_02 = ElementFactory.CreateHorizontalGroup(pUVar8, spacing, 3);
		__this_00 = this._groups;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = __this_00._items;
			if (pUVar4 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pUVar4.Length) {
					__this_00._size = uVar2 + 1;
					pUVar4[(int)uVar2] = __this_02;
				}
				else {
					__this_00.AddWithResize((object)__this_02);
				}
				if (items != null) {
					iVar3 = items._size;
					if (__this_02 == null) {
						if (0 < iVar3) {
							pUVar7 = new IconPickPopup.c__DisplayClass25_0();
							if (pUVar7 != null) {
								pUVar7.__4__this = this;
								throw new NullReferenceException();
							}
							goto label_05cc027c;
						}
					}
					else if (0 < iVar3) {
						index = 0;
						do {
							pUVar7 = new IconPickPopup.c__DisplayClass25_0();
							if (pUVar7 == null) goto label_05cc027c;
							pUVar7.__4__this = this;
							pUVar8 = __this_02.transform;
							uo = (Object)ElementFactory.InstantiateAndBind(pUVar8, "Prefabs/Misc/MapEditorObjectButton");
							pSVar9 = items.get_Item(index);
							pUVar7.itemName = pSVar9;
							pUVar7.index = this._currentIndex;
							if ((uo == null) ||(pUVar10 = uo.GetComponent<Button>(), pUVar10 == null)) goto label_05cc027c;
							__this_01 = (UnityEvent)pUVar10.m_OnClick;
							__this_03 = new UnityAction((object)pUVar7, (intptr_t)MethodInfo_UI_IconPickPopup_c__DisplayClass25_0_CreateRow_b__0);
							if (__this_01 == null) goto label_05cc027c;
							__this_01.AddListener(__this_03);
							piVar1 = &this._currentIndex;
							*piVar1 = *piVar1 + 1;
							if (icons == null) {
								throw new NullReferenceException();
							}
							pSVar9 = icons.get_Item(index);
							bVar6 = (pSVar9 != (String)**(ulong*)(g_data_07556758 + 0xb8));
							if (bVar6) {
								pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
								name = icons.get_Item(index);
								if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(ResourceManager)) ;
								}
								value = (Texture)ResourceManager.LoadAsset(pSVar9, name, true, false) ;
								if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
									throw new InvalidCastException();
								}
								pUVar8 = uo.transform ;
								if (pUVar8 == null) {
									throw new NullReferenceException();
								}
								pUVar8 = pUVar8.Find("Icon");
								if (pUVar8 == null) {
									throw new NullReferenceException();
								}
								__this_04 = pUVar8.GetComponent<RawImage>();
								if (__this_04 == null) {
									throw new NullReferenceException();
								}
								__this_04.texture = value;
								if (tooltips == null) {
									throw new NullReferenceException();
								}
								if (index < tooltips._size) {
									pSVar9 = tooltips.get_Item(index);
									bVar6 = (pSVar9 != (String)**(ulong*)(g_data_07556758 + 0xb8));
									if (bVar6) {
										pUVar11 = ComponentHolderProtocol.GetOrAddComponent<HoverTooltip>(uo);
										pSVar9 = tooltips.get_Item(index);
										if (pUVar11 == null) {
											throw new NullReferenceException();
										}
										pUVar11.Message = pSVar9;
										pUVar11.PopupOverride = tooltipPopup;
									}
								}
							}
							pUVar8 = uo.transform;
							if (((pUVar8 == null) ||(pUVar8 = pUVar8.Find("Text"), pUVar8 == null)) ||(pUVar12 = pUVar8.GetComponent<Text>() , pUVar12 == null)) goto label_05cc027c;
							pUVar12.set_text(pUVar7.itemName);
							pUVar8 = uo.transform;
							if ((pUVar8 == null) ||(pUVar8 = pUVar8.Find("Text"), pUVar8 == null)) goto label_05cc027c;
							pUVar12 = pUVar8.GetComponent<Text>();
							UVar13 = UIManager.GetThemeColor("DefaultPanel", "DefaultLabel", "TextColor", "DefaultPanel");
							if (pUVar12 == null) goto label_05cc027c;
							pUVar12.set_color(UVar13);
							index = index + 1;
						} while (index < items._size);
					}
					return;
				}
			}
		}
	label_05cc027c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004952")]
	[Address(RVA = "0x5BC0310", Offset = "0x5BBF310", VA = "0x5BC0310", Slot = "62")]
	protected virtual void OnSelectObject(string name, int index)
	{
		// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$OnSelectObject): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		uint uVar3;
		Text pUVar4;
		TypedSetting<T> __this_00;
		TypedSetting<T> pSVar5;
		Int32[] pSVar6;
		UnityAction pUVar7;

		pUVar4 = this._label;
		if (pUVar4 == null) {
			throw new NullReferenceException();
		}
		pUVar4.set_text(name);
		__this_00 = (TypedSetting<T>)this._setting;
		if (__this_00 != null) {
			pSVar5 = __this_00.klass;
			bVar1 = (pSVar5._2).typeHierarchyDepth;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) {
				__this_00.Value = (object)name;
				pUVar7 = this._onSelect;
				goto joined_r0x05cc0421;
			}
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) {
				pSVar6 = this._intOptionValues;
				if ((pSVar6 != null) && (uVar3 = (uint)pSVar6.Length, index < (int)uVar3)) {
					if (uVar3 <= (uint)index) {
						throw new IndexOutOfRangeException();
					}
					index = pSVar6[index];
				}
				__this_00.Value = index;
			}
		}
		pUVar7 = this._onSelect;
	joined_r0x05cc0421: ;
		if (pUVar7 != null) {
			(*(code)pUVar7.invoke_impl)(pUVar7.method_code,pUVar7.method);
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x6004953")]
	[Address(RVA = "0x5BC0480", Offset = "0x5BBF480", VA = "0x5BC0480")]
	public IconPickPopup()
	{
		// Lifted from source/cpp/UI/IconPickPopup.c (UI.IconPickPopup$$.ctor): clean
		MethodInfo method_00;

		method_00 = new List<GameObject>();
		this._groups = (List<GameObject>)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/IconPickPopup.c.

	// UI.IconPickPopup.<>c__DisplayClass25_0$$.ctor: clean
	private void c__DisplayClass25_0__ctor()
	{
		base();
		return;
	}

	// UI.IconPickPopup$$<Setup>b__22_0: clean
	private void Setup_b__22_0()
	{
		this.Hide();
		return;
	}

	// UI.IconPickPopup.<>c__DisplayClass25_0$$<CreateRow>b__0: clean
	private void c__DisplayClass25_0__CreateRow_b__0()
	{
		IconPickPopup pUVar1;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.OnSelectObject(this.itemName, this.index);
		return;
	}
}
