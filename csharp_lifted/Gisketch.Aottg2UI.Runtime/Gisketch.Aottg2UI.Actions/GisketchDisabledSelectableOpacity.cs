// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D9")]
[DisallowMultipleComponent]
internal sealed class GisketchDisabledSelectableOpacity : MonoBehaviour
{
	[Token(Token = "0x400046D")]
	private const float DisabledAlpha = 0.5f;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x20")]
	private Selectable _selectable;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x28")]
	private Graphic[] _graphics;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x30")]
	private Color _disabledTint;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x40")]
	private bool _initialized;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x41")]
	private bool _lastInteractable;

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x529E910", Offset = "0x529D910", VA = "0x529E910")]
	public void Setup(float disabledAlpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Setup): clean
		float fVar1;

		fVar1 = 1.0;
		if (disabledAlpha <= 1.0) {
			fVar1 = disabledAlpha;
		}
		this._disabledTint.r = 1.0;
		this._disabledTint.g = 1.0;
		this._disabledTint.b = 1.0;
		this._disabledTint.a = (float)(-(uint)(0.0 <= disabledAlpha) & (uint)fVar1);
		this._initialized = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x529E950", Offset = "0x529D950", VA = "0x529E950")]
	public void Setup(Color disabledTint)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Setup): clean
		this._disabledTint = disabledTint;
		this._initialized = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x529E960", Offset = "0x529D960", VA = "0x529E960")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Awake): clean
		Selectable pUVar1;
		Graphic[] pUVar2;

		pUVar1 = this.GetComponent<Selectable>();
		this._selectable = pUVar1;
		pUVar2 = (Graphic[])this.GetComponentsInChildren<Graphic>(true);
		this._graphics = pUVar2;
		return;
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x529EA40", Offset = "0x529DA40", VA = "0x529EA40")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnEnable): clean
		Graphic[] method_00;

		method_00 = (Graphic[])this.GetComponentsInChildren<Graphic>(true);
		this._graphics = method_00;
		this._initialized = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x529EAA0", Offset = "0x529DAA0", VA = "0x529EAA0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnDisable): clean
		Color tint;

		tint.b = 1.0;
		tint.a = 1.0;
		tint.r = 1.0;
		tint.g = 1.0;
		this.ApplyTint(tint);
		this._initialized = false;
		return;
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x529ECE0", Offset = "0x529DCE0", VA = "0x529ECE0")]
	private void OnTransformChildrenChanged()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnTransformChildrenChanged): clean
		Graphic[] method_00;

		method_00 = (Graphic[])this.GetComponentsInChildren<Graphic>(true);
		this._graphics = method_00;
		this._initialized = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x529ED40", Offset = "0x529DD40", VA = "0x529ED40")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$LateUpdate): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x5298510", Offset = "0x5297510", VA = "0x5298510")]
	public void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Refresh): 9 lines keep C-only constructs
		Selectable* targetAddress;
		bool bVar1;
		Selectable pUVar2;
		bool bVar3;
		ulong uVar4;
		ulong uVar5;
		Color tint;

		pUVar2 = this._selectable;
		targetAddress = &this._selectable;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			pUVar2 = this.GetComponent<Selectable>();
			this._selectable = pUVar2;
		}
		pUVar2 = *targetAddress;
		bVar1 = ((Object)pUVar2 == null);
		bVar3 = true;
		if (!bVar1) {
			if (*targetAddress == null) {
				throw new NullReferenceException();
			}
			bVar3 = ((*targetAddress).fields).m_Interactable != false;
		}
		if ((this._initialized != false) && (this._lastInteractable == bVar3)) {
			return;
		}
		this._initialized = true;
		this._lastInteractable = bVar3;
		if (bVar3 == false) {
			uVar4._0_4_ = this._disabledTint.r;
			uVar4._4_4_ = this._disabledTint.g;
			uVar5._0_4_ = this._disabledTint.b;
			uVar5._4_4_ = this._disabledTint.a;
		}
		else {
			uVar4 = 0x3f8000003f800000;
			uVar5 = uVar4;
		}
		tint.b = (float)(int)uVar5;
		tint.a = (float)(int)((ulong)uVar5 >> 0x20);
		tint.r = (float)(int)uVar4;
		tint.g = (float)(int)((ulong)uVar4 >> 0x20);
		this.ApplyTint(tint);
		return;
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x529E9F0", Offset = "0x529D9F0", VA = "0x529E9F0")]
	private void CacheGraphics()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$CacheGraphics): clean
		Graphic[] pUVar1;

		pUVar1 = (Graphic[])this.GetComponentsInChildren<Graphic>(true);
		this._graphics = pUVar1;
		return;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x529EAC0", Offset = "0x529DAC0", VA = "0x529EAC0")]
	private void ApplyTint(Color tint)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$ApplyTint): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Graphic __this_00;
		Selectable pUVar3;
		Object y;
		bool bVar4;
		Graphic[] pUVar5;
		CanvasGroup __this_01;
		GameObject __this_02;
		CanvasRenderer __this_03;
		ulong uVar6;
		float fStack_64;

		pUVar5 = this._graphics;
		if (pUVar5 == null) {
			return;
		}
		fStack_64 = tint.a;
		uVar6 = 0;
		do {
			uVar2 = (uint)pUVar5.Length;
			if ((long)(int)uVar2 <= (long)uVar6) {
				return;
			}
			if (uVar2 <= uVar6) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = pUVar5[uVar6];
			bVar4 = ((Object)__this_00 == null);
			if (!bVar4) {
				pUVar3 = this._selectable;
				if (pUVar3 != null) {
					bVar1 = (typeof(Toggle)._2).typeHierarchyDepth;
					if ((bVar1 <= (pUVar3.klass._2).typeHierarchyDepth) &&((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(Toggle))) {
						y = (*(ulong)((sbyte)pUVar3 + 0x108));
						bVar4 = ((Object)__this_00 == y);
						if (bVar4) {
							if (__this_00 != null) {
								__this_01 = __this_00.GetComponent<CanvasGroup>();
								bVar4 = ((Object)__this_01 == null);
								if (bVar4) {
									__this_02 = __this_00.gameObject;
									if (__this_02 == null) goto label_0539eccb;
									__this_01 = __this_02.AddComponent<CanvasGroup>();
								}
								if (__this_01 != null) {
									__this_01.alpha = fStack_64;
									goto label_0539eb80;
								}
							}
							goto label_0539eccb;
						}
					}
				}
				if ((__this_00 == null) ||(__this_03 = __this_00.canvasRenderer, __this_03 == null)) goto label_0539eccb;
				__this_03.SetColor(tint);
			}
	label_0539eb80: ;
			uVar6 = uVar6 + 1;
			pUVar5 = this._graphics;
			if (pUVar5 == null) {
	label_0539eccb: ;
				throw new NullReferenceException();
			}
		} while(true);
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x529ED50", Offset = "0x529DD50", VA = "0x529ED50")]
	public GisketchDisabledSelectableOpacity()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDisabledSelectableOpacity.c (Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$.ctor): clean
		this._disabledTint.r = 1.0;
		this._disabledTint.g = 1.0;
		this._disabledTint.b = 1.0;
		this._disabledTint.a = 0.5;
		base();
		return;
	}
}
