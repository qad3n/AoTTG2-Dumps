// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E9")]
public sealed class GisketchFormState : MonoBehaviour
{
	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, string> _baseline;

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x52A3880", Offset = "0x52A2880", VA = "0x52A3880")]
	public void CaptureBaseline()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$CaptureBaseline): clean
		Dictionary<object, object> pSVar1;
		GisketchFormField __this_00;
		uint uVar2;
		Object[] pSVar3;
		String value;
		uint uVar4;
		MethodInfo key;

		pSVar1 = (Dictionary<object, object>)this._baseline;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar3 = this.GetComponentsInChildren<GisketchFormField>(true);
			if (pSVar3 != null) {
				uVar2 = (uint)pSVar3.Length;
				if (0 < (int)uVar2) {
					uVar4 = 0;
					do {
						if (uVar2 <= uVar4) {
							throw new IndexOutOfRangeException();
						}
						__this_00 = (GisketchFormField)pSVar3[(int)uVar4];
						if (__this_00 == null) goto label_053a396e;
						pSVar1 = (Dictionary<object, object>)this._baseline;
						key = (MethodInfo)__this_00._Key_k__BackingField;
						value = __this_00.CurrentValue();
						if (pSVar1 == null) goto label_053a396e;
						pSVar1.set_Item((object)key, (object)value);
						uVar4 = uVar4 + 1;
						uVar2 = (uint)pSVar3.Length;
					} while ((int)uVar4 < (int)uVar2);
				}
				return;
			}
		}
	label_053a396e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x52A39C0", Offset = "0x52A29C0", VA = "0x52A39C0")]
	public void ResetToBaseline()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$ResetToBaseline): 4 lines keep C-only constructs
		object pIVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		uint uVar3;
		Object[] pSVar4;
		object* ppIVar5;
		uint uVar6;
		IntPtr pvVar7;
		object local_38;

		local_38 = null;
		pSVar4 = this.GetComponentsInChildren<GisketchFormField>(true);
		if (pSVar4 == null) {
	label_053a3aec: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)pSVar4.Length;
		if (0 < (int)uVar3) {
			uVar6 = 0;
			do {
				if (uVar3 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				pIVar1 = pSVar4[(int)uVar6];
				if ((pIVar1 == null) ||(__this_00 = (Dictionary<object, object>)this._baseline, __this_00 == null)) goto label_053a3aec;
				bVar2 = __this_00.TryGetValue((object)pIVar1[3].klass, ref local_38);
				ppIVar5 = &local_38;
				if (!bVar2) {
					ppIVar5 = *(object**)(g_data_07556758 + 0xb8);
				}
				pvVar7 = *ppIVar5;
				if (pvVar7 == null) {
					pvVar7 = (IntPtr)**(long*)(g_data_07556758 + 0xb8);
				}
				pIVar1[2].monitor = pvVar7;
				uVar6 = uVar6 + 1;
				uVar3 = (uint)pSVar4.Length;
			} while ((int)uVar6 < (int)uVar3);
		}
		return;
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x52A3B00", Offset = "0x52A2B00", VA = "0x52A3B00")]
	public bool HasDirty()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$HasDirty): 2 lines keep C-only constructs
		GisketchFormField __this_00;
		Dictionary<object, object> __this_01;
		String b;
		bool bVar1;
		Object[] pSVar2;
		String a;
		uint uVar3;
		object* ppIVar4;
		uint uVar5;
		MethodInfo method_00;
		object pIStack_38;

		pIStack_38 = null;
		pSVar2 = this.GetComponentsInChildren<GisketchFormField>(true);
		if (pSVar2 == null) {
	label_053a3c21: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)pSVar2.Length;
		uVar5 = 0;
		if ((int)uVar3 < 1) {
			bVar1 = false;
		}
		else {
			do {
				if (uVar3 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = (GisketchFormField)pSVar2[(int)uVar5];
				if ((__this_00 == null) ||(__this_01 = (Dictionary<object, object>)this._baseline, __this_01 == null)) goto label_053a3c21;
				method_00 = (MethodInfo)__this_00._Key_k__BackingField;
				bVar1 = __this_01.TryGetValue((object)method_00, ref pIStack_38);
				ppIVar4 = &pIStack_38;
				if (!bVar1) {
					ppIVar4 = *(object**)(g_data_07556758 + 0xb8);
				}
				b = (String)*ppIVar4;
				a = __this_00.CurrentValue();
				bVar1 = String.Equals(a, b, 4);
				if (!bVar1) break;
				uVar5 = uVar5 + 1;
				uVar3 = (uint)pSVar2.Length;
			} while ((int)uVar5 < (int)uVar3);
			bVar1 = !bVar1;
		}
		return bVar1;
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x52A3C30", Offset = "0x52A2C30", VA = "0x52A3C30")]
	public void SetDraft(string key, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$SetDraft): 1 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		uint uVar3;
		Object[] pSVar4;
		uint uVar5;

		bVar2 = String.IsNullOrEmpty(key);
		if (!bVar2) {
			pSVar4 = this.GetComponentsInChildren<GisketchFormField>(true);
			if (pSVar4 == null) {
	label_053a3d1b: ;
				throw new NullReferenceException();
			}
			uVar3 = (uint)pSVar4.Length;
			if (0 < (int)uVar3) {
				uVar5 = 0;
				do {
					if (uVar3 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					pIVar1 = pSVar4[(int)uVar5];
					if (pIVar1 == null) goto label_053a3d1b;
					bVar2 = String.Equals((String)pIVar1[3].klass, key, 5);
					if (bVar2) {
						if (value == null) {
							value = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						pIVar1[2].monitor = value;
						return;
					}
					uVar5 = uVar5 + 1;
					uVar3 = (uint)pSVar4.Length;
				} while ((int)uVar5 < (int)uVar3);
			}
		}
		return;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x52A3D20", Offset = "0x52A2D20", VA = "0x52A3D20")]
	public static void SetDraft(GameObject source, string key, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$SetDraft): clean
		bool bVar1;
		GisketchFormState __this;

		__this = GisketchFormState.Find(source);
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			GisketchFormState.SetDraft(__this, key, value);
			return;
		}
		return;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x52A3EC0", Offset = "0x52A2EC0", VA = "0x52A3EC0")]
	public static bool IsDirty(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$IsDirty): clean
		bool bVar1;
		GisketchFormState __this;

		__this = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_053a3f6f;
			__this = root.GetComponent<GisketchFormState>();
		}
		bVar1 = ((Object)__this != null);
		if (!bVar1) {
			return false;
		}
		if (__this != null) {
			bVar1 = __this.HasDirty();
			return bVar1;
		}
	label_053a3f6f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x52A3F80", Offset = "0x52A2F80", VA = "0x52A3F80")]
	public static void Reset(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$Reset): clean
		bool bVar1;
		GisketchFormState __this;

		__this = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_053a402d;
			__this = root.GetComponent<GisketchFormState>();
		}
		bVar1 = ((Object)__this != null);
		if (!bVar1) {
			return;
		}
		if (__this != null) {
			__this.ResetToBaseline();
			return;
		}
	label_053a402d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x52A3DA0", Offset = "0x52A2DA0", VA = "0x52A3DA0")]
	private static GisketchFormState Find(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$Find): clean
		bool bVar1;
		GisketchFormState pGVar2;
		Transform pUVar3;

		bVar1 = ((Object)source == null);
		if (bVar1) {
			return null;
		}
		if (source != null) {
			pGVar2 = source.GetComponentInParent<GisketchFormState>(true);
			bVar1 = ((Object)pGVar2 != null);
			if (bVar1) {
				return pGVar2;
			}
			pUVar3 = source.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.root;
				bVar1 = ((Object)pUVar3 != null);
				if (!bVar1) {
					return null;
				}
				if (pUVar3 != null) {
					pGVar2 = pUVar3.GetComponentInChildren<GisketchFormState>(true);
					return pGVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x52A3980", Offset = "0x52A2980", VA = "0x52A3980")]
	private GisketchFormField[] Fields()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$Fields): clean
		GisketchFormField[] pGVar1;

		pGVar1 = (GisketchFormField[])this.GetComponentsInChildren<GisketchFormField>(true);
		return pGVar1;
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x52A4040", Offset = "0x52A3040", VA = "0x52A4040")]
	public GisketchFormState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c (Gisketch.Aottg2UI.Actions.GisketchFormState$$.ctor): 1 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, string> __this_00;

		if (Il2CppMethodInitialized_07542bc7 == false) {
			Il2CppMethodInitialized_07542bc7 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new Dictionary<string, string>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._baseline = __this_00;
		base();
		return;
	}
}
