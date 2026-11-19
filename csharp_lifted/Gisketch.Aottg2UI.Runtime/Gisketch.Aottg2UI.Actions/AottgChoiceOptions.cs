// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CB")]
internal sealed class AottgChoiceOptions
{
	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x10")]
	private readonly GisketchChoiceOptionDefinition[] _items;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x18")]
	private readonly IGisketchLocalizer _localizer;

	[Token(Token = "0x170000A3")]
	public int Count
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x5296350", Offset = "0x5295350", VA = "0x5296350")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_Count): clean
			GisketchChoiceOptionDefinition[] pGVar1;

			pGVar1 = this._items;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			return (int32_t)pGVar1.Length;
		}
	}

	[Token(Token = "0x170000A4")]
	public int EnabledCount
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x5295380", Offset = "0x5294380", VA = "0x5295380")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_EnabledCount): clean
			int iVar1;
			GisketchChoiceOptionDefinition[] pGVar2;
			int iVar3;
			int iVar4;

			pGVar2 = this._items;
			if (pGVar2 != null) {
				iVar1 = (int)pGVar2.Length;
				if (iVar1 < 1) {
					return 0;
				}
				iVar4 = 0;
				iVar3 = 0;
				while (pGVar2[iVar4] != null) {
					iVar3 = iVar3 + (uint)pGVar2[iVar4].enabled;
					iVar4 = iVar4 + 1;
					if (iVar1 == iVar4) {
						return iVar3;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x5298440", Offset = "0x5297440", VA = "0x5298440")]
	private AottgChoiceOptions(GisketchChoiceOptionDefinition[] items, IGisketchLocalizer localizer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$.ctor): clean
		base();
		this._items = items;
		this._localizer = localizer;
		return;
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x5294BC0", Offset = "0x5293BC0", VA = "0x5294BC0")]
	public static AottgChoiceOptions Create(GisketchNodeDefinition node, string value, string[] options, IGisketchLocalizer localizer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Create): 5 lines keep C-only constructs
		AottgChoiceOptions __this;
		GisketchChoiceOptionDefinition[] pGVar1;
		GisketchChoiceOptionDefinition pGVar2;
		String* ppSVar3;
		il2cpp_array_size_t iVar4;
		GisketchChoiceOptionDefinition* targetAddress;
		ulong uVar5;

		if (((node == null) ||(pGVar1 = node.choiceOptions, pGVar1 == null)) ||(pGVar1.Length == 0)) {
			if ((options == null) || (iVar4 = options.Length, iVar4 == 0)) {
				options = (String[])new string[1];
				if (value == null) {
					value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				if (options == null) goto label_05394e5d;
				if ((int)options.Length == 0) goto label_05394e24;
				options[0] = value;
				iVar4 = options.Length;
			}
			pGVar1 = (GisketchChoiceOptionDefinition[])new GisketchChoiceOptionDefinition[(uint32_t)iVar4];
			if (0 < (int)options.Length) {
				if (pGVar1 == null) {
					pGVar2 = new GisketchChoiceOptionDefinition();
					if ((int)options.Length == 0) {
	label_05394e24: ;
						throw new IndexOutOfRangeException();
					}
					if (pGVar2 != null) {
						pGVar2.value = options[0];
						if ((int)options.Length == 0) goto label_05394e24;
						pGVar2.text = options[0];
					}
	label_05394e5d: ;
					throw new NullReferenceException();
				}
				targetAddress = pGVar1.m_Items;
				ppSVar3 = options.m_Items;
				uVar5 = 0;
				do {
					pGVar2 = new GisketchChoiceOptionDefinition();
					if ((uint)options.Length <= uVar5) goto label_05394e24;
					if (pGVar2 == null) goto label_05394e5d;
					pGVar2.value = *ppSVar3;
					if ((uint)options.Length <= uVar5) goto label_05394e24;
					pGVar2.text = *ppSVar3;
					if ((uint)pGVar1.Length <= uVar5) goto label_05394e24;
					*targetAddress = pGVar2;
					uVar5 = uVar5 + 1;
					ppSVar3 = ppSVar3 + 1;
					targetAddress = targetAddress + 1;
				} while ((long)uVar5 < (long)(int)options.Length);
			}
			__this = new AottgChoiceOptions();
			__this._items = pGVar1;
		}
		else {
			__this = new AottgChoiceOptions();
			__this._items = pGVar1;
		}
		__this._localizer = localizer;
		return __this;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x5296C10", Offset = "0x5295C10", VA = "0x5296C10")]
	public GisketchChoiceOptionDefinition Option(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Option): clean
		uint uVar1;
		uint uVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		uint uVar4;

		pGVar3 = this._items;
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		uVar2 = (uint)pGVar3.Length;
		uVar1 = uVar2 - 1;
		if (index < (int)uVar1) {
			uVar1 = index;
		}
		uVar4 = 0;
		if (-1 < index) {
			uVar4 = uVar1;
		}
		if (uVar2 <= uVar4) {
			throw new IndexOutOfRangeException();
		}
		return pGVar3[(int)uVar4];
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x5295330", Offset = "0x5294330", VA = "0x5295330")]
	public bool Enabled(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Enabled): clean
		uint uVar1;
		GisketchChoiceOptionDefinition[] pGVar2;
		uint uVar3;

		if (index < 0) {
			return false;
		}
		pGVar2 = this._items;
		if (pGVar2 != null) {
			uVar1 = (uint)pGVar2.Length;
			if ((int)uVar1 <= index) {
				return false;
			}
			uVar3 = uVar1 - 1;
			if (index < (int)(uVar1 - 1)) {
				uVar3 = index;
			}
			if (uVar1 <= uVar3) {
				throw new IndexOutOfRangeException();
			}
			if (pGVar2[(int)uVar3] != null) {
				return (pGVar2[(int)uVar3].fields).enabled != false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x5295240", Offset = "0x5294240", VA = "0x5295240")]
	public string Value(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Value): clean
		uint uVar1;
		uint uVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		GisketchChoiceOptionDefinition pGVar4;
		String pSVar5;
		bool bVar6;
		uint uVar7;

		pGVar3 = this._items;
		if (pGVar3 != null) {
			uVar2 = (uint)pGVar3.Length;
			uVar1 = uVar2 - 1;
			if (index < (int)uVar1) {
				uVar1 = index;
			}
			uVar7 = 0;
			if (-1 < index) {
				uVar7 = uVar1;
			}
			if (uVar2 <= uVar7) {
				throw new IndexOutOfRangeException();
			}
			pGVar4 = pGVar3[(int)uVar7];
			if (pGVar4 != null) {
				bVar6 = String.IsNullOrEmpty(pGVar4.value);
				if (!bVar6) {
					return pGVar4.value;
				}
				pSVar5 = pGVar4.text;
				if (pSVar5 == null) {
					return (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x5296A70", Offset = "0x5295A70", VA = "0x5296A70")]
	public string Text(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Text): 1 lines keep C-only constructs
		uint uVar1;
		GisketchChoiceOptionDefinition[] pGVar2;
		GisketchChoiceOptionDefinition pGVar3;
		object obj;
		String key;
		bool bVar6;
		String pSVar8;
		uint uVar9;
		GisketchChoiceOptionDefinition pGVar11;
		uint uVar12;

		pGVar2 = this._items;
		if (pGVar2 != null) {
			uVar1 = (uint)pGVar2.Length;
			uVar12 = uVar1 - 1;
			if (index < (int)uVar12) {
				uVar12 = index;
			}
			uVar9 = 0;
			if (-1 < index) {
				uVar9 = uVar12;
			}
			if (uVar1 <= uVar9) {
	label_05396c00: ;
				throw new IndexOutOfRangeException();
			}
			pGVar3 = pGVar2[(int)uVar9];
			if (pGVar3 != null) {
				bVar6 = String.IsNullOrEmpty(pGVar3.textKey);
				if ((!bVar6) && (obj = (object)this._localizer, obj != null)) {
					pSVar8 = pGVar3.text;
					key = pGVar3.textKey;
					pSVar8 = obj.GetText(key, pSVar8);
					return pSVar8;
				}
				bVar6 = String.IsNullOrEmpty(pGVar3.text);
				if (!bVar6) {
					return pGVar3.text;
				}
				pGVar2 = this._items;
				if (pGVar2 != null) {
					uVar1 = (uint)pGVar2.Length;
					uVar12 = uVar1 - 1;
					if (index < (int)uVar12) {
						uVar12 = index;
					}
					uVar9 = 0;
					if (-1 < index) {
						uVar9 = uVar12;
					}
					if (uVar1 <= uVar9) goto label_05396c00;
					pGVar3 = pGVar2[(int)uVar9];
					if (pGVar3 != null) {
						bVar6 = String.IsNullOrEmpty(pGVar3.value);
						if (bVar6) {
							pSVar8 = pGVar3.text;
							if (pSVar8 != null) {
								return pSVar8;
							}
							pGVar11 = *(GisketchChoiceOptionDefinition*)(g_data_07556758 + 0xb8);
						}
						else {
							pGVar11 = &pGVar3.fields;
						}
						return pGVar11.value;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x52950A0", Offset = "0x52940A0", VA = "0x52950A0")]
	public int NextEnabledIndex(int start, int step)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$NextEnabledIndex): clean
		GisketchChoiceOptionDefinition[] pGVar1;
		uint uVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		int iVar6;
		uint uVar7;

		pGVar1 = this._items;
		if (pGVar1 == null) {
	label_0539511c: ;
			throw new NullReferenceException();
		}
		uVar5 = (uint)pGVar1.Length;
		uVar7 = uVar5 - 1;
		if (0 < (int)uVar5) {
			iVar6 = step + start + uVar5;
			iVar3 = 1;
			do {
				uVar4 = iVar6 % (int)uVar5;
				if (-1 < (int)uVar4) {
					uVar2 = uVar4;
					if ((int)uVar7 <= (int)uVar4) {
						uVar2 = uVar7;
					}
					if (uVar5 <= uVar2) {
						throw new IndexOutOfRangeException();
					}
					if (pGVar1[(int)uVar2] == null) goto label_0539511c;
					if ((pGVar1[(int)uVar2].fields).enabled != false) {
						return uVar4;
					}
				}
				iVar3 = iVar3 + 1;
				iVar6 = iVar6 + step;
			} while (iVar3 <= (int)uVar5);
		}
		if (start < (int)uVar7) {
			uVar7 = start;
		}
		uVar5 = 0;
		if (-1 < start) {
			uVar5 = uVar7;
		}
		return uVar5;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x5298480", Offset = "0x5297480", VA = "0x5298480")]
	public static void ApplyDisabledArrowVisual(GameObject go, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$ApplyDisabledArrowVisual): clean
		bool bVar1;
		GisketchDisabledSelectableOpacity __this;

		if (go != null) {
			__this = go.GetComponent<GisketchDisabledSelectableOpacity>();
			bVar1 = ((Object)__this != null);
			if (!bVar1) {
				return;
			}
			if (__this != null) {
				__this.Refresh();
				return;
			}
		}
		throw new NullReferenceException();
	}
}
