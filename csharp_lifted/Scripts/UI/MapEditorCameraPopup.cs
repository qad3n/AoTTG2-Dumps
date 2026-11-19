// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCameraPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorCameraPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCameraPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200089D")]
internal class MapEditorCameraPopup : PromptPopup
{
	[Token(Token = "0x4002B74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<InputSettingElement> _inputs;

	[Token(Token = "0x4002B75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _positionX;

	[Token(Token = "0x4002B76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _positionY;

	[Token(Token = "0x4002B77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _positionZ;

	[Token(Token = "0x4002B78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4002B79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4002B7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x17000E6C")]
	protected override string Title
	{
		[Token(Token = "0x6005210")]
		[Address(RVA = "0x5C6BE50", Offset = "0x5C6AE50", VA = "0x5C6BE50", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Tools", "Camera", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E6D")]
	protected override float Width
	{
		[Token(Token = "0x6005211")]
		[Address(RVA = "0x5C6BEF0", Offset = "0x5C6AEF0", VA = "0x5C6BEF0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$get_Width): clean
			return 645.0;
		}
	}

	[Token(Token = "0x17000E6E")]
	protected override float Height
	{
		[Token(Token = "0x6005212")]
		[Address(RVA = "0x5C6BF00", Offset = "0x5C6AF00", VA = "0x5C6BF00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$get_Height): clean
			return 310.0;
		}
	}

	[Token(Token = "0x17000E6F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005213")]
		[Address(RVA = "0x5C6BF10", Offset = "0x5C6AF10", VA = "0x5C6BF10", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E70")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005214")]
		[Address(RVA = "0x5C6BF20", Offset = "0x5C6AF20", VA = "0x5C6BF20", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000E71")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005215")]
		[Address(RVA = "0x5C6BF30", Offset = "0x5C6AF30", VA = "0x5C6BF30", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x6005216")]
	[Address(RVA = "0x5C6BF40", Offset = "0x5C6AF40", VA = "0x5C6BF40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$Setup): 14 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Transform pUVar3;
		List<InputSettingElement> pSVar4;
		FloatSetting pSVar5;
		InputSettingElement[] pUVar6;
		int fontSize;
		String pSVar8;
		ElementStyle __this_00;
		UnityAction pUVar9;
		GameObject pUVar10;
		InputSettingElement pUVar11;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar8 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 100.0, 20.0, pSVar8);
		pUVar3 = this.BottomBar;
		pSVar8 = UIManager.GetLocaleCommon("Save");
		pUVar9 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_0);
		ElementFactory.CreateTextButton(pUVar3, __this_00, pSVar8, 0.0, pUVar9);
		pUVar3 = this.BottomBar;
		pSVar8 = UIManager.GetLocaleCommon("Cancel");
		pUVar9 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_1);
		ElementFactory.CreateTextButton(pUVar3, __this_00, pSVar8, 0.0, pUVar9);
		pUVar3 = this.DoublePanelLeft;
		pSVar4 = this._inputs;
		pSVar5 = this._positionX;
		pSVar8 = UIManager.GetLocale("MapEditor", "Camera", "PositionX", "", "");
		pUVar10 = ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar5, pSVar8, "", 120.0, 40.0, false, null, null, null, null);
		if (pUVar10 != null) {
			pUVar11 = pUVar10.GetComponent<InputSettingElement>();
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pUVar6 = pSVar4._items;
				if (pUVar6 != null) {
					uVar2 = pSVar4._size;
					if (uVar2 < (uint)pUVar6.Length) {
						pSVar4._size = uVar2 + 1;
						pUVar6[(int)uVar2] = pUVar11;
					}
					else {
						pSVar4.AddWithResize((object)pUVar11);
					}
					pUVar3 = this.DoublePanelLeft;
					pSVar4 = this._inputs;
					pSVar5 = this._positionY;
					pSVar8 = UIManager.GetLocale("MapEditor", "Camera", "PositionY", "", "");
					pUVar10 = ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar5, pSVar8, "", 120.0, 40.0, false, null, null, null, null);
					if (pUVar10 != null) {
						pUVar11 = pUVar10.GetComponent<InputSettingElement>();
						if (pSVar4 != null) {
							piVar1 = &pSVar4._version;
							*piVar1 = *piVar1 + 1;
							pUVar6 = pSVar4._items;
							if (pUVar6 != null) {
								uVar2 = pSVar4._size;
								if (uVar2 < (uint)pUVar6.Length) {
									pSVar4._size = uVar2 + 1;
									pUVar6[(int)uVar2] = pUVar11;
								}
								else {
									pSVar4.AddWithResize((object)pUVar11);
								}
								pUVar3 = this.DoublePanelLeft;
								pSVar4 = this._inputs;
								pSVar5 = this._positionZ;
								pSVar8 = UIManager.GetLocale("MapEditor", "Camera", "PositionZ", "", "");
								pUVar10 = ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar5, pSVar8, "", 120.0, 40.0, false, null, null, null, null);
								if (pUVar10 != null) {
									pUVar11 = pUVar10.GetComponent<InputSettingElement>();
									if (pSVar4 != null) {
										piVar1 = &pSVar4._version;
										*piVar1 = *piVar1 + 1;
										pUVar6 = pSVar4._items;
										if (pUVar6 != null) {
											uVar2 = pSVar4._size;
											if (uVar2 < (uint)pUVar6.Length) {
												pSVar4._size = uVar2 + 1;
												pUVar6[(int)uVar2] = pUVar11;
											}
											else {
												pSVar4.AddWithResize((object)pUVar11);
											}
											pUVar3 = this.DoublePanelRight;
											pSVar4 = this._inputs;
											pSVar5 = this._rotationX;
											pSVar8 = UIManager.GetLocale("MapEditor", "Camera", "RotationX", "", "");
											pUVar10 = ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar5, pSVar8, "", 120.0, 40.0, false, null, null, null, null);
											if (pUVar10 != null) {
												pUVar11 = pUVar10.GetComponent<InputSettingElement>();
												if (pSVar4 != null) {
													piVar1 = &pSVar4._version;
													*piVar1 = *piVar1 + 1;
													pUVar6 = pSVar4._items;
													if (pUVar6 != null) {
														uVar2 = pSVar4._size;
														if (uVar2 < (uint)pUVar6.Length) {
															pSVar4._size = uVar2 + 1;
															pUVar6[(int)uVar2] = pUVar11;
														}
														else {
															pSVar4.AddWithResize((object)pUVar11);
														}
														pUVar3 = this.DoublePanelRight;
														pSVar4 = this._inputs;
														pSVar5 = this._rotationY;
														pSVar8 = UIManager.GetLocale("MapEditor", "Camera", "RotationY", "", "");
														pUVar10 = ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar5, pSVar8, "", 120.0, 40.0, false, null, null, null, null);
														if (pUVar10 != null) {
															pUVar11 = pUVar10.GetComponent<InputSettingElement>();
															if (pSVar4 != null) {
																piVar1 = &pSVar4._version;
																*piVar1 = *piVar1 + 1;
																pUVar6 = pSVar4._items;
																if (pUVar6 != null) {
																	uVar2 = pSVar4._size;
																	if (uVar2 < (uint)pUVar6.Length) {
																		pSVar4._size = uVar2 + 1;
																		pUVar6[(int)uVar2] = pUVar11;
																	}
																	else {
																		pSVar4.AddWithResize((object)pUVar11);
																	}
																	pUVar3 = this.DoublePanelRight;
																	pSVar4 = this._inputs;
																	pSVar5 = this._rotationZ;
																	pSVar8 = UIManager.GetLocale("MapEditor", "Camera", "RotationZ", "", "");
																	pUVar10 = ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar5, pSVar8, "", 120.0, 40.0, false, null, null, null, null);
																	if (pUVar10 != null) {
																		pUVar11 = pUVar10.GetComponent<InputSettingElement>();
																		if (pSVar4 != null) {
																			piVar1 = &pSVar4._version;
																			*piVar1 = *piVar1 + 1;
																			pUVar6 = pSVar4._items;
																			if (pUVar6 != null) {
																				uVar2 = pSVar4._size;
																				if (uVar2 < (uint)pUVar6.Length) {
																					pSVar4._size = uVar2 + 1;
																					pUVar6[(int)uVar2] = pUVar11;
																					return;
																				}
																				pSVar4.AddWithResize((object)pUVar11);
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

	[Token(Token = "0x6005217")]
	[Address(RVA = "0x5C6C770", Offset = "0x5C6B770", VA = "0x5C6C770", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$Show): 4 lines keep C-only constructs
		BaseCamera pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		FloatSetting pSVar3;
		List<InputSettingElement> __this_01;
		bool bVar4;
		GameObject __this_02;
		Vector3 UVar5;
		Vector3 euler;
		Vector3 euler_00;
		Vector3 euler_01;
		Quaternion UStack_58;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		System_Collections_Generic_List_Enumerator_T__o pSStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_02 = this.gameObject;
		if (__this_02 != null) {
			bVar4 = __this_02.activeSelf;
			if (bVar4) {
				return;
			}
			this.Show();
			pCVar1 = SceneLoader.CurrentCamera;
			if (((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
				pSVar3 = this._positionX;
				UVar5 = __this_00.position;
				if (pSVar3 != null) {
					pSVar3.Value = UVar5.x;
					pSVar3 = this._positionY;
					UVar5 = __this_00.position;
					if (pSVar3 != null) {
						pSVar3.Value = UVar5.y;
						pSVar3 = this._positionZ;
						UVar5 = __this_00.position;
						if (pSVar3 != null) {
							pSVar3.Value = UVar5.z;
							pSVar3 = this._rotationX;
							UStack_58 = __this_00.rotation;
							UVar5 = Quaternion.Internal_ToEulerRad(ref UStack_58);
							euler.x = UVar5.x * 57.29578;
							euler.y = UVar5.y * 57.29578;
							euler.z = UVar5.z * 57.29578;
							UVar5 = Quaternion.Internal_MakePositive(euler);
							if (pSVar3 != null) {
								pSVar3.Value = UVar5.x;
								pSVar3 = this._rotationY;
								UStack_58 = __this_00.rotation;
								UVar5 = Quaternion.Internal_ToEulerRad(ref UStack_58);
								euler_00.x = UVar5.x * 57.29578;
								euler_00.y = UVar5.y * 57.29578;
								euler_00.z = UVar5.z * 57.29578;
								UVar5 = Quaternion.Internal_MakePositive(euler_00);
								if (pSVar3 != null) {
									pSVar3.Value = UVar5.y;
									pSVar3 = this._rotationZ;
									UStack_58 = __this_00.rotation;
									UVar5 = Quaternion.Internal_ToEulerRad(ref UStack_58);
									euler_01.x = UVar5.x * 57.29578;
									euler_01.y = UVar5.y * 57.29578;
									euler_01.z = UVar5.z * 57.29578;
									UVar5 = Quaternion.Internal_MakePositive(euler_01);
									if (pSVar3 != null) {
										pSVar3.Value = UVar5.z;
										__this_01 = this._inputs;
										if (__this_01 != null) {
											SStack_48 = __this_01.GetEnumerator();
											pSStack_28 = &SStack_48;
											while(true) {
												bVar4 = SStack_48.MoveNext();
												if (!bVar4) {
													SStack_48.Dispose();
													return;
												}
												if (SStack_48._current == null) break;
												(*(SStack_48._current).klass.vtable[6].methodPtr)(SStack_48._current,(SStack_48._current).klass.vtable[6].method);
											}
											throw new NullReferenceException();
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

	[Token(Token = "0x6005218")]
	[Address(RVA = "0x5C6CAC0", Offset = "0x5C6BAC0", VA = "0x5C6CAC0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$OnButtonClick): clean
		BaseCamera pCVar1;
		BaseComponentCache pUVar2;
		FloatSetting pSVar3;
		FloatSetting pSVar4;
		FloatSetting pSVar5;
		Transform __this_00;
		bool bVar6;
		Vector3 value;
		Quaternion value_00;
		Vector3 local_28;

		bVar6 = (name == "Cancel");
		if (bVar6) {
			this.Hide();
			return;
		}
		bVar6 = (name == "Save");
		if (!bVar6) {
			return;
		}
		pCVar1 = SceneLoader.CurrentCamera;
		if (((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(pSVar3 = this._positionX, pSVar3 != null)) &&((pSVar4 = this._positionY, pSVar4 != null &&(pSVar5 = this._positionZ, pSVar5 != null)))) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
			value.y = pSVar4._value;
			value.x = pSVar3._value;
			value.z = pSVar5._value;
			__this_00.position = value;
			pSVar3 = this._rotationX;
			if (((pSVar3 != null) &&(pSVar4 = this._rotationY, pSVar4 != null)) &&(pSVar5 = this._rotationZ, pSVar5 != null)) {
				local_28.x = pSVar3._value * 0.017453292;
				local_28.y = pSVar4._value * 0.017453292;
				local_28.z = pSVar5._value * 0.017453292;
				value_00 = Quaternion.Internal_FromEulerRad(ref local_28);
				__this_00.rotation = value_00;
				this.Hide();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005219")]
	[Address(RVA = "0x5C6CC70", Offset = "0x5C6BC70", VA = "0x5C6CC70")]
	public MapEditorCameraPopup()
	{
		// Lifted from source/cpp/UI/MapEditorCameraPopup.c (UI.MapEditorCameraPopup$$.ctor): clean
		List<InputSettingElement> __this_00;
		FloatSetting pSVar1;

		__this_00 = new List<InputSettingElement>();
		this._inputs = __this_00;
		pSVar1 = new FloatSetting();
		this._positionX = pSVar1;
		pSVar1 = new FloatSetting();
		this._positionY = pSVar1;
		pSVar1 = new FloatSetting();
		this._positionZ = pSVar1;
		pSVar1 = new FloatSetting();
		this._rotationX = pSVar1;
		pSVar1 = new FloatSetting();
		this._rotationY = pSVar1;
		pSVar1 = new FloatSetting();
		this._rotationZ = pSVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorCameraPopup.c.

	// UI.MapEditorCameraPopup$$<Setup>b__19_0: clean
	private void Setup_b__19_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.MapEditorCameraPopup$$<Setup>b__19_1: clean
	private void Setup_b__19_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
