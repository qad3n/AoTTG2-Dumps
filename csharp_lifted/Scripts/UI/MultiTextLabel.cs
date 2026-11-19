// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiTextLabel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiTextLabel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MultiTextLabel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000853")]
internal class MultiTextLabel : MonoBehaviour
{
	[Token(Token = "0x4002A28")]
	[FieldOffset(Offset = "0x20")]
	private Text[] texts;

	[Token(Token = "0x6004F96")]
	[Address(RVA = "0x5C3A0E0", Offset = "0x5C390E0", VA = "0x5C3A0E0")]
	public void Setup(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$Setup): 3 lines keep C-only constructs
		Text[]* targetAddress;
		Text[] pUVar1;
		Transform parent_00;
		GameObject __this_00;
		Text pUVar2;
		object pIVar3;
		long lVar4;
		uint uVar5;

		pUVar1 = (Text[])new Text[numberOfLabels];
		targetAddress = &this.texts;
		this.texts = pUVar1;
		if (0 < numberOfLabels) {
			uVar5 = 0;
			lVar4 = 0x20;
			do {
				pUVar1 = this.texts;
				parent_00 = this.transform;
				__this_00 = ElementFactory.CreateWhiteLabel(parent_00, style, (String)**(ulong*)(g_data_07556758 + 0xb8), fontStyle, anchor);
				if (__this_00 == null) {
	label_05d3a24a: ;
					throw new NullReferenceException();
				}
				pUVar2 = __this_00.GetComponent<Text>() ;
				if (pUVar1 == null) goto label_05d3a24a;
				if (pUVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst((object)pUVar2, (((pUVar1.obj).klass)._1).element_class);
					if (pIVar3 == null) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if ((uint)pUVar1.Length <= uVar5) {
	label_05d3a24f: ;
					throw new IndexOutOfRangeException();
				}
				*(Text*)((long)pUVar1.m_Items + lVar4 + -0x20) = pUVar2;
				pUVar1 = *targetAddress;
				if (pUVar1 == null) goto label_05d3a24a;
				if ((uint)pUVar1.Length <= uVar5) goto label_05d3a24f;
				pUVar2 = *(Text*)((long)pUVar1.m_Items + lVar4 + -0x20);
				if (pUVar2 == null) goto label_05d3a24a;
				pUVar2.supportRichText = richText;
				uVar5 = uVar5 + 1;
				lVar4 = lVar4 + 8;
			} while (numberOfLabels != uVar5);
		}
		return;
	}

	[Token(Token = "0x6004F97")]
	[Address(RVA = "0x5C3A270", Offset = "0x5C39270", VA = "0x5C3A270")]
	public void SetEnabled(bool enabled)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$SetEnabled): clean
		bool bVar1;
		GameObject pUVar2;

		pUVar2 = this.gameObject;
		if (pUVar2 != null) {
			bVar1 = pUVar2.activeSelf;
			if (bVar1 == enabled) {
				return;
			}
			pUVar2 = this.gameObject;
			if (pUVar2 != null) {
				pUVar2.SetActive(enabled);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F98")]
	[Address(RVA = "0x5C3A2D0", Offset = "0x5C392D0", VA = "0x5C3A2D0")]
	public bool GetEnabled()
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$GetEnabled): clean
		bool bVar1;
		GameObject __this_00;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6004F99")]
	[Address(RVA = "0x5C3A2F0", Offset = "0x5C392F0", VA = "0x5C3A2F0")]
	public void SetElementEnabled(int index, bool enabled)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$SetElementEnabled): clean
		uint uVar1;
		Text[] pUVar2;
		bool bVar3;
		GameObject pUVar4;

		if (index < 0) {
			return;
		}
		pUVar2 = this.texts;
		if (pUVar2 != null) {
			uVar1 = (uint)pUVar2.Length;
			if ((int)uVar1 <= index) {
				return;
			}
			if (uVar1 <= (uint)index) {
	label_05d3a387: ;
				throw new IndexOutOfRangeException();
			}
			if ((pUVar2[(uint)index] != null) &&(pUVar4 = (pUVar2[(uint)index]).gameObject, pUVar4 != null)) {
				bVar3 = pUVar4.activeSelf;
				if (bVar3 == enabled) {
					return;
				}
				pUVar2 = this.texts;
				if (pUVar2 != null) {
					if ((uint)pUVar2.Length <= (uint)index) goto label_05d3a387;
					if ((pUVar2[(uint)index] != null) &&(pUVar4 = (pUVar2[(uint)index]).gameObject, pUVar4 != null)) {
						pUVar4.SetActive(enabled);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F9A")]
	[Address(RVA = "0x5C3A390", Offset = "0x5C39390", VA = "0x5C3A390")]
	public bool GetElementEnabled(int index)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$GetElementEnabled): clean
		uint uVar1;
		Text[] pUVar2;
		bool bVar3;
		GameObject __this_00;

		if (index < 0) {
			return false;
		}
		pUVar2 = this.texts;
		if (pUVar2 != null) {
			uVar1 = (uint)pUVar2.Length;
			if ((int)uVar1 <= index) {
				return false;
			}
			if (uVar1 <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			if ((pUVar2[(uint)index] != null) &&(__this_00 = (pUVar2[(uint)index]).gameObject, __this_00 != null)) {
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F9B")]
	[Address(RVA = "0x5C3A3E0", Offset = "0x5C393E0", VA = "0x5C3A3E0")]
	public void SetValue(int index, string value)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$SetValue): clean
		uint uVar1;
		Text[] pUVar2;
		Text pUVar3;

		if (index < 0) {
			return;
		}
		pUVar2 = this.texts;
		if (pUVar2 != null) {
			uVar1 = (uint)pUVar2.Length;
			if ((int)uVar1 <= index) {
				return;
			}
			if (uVar1 <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			pUVar3 = pUVar2[(uint)index];
			if (pUVar3 != null) {
				pUVar3.set_text(value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F9C")]
	[Address(RVA = "0x5C3A430", Offset = "0x5C39430", VA = "0x5C3A430")]
	public void ChangeTextColor(int index, Color color)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$ChangeTextColor): clean
		uint uVar1;
		Text[] pUVar2;
		Text pUVar3;

		if (index < 0) {
			return;
		}
		pUVar2 = this.texts;
		if (pUVar2 != null) {
			uVar1 = (uint)pUVar2.Length;
			if ((int)uVar1 <= index) {
				return;
			}
			if (uVar1 <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			pUVar3 = pUVar2[(uint)index];
			if (pUVar3 != null) {
				pUVar3.set_color(color);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F9D")]
	[Address(RVA = "0x5C3A480", Offset = "0x5C39480", VA = "0x5C3A480")]
	public string GetValue(int index)
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$GetValue): clean
		uint uVar1;
		Text[] pUVar2;
		Text pUVar3;
		String pSVar4;

		if (index < 0) {
	label_05d3a4b5: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pUVar2 = this.texts;
		if (pUVar2 != null) {
			uVar1 = (uint)pUVar2.Length;
			if ((int)uVar1 <= index) goto label_05d3a4b5;
			if (uVar1 <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			pUVar3 = pUVar2[(uint)index];
			if (pUVar3 != null) {
				return pSVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F9E")]
	[Address(RVA = "0x5C3A4E0", Offset = "0x5C394E0", VA = "0x5C3A4E0")]
	public MultiTextLabel()
	{
		// Lifted from source/cpp/UI/MultiTextLabel.c (UI.MultiTextLabel$$.ctor): clean
		base();
		return;
	}
}
