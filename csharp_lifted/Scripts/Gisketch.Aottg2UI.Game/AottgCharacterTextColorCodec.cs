// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F4")]
internal static class AottgCharacterTextColorCodec
{
	[Token(Token = "0x20002F5")]
	public sealed class Document
	{
		[Token(Token = "0x4000EF6")]
		[FieldOffset(Offset = "0x10")]
		public string Text;

		[Token(Token = "0x4000EF7")]
		[FieldOffset(Offset = "0x18")]
		public readonly List<string> Colors;

		[Token(Token = "0x600125A")]
		[Address(RVA = "0x57E8D90", Offset = "0x57E7D90", VA = "0x57E8D90")]
		public Document()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec.Document$$.ctor): clean
			List<string> __this_00;

			__this_00 = new List<string>();
			this.Colors = __this_00;
			base();
			return;
		}
	}

	[Token(Token = "0x4000EF5")]
	public const string White = "FFFFFF";

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x57E0740", Offset = "0x57DF740", VA = "0x57E0740")]
	public static Document Parse(string serialized)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Parse): 7 lines keep C-only constructs
		List<string>* targetAddress;
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar4;
		ushort value;
		AottgCharacterTextColorCodec.Document pGVar5;
		List<string> pSVar6;
		StringBuilder __this;
		String pSVar7;
		MethodInfo in_RCX;
		int index;
		int iVar8;
		String local_48;
		AottgCharacterTextColorCodec.Document local_40;
		AottgCharacterTextColorCodec.Document local_38;

		local_48 = null;
		pSVar6 = new List<string>();
		targetAddress = &pGVar5.Colors;
		pGVar5.Colors = pSVar6;
		pGVar5 = new AottgCharacterTextColorCodec.Document();
		local_38 = &pGVar5.fields;
		pGVar5.Text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this = new StringBuilder();
		if ((serialized != null) ||(serialized = (String)**(long*)(g_data_07556758 + 0xb8), serialized != null)) {
			iVar8 = serialized._stringLength;
			local_40 = pGVar5;
			if (__this == null) {
				if (iVar8 < 1) goto label_058e09e6;
				index = 0;
				do {
					bVar4 = AottgCharacterTextColorCodec.IsColorTag(serialized, index, ref local_48);
					if (!bVar4) {
						serialized.get_Chars(index);
						goto label_058e09e6;
					}
					index = index + 8;
				} while (index < serialized._stringLength);
			}
			else if (0 < iVar8) {
				iVar8 = 0;
				pSVar7 = "FFFFFF";
				do {
					bVar4 = AottgCharacterTextColorCodec.IsColorTag(serialized, iVar8, ref local_48);
					if (bVar4) {
						iVar8 = iVar8 + 7;
						pSVar7 = local_48;
					}
					else {
						value = serialized.get_Chars(iVar8);
						__this.Append(value);
						pSVar6 = *targetAddress;
						if (pSVar6 == null) goto label_058e09e6;
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = pSVar6._items;
						if (pSVar3 == null) goto label_058e09e6;
						uVar2 = pSVar6._size;
						if (uVar2 < (uint)pSVar3.Length) {
							in_RCX = (MethodInfo)(ulong)(uVar2 + 1);
							pSVar6._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar7;
						}
						else {
							pSVar6.AddWithResize((object)pSVar7);
						}
					}
					iVar8 = iVar8 + 1;
				} while (iVar8 < serialized._stringLength);
			}
			if (__this != null) {
				pSVar7 = __this.ToString();
				pGVar5 = local_40;
				local_40.Text = pSVar7;
				return pGVar5;
			}
		}
	label_058e09e6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x57E55D0", Offset = "0x57E45D0", VA = "0x57E55D0")]
	public static string Plain(string serialized)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Plain): clean
		AottgCharacterTextColorCodec.Document pGVar1;

		pGVar1 = AottgCharacterTextColorCodec.Parse(serialized);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		return pGVar1.Text;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x57E9030", Offset = "0x57E8030", VA = "0x57E9030")]
	public static string FromEditableRaw(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$FromEditableRaw): clean
		bool bVar1;
		bool bStack_19;
		AottgCharacterTextColorCodec.Document pGStack_18;
		String pSStack_10;

		pGStack_18 = null;
		pSStack_10 = null;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = AottgCharacterTextColorCodec.TryImport(value, null, ref pGStack_18, ref pSStack_10, ref bStack_19);
		if (bVar1) {
			if (pGStack_18 == null) {
				throw new NullReferenceException();
			}
			value = AottgCharacterTextColorCodec.Serialize(pGStack_18.Text, (IList<string>)pGStack_18.Colors);
		}
		return value;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x57E98F0", Offset = "0x57E88F0", VA = "0x57E98F0")]
	public static bool TryImport(string value, out Document document)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport): clean
		bool bVar1;
		bool bStack_9;
		String pSStack_8;

		bStack_9 = false;
		pSStack_8 = null;
		bVar1 = AottgCharacterTextColorCodec.TryImport(value, null, document, ref pSStack_8, ref bStack_9);
		return (bool)(bStack_9 & bVar1);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x57E90B0", Offset = "0x57E80B0", VA = "0x57E90B0")]
	public static bool TryImport(string value, Document existing, out Document document, out string trailingColor, out bool colorsVisibleText)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> __this;
		String[] pSVar3;
		bool bVar4;
		bool bVar5;
		ushort value_00;
		AottgCharacterTextColorCodec.Document pGVar6;
		List<string> pSVar7;
		StringBuilder __this_00;
		String pSVar8;
		int index;
		int iVar10;
		byte bVar11;
		int local_6c;
		String local_68;
		String local_60;
		StringBuilder local_58;
		AottgCharacterTextColorCodec.Document* local_50;
		String* local_48;
		bool local_40;
		AottgCharacterTextColorCodec.Document local_38;

		local_50 = document;
		local_40 = colorsVisibleText;
		local_38 = existing;
		local_60 = null;
		local_6c = 0;
		pSVar7 = new List<string>();
		pGVar6.Colors = pSVar7;
		pGVar6 = new AottgCharacterTextColorCodec.Document();
		pGVar6.Text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		*local_50 = pGVar6;
		__this_00 = new StringBuilder();
		local_68 = "FFFFFF";
		*trailingColor = null;
		*local_40 = false;
		if ((value == null) &&(value = (String)**(long*)(g_data_07556758 + 0xb8), value == null)) goto label_058e958a;
		iVar10 = value._stringLength;
		if (__this_00 == null) {
			if (iVar10 < 1) goto label_058e958a;
			index = 0;
			local_58 = __this_00;
			do {
				bVar5 = AottgCharacterTextColorCodec.IsImportColorTag(value, index, ref local_60, ref local_6c);
				if (!bVar5) {
					value.get_Chars(index);
					goto label_058e958a;
				}
				index = index + local_6c;
			} while (index < value._stringLength);
			bVar5 = true;
			bVar11 = 1;
			local_68 = local_60;
			local_48 = trailingColor;
	label_058e94fd: ;
			__this_00 = local_58;
			trailingColor = local_48;
			if (local_58 == null) goto label_058e958a;
		}
		else {
			if (0 < iVar10) {
				iVar10 = 0;
				bVar5 = false;
				local_58 = __this_00;
				local_48 = trailingColor;
	label_058e92b3: ;
				do {
					bVar4 = AottgCharacterTextColorCodec.IsImportColorTag(value, iVar10, ref local_60, ref local_6c);
					if (bVar4) {
						local_68 = local_60;
						iVar10 = iVar10 + local_6c + -1;
						bVar5 = true;
						bVar11 = 1;
					}
					else {
						value_00 = value.get_Chars(iVar10);
						local_58.Append(value_00);
						if (*local_50 == null) goto label_058e958a;
						pSVar7 = ((*local_50).fields).Colors;
						if (bVar5) {
							if (pSVar7 == null) goto label_058e958a;
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = pSVar7._items;
							if (pSVar3 == null) goto label_058e958a;
							uVar2 = pSVar7._size;
							if (uVar2 < (uint)pSVar3.Length) {
								pSVar7._size = uVar2 + 1;
								pSVar3[(int)uVar2] = local_68;
							}
							else {
								pSVar7.AddWithResize((object)local_68);
							}
							*local_40 = true;
							bVar11 = 0;
							iVar10 = iVar10 + 1;
							if (value._stringLength <= iVar10) break;
							goto label_058e92b3;
						}
						if (pSVar7 == null) goto label_058e958a;
						uVar2 = pSVar7._size;
						if ((((local_38 == null) ||((int)uVar2 < 0)) ||(__this = local_38.Colors, __this == null) ) || (__this._size <= (int)uVar2)) {
							pSVar8 = "FFFFFF";
						}
						else {
							pSVar8 = __this.get_Item(uVar2);
							pSVar8 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar8);
						}
						if (pSVar7 == null) goto label_058e958a;
						piVar1 = &pSVar7._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = pSVar7._items;
						if (pSVar3 == null) goto label_058e958a;
						uVar2 = pSVar7._size;
						if (uVar2 < (uint)pSVar3.Length) {
							pSVar7._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar8;
						}
						else {
							pSVar7.AddWithResize((object)pSVar8);
						}
						bVar11 = 0;
					}
					iVar10 = iVar10 + 1;
				} while (iVar10 < value._stringLength);
				goto label_058e94fd;
			}
			bVar5 = false;
			bVar11 = 0;
		}
		pGVar6 = *local_50;
		pSVar8 = __this_00.ToString();
		if (pGVar6 != null) {
			pGVar6.Text = pSVar8;
			if ((bVar11 & bVar5) != 0) {
				*trailingColor = local_68;
			}
			return bVar5;
		}
	label_058e958a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x57E9590", Offset = "0x57E8590", VA = "0x57E9590")]
	public static string Serialize(string text, IList<string> colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Serialize): clean
		bool bVar3;
		ushort uVar4;
		int iVar5;
		StringBuilder __this;
		String pSVar7;
		StringBuilder pSVar8;
		String pSVar9;
		uint index;
		int iVar11;

		if (text == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this = new StringBuilder();
		if (text != null) {
			iVar11 = text._stringLength;
			if (colors == null) {
				if (__this == null) {
					if (0 < iVar11) {
						bVar3 = ("FFFFFF" != "FFFFFF");
						if (!bVar3) {
							text.get_Chars(0);
						}
					}
					goto label_058e98e9;
				}
				if (iVar11 < 1) goto label_058e98a4;
				iVar11 = 0;
				pSVar9 = "FFFFFF";
				do {
					pSVar7 = "FFFFFF";
					bVar3 = ("FFFFFF" != pSVar9);
					if (bVar3) {
						pSVar8 = __this.Append(0x5b);
						if (pSVar7 == null) goto label_058e98e9;
						pSVar9 = pSVar7.ToLowerInvariant();
						if (pSVar8 == null) goto label_058e98e9;
						pSVar8 = pSVar8.Append(pSVar9);
						if (pSVar8 == null) goto label_058e98e9;
						pSVar8.Append(0x5d);
						pSVar9 = pSVar7;
					}
					uVar4 = text.get_Chars(iVar11);
					__this.Append(uVar4);
					iVar11 = iVar11 + 1;
				} while (iVar11 < text._stringLength);
			}
			else if (0 < iVar11) {
				index = 0;
				pSVar9 = "FFFFFF";
				do {
					iVar5 = colors.get_Item();
					if ((int)index < iVar5) {
						pSVar7 = colors.get_Item(index);
						pSVar7 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar7);
					}
					else {
						pSVar7 = "FFFFFF";
					}
					bVar3 = (pSVar7 != pSVar9);
					if (bVar3) {
						if (__this == null) goto label_058e98e9;
						pSVar8 = __this.Append(0x5b);
						if (pSVar7 == null) goto label_058e98e9;
						pSVar9 = pSVar7.ToLowerInvariant();
						if (pSVar8 == null) goto label_058e98e9;
						pSVar8 = pSVar8.Append(pSVar9);
						if (pSVar8 == null) goto label_058e98e9;
						pSVar8.Append(0x5d);
						uVar4 = text.get_Chars(index);
						pSVar9 = pSVar7;
					}
					else {
						uVar4 = text.get_Chars(index);
						if (__this == null) goto label_058e98e9;
					}
					__this.Append(uVar4);
					index = index + 1;
				} while ((int)index < text._stringLength);
			}
			if (__this != null) {
	label_058e98a4: ;
				pSVar9 = __this.ToString();
				return pSVar9;
			}
		}
	label_058e98e9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x57E9EF0", Offset = "0x57E8EF0", VA = "0x57E9EF0")]
	public static string SerializeGradient(string text, IList<string> stops)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$SerializeGradient): 15 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		IList<string> pSVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		int iVar5;
		Il2CppRGCTXData method_00;
		List<string> __this;
		MethodInfo item;
		String pSVar6;
		ulong uVar7;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo pMVar8;
		int index;
		long lVar9;

		if ((text == null) &&(text = (String)**(long*)(g_data_07556758 + 0xb8), text == null)) {
	label_058ea0bb: ;
			throw new NullReferenceException();
		}
		if ((stops != null) && (text._stringLength != 0)) {
			pSVar3 = stops.klass;
			uVar7 = (ulong)(pSVar3._2).interface_offsets_count;
			if (uVar7 != 0) {
				pIVar4 = (pSVar3._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(ICollection<string>*)((long)&pIVar4.interfaceType + lVar9) == typeof(ICollection<string>)) {
						method_00 = (Il2CppRGCTXData)(pSVar3.vtable + *(int)((long)&pIVar4.offset + lVar9));
						goto label_058e9fd1;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar7 * 0x10 != lVar9);
			}
			method_00 = (Il2CppRGCTXData)GetInterfaceInvokeDataFromVTableSlowPath((object)stops, typeof(ICollection<string>), 0);
	label_058e9fd1: ;
			iVar5 = (*method_00.rgctxDataDummy)((object)stops,method_00[1].method);
			if (iVar5 != 0) {
				iVar5 = text._stringLength;
				__this = new List<string>(iVar5);
				iVar5 = text._stringLength;
				pMVar8 = extraout_RDX;
				if (0 < iVar5) {
					if (__this == null) {
						AottgCharacterTextColorCodec.GradientColor(0, iVar5, stops);
						throw new NullReferenceException();
					}
					index = 0;
					do {
						while(true) {
							item = (MethodInfo)AottgCharacterTextColorCodec.GradientColor(index, iVar5, stops);
							pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							method_00 = (Il2CppRGCTXData)__this._items;
							if (method_00 == null) goto label_058ea0bb;
							uVar2 = __this._size;
							if (*(uint)&method_00[3].rgctxDataDummy <= uVar2) break;
							__this._size = uVar2 + 1;
							method_00[(long)(int)uVar2 + 4].method = item;
							index = index + 1;
							iVar5 = text._stringLength;
							pMVar8 = extraout_RDX_01;
							if (iVar5 <= index) goto label_058ea09c;
						}
						method_00 = pMVar8.klass.rgctx_data;
						__this.AddWithResize((object)item);
						index = index + 1;
						iVar5 = text._stringLength;
						pMVar8 = extraout_RDX_00;
					} while (index < iVar5);
				}
	label_058ea09c: ;
				pSVar6 = AottgCharacterTextColorCodec.Serialize(text, (IList<string>)__this);
				return pSVar6;
			}
		}
		return text;
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x57EA620", Offset = "0x57E9620", VA = "0x57EA620")]
	public static string Retarget(string previousSerialized, string nextText)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Retarget): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar3;
		String[] pSVar4;
		List<string> pSVar5;
		ushort uVar6;
		ushort uVar7;
		AottgCharacterTextColorCodec.Document method_00;
		List<string> pSVar8;
		String pSVar9;
		int iVar11;
		int index;
		int iVar12;
		int iVar13;

		method_00 = AottgCharacterTextColorCodec.Parse(previousSerialized);
		if ((nextText != null) ||(nextText = (String)**(long*)(g_data_07556758 + 0xb8), nextText != null)) {
			iVar12 = nextText._stringLength;
			pSVar8 = new List<string>(iVar12);
			if (0 < nextText._stringLength) {
				if (pSVar8 == null) goto label_058ea851;
				iVar11 = 0;
				do {
					while(true) {
						pSVar9 = "FFFFFF";
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = pSVar8._items;
						if (pSVar4 == null) goto label_058ea851;
						uVar2 = pSVar8._size;
						if ((uint)pSVar4.Length <= uVar2) break;
						pSVar8._size = uVar2 + 1;
						pSVar4[(int)uVar2] = pSVar9;
						iVar11 = iVar11 + 1;
						if (nextText._stringLength <= iVar11) goto label_058ea775;
					}
					pSVar8.AddWithResize((object)pSVar9);
					iVar11 = iVar11 + 1;
				} while (iVar11 < nextText._stringLength);
			}
	label_058ea775: ;
			if ((method_00 != null) &&(pSVar9 = method_00.Text, pSVar9 != null)) {
				iVar12 = 0;
				do {
					if ((pSVar9._stringLength <= iVar12) || (nextText._stringLength <= iVar12)) {
	label_058ea7eb: ;
						iVar11 = 0;
						iVar13 = -1;
						goto label_058ea800;
					}
					uVar6 = pSVar9.get_Chars(iVar12);
					uVar7 = nextText.get_Chars(iVar12);
					if (uVar6 != uVar7) {
						pSVar9 = method_00.Text;
						if (pSVar9 != null) goto label_058ea7eb;
						break;
					}
					iVar12 = iVar12 + 1;
					pSVar9 = method_00.Text;
				} while (pSVar9 != null);
			}
		}
		goto label_058ea851;
		while(true) {
			pSVar9 = pSVar5.get_Item(index);
			pSVar8.set_Item(index, (object)pSVar9);
			index = index + 1;
			if (iVar12 == index) break;
	label_058ea880: ;
			pSVar5 = method_00.Colors;
			if (pSVar5 == null) goto label_058ea851;
		}
	label_058ea8af: ;
		if (iVar11 != 0) {
			if (pSVar8 == null) {
				pSVar9 = method_00.Text;
				if ((pSVar9 != null) &&(pSVar8 = method_00.Colors, pSVar8 != null)) {
					pSVar8.get_Item(pSVar9._stringLength - iVar11);
					throw new NullReferenceException();
				}
				goto label_058ea851;
			}
			iVar13 = -iVar11;
			do {
				pSVar9 = method_00.Text;
				if ((pSVar9 == null) ||(pSVar5 = method_00.Colors, pSVar5 == null)) goto label_058ea851;
				iVar3 = nextText._stringLength;
				pSVar9 = pSVar5.get_Item(pSVar9._stringLength + iVar13);
				pSVar8.set_Item(iVar3 + iVar13, (object)pSVar9);
				iVar13 = iVar13 + 1;
			} while (iVar13 != 0);
		}
		pSVar9 = AottgCharacterTextColorCodec.EditColor(method_00, iVar12, iVar11);
		iVar11 = nextText._stringLength - iVar11;
		if (iVar12 < iVar11) {
			if (pSVar8 == null) goto label_058ea851;
			do {
				pSVar8.set_Item(iVar12, (object)pSVar9);
				iVar12 = iVar12 + 1;
			} while (iVar12 < iVar11);
		}
		pSVar9 = AottgCharacterTextColorCodec.Serialize(nextText, (IList<string>)pSVar8);
		return pSVar9;
		while(true) {
			uVar6 = pSVar9.get_Chars(iVar3 + iVar13);
			uVar7 = nextText.get_Chars(nextText._stringLength + iVar13);
			if (uVar6 != uVar7) goto label_058ea856;
			iVar11 = iVar11 + 1;
			pSVar9 = method_00.Text;
			iVar13 = iVar13 + -1;
			if (pSVar9 == null) break;
	label_058ea800: ;
			iVar3 = pSVar9._stringLength;
			if ((-iVar12 + iVar3 <= iVar11) || (nextText._stringLength + -iVar12 <= iVar11)) {
	label_058ea856: ;
				if (iVar12 == 0) goto label_058ea8af;
				if (pSVar8 != null) {
					index = 0;
					goto label_058ea880;
				}
				pSVar8 = method_00.Colors;
				if (pSVar8 != null) {
					pSVar8.get_Item(0);
					throw new NullReferenceException();
				}
				break;
			}
		}
	label_058ea851: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x57E0D10", Offset = "0x57DFD10", VA = "0x57E0D10")]
	public static string RichText(string text, IList<string> colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$RichText): clean
		bool bVar3;
		ushort c;
		int iVar4;
		StringBuilder __this;
		String pSVar6;
		StringBuilder pSVar7;
		String pSVar8;
		uint index;

		if (text == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this = new StringBuilder();
		if (text != null) {
			pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if (0 < text._stringLength) {
				index = 0;
				do {
					if (colors == null) {
	label_058e0ee0: ;
						pSVar6 = "FFFFFF";
					}
					else {
						iVar4 = colors.get_Item();
						if (iVar4 <= (int)index) goto label_058e0ee0;
						pSVar6 = colors.get_Item(index);
						pSVar6 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar6);
					}
					bVar3 = (pSVar6 != pSVar8);
					if (bVar3) {
						bVar3 = String.IsNullOrEmpty(pSVar8);
						if (bVar3) {
							if (__this == null) goto label_058e1004;
						}
						else {
							if (__this == null) goto label_058e1004;
							__this.Append("</color>");
						}
						pSVar7 = __this.Append("<color=#");
						if ((pSVar7 == null) ||(pSVar7 = pSVar7.Append(pSVar6), pSVar7 == null)) goto label_058e1004;
						pSVar7.Append(0x3e);
						pSVar8 = pSVar6;
					}
					c = text.get_Chars(index);
					AottgCharacterTextColorCodec.AppendEscaped(__this, c);
					index = index + 1;
				} while ((int)index < text._stringLength);
			}
			bVar3 = String.IsNullOrEmpty(pSVar8);
			if (bVar3) {
				if (__this != null) goto label_058e0fe0;
			}
			else if (__this != null) {
				__this.Append("</color>");
	label_058e0fe0: ;
				pSVar8 = __this.ToString();
				return pSVar8;
			}
		}
	label_058e1004: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x57E9D40", Offset = "0x57E8D40", VA = "0x57E9D40")]
	public static string NormalizeRgb(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$NormalizeRgb): clean
		bool bVar1;
		ushort uVar2;
		String pSVar3;
		int iVar4;
		Color local_48;
		Color local_30;

		local_48.r = 0.0;
		local_48.g = 0.0;
		local_48.b = 0.0;
		local_48.a = 0.0;
		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			if (value == null) goto label_058e9eea;
			if (value._stringLength == 6) {
				iVar4 = 0;
				do {
					uVar2 = value.get_Chars(iVar4);
					if ((9 < (ushort)(uVar2 - 0x30)) &&((0x25 < uVar2 - 0x41 || ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0)))) goto label_058e9dd2;
					iVar4 = iVar4 + 1;
				} while (iVar4 < value._stringLength);
				goto label_058e9ebf;
			}
		}
	label_058e9dd2: ;
		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			if (value == null) goto label_058e9eea;
			if ((value._stringLength == 7) &&(uVar2 = value.get_Chars(0), uVar2 == 0x23)) {
				pSVar3 = value.Substring(1);
				bVar1 = String.IsNullOrEmpty(pSVar3);
				if (!bVar1) {
					if (pSVar3 != null) {
						if (pSVar3._stringLength != 6) goto label_058e9e7e;
						iVar4 = 0;
						do {
							uVar2 = pSVar3.get_Chars(iVar4);
							if ((9 < (ushort)(uVar2 - 0x30)) &&((0x25 < uVar2 - 0x41 || ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0)))) goto label_058e9e7e;
							iVar4 = iVar4 + 1;
						} while (iVar4 < pSVar3._stringLength);
						value = value.Substring(1);
						if (value != null) {
	label_058e9ebf: ;
							pSVar3 = value.ToUpperInvariant();
							return pSVar3;
						}
					}
	label_058e9eea: ;
					throw new NullReferenceException();
				}
			}
		}
	label_058e9e7e: ;
		bVar1 = ColorUtility.TryParseHtmlString(value, ref local_48);
		if (bVar1) {
			local_30.r = local_48.r;
			local_30.g = local_48.g;
			local_30.b = local_48.b;
			local_30.a = local_48.a;
			pSVar3 = ColorUtility.ToHtmlStringRGB(ref local_30);
		}
		else {
			pSVar3 = "FFFFFF";
		}
		return pSVar3;
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x57EA0D0", Offset = "0x57E90D0", VA = "0x57EA0D0")]
	private static string GradientColor(int index, int length, IList<string> stops)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$GradientColor): 11 lines keep C-only constructs
		IList<string> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		int iVar4;
		uint uVar5;
		VirtualInvokeData pVVar6;
		String pSVar7;
		ulong uVar8;
		uint uVar9;
		long lVar11;
		uint uVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		Color local_68;
		float local_58;
		float fStack_54;
		Color local_48;
		byte[] local_38 = new byte[16];

		if (stops == null) {
			throw new NullReferenceException();
		}
		pSVar1 = stops.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		iVar4 = stops.get_Item();
		if ((length < 2) || (iVar4 == 1)) {
			pSVar1 = stops.klass;
			uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
			pSVar7 = stops.get_Item(0);
			pSVar7 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar7);
			return pSVar7;
		}
		pSVar1 = stops.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		iVar4 = stops.get_Item();
		fVar13 = (float)(iVar4 + -1);
		if (g_data_0753e7f6 == false) {
			local_58 = (float)(iVar4 + -1);
			g_data_0753e7f6 = true;
			fVar13 = local_58;
		}
		fVar13 = ((float)index / (float)(length + -1)) * fVar13;
		fVar14 = floorf(fVar13);
		uVar9 = (uint)fVar14;
		pSVar1 = stops.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		iVar4 = stops.get_Item();
		uVar5 = iVar4 - 1U;
		if ((int)uVar9 < (int)(iVar4 - 1U)) {
			uVar5 = uVar9;
		}
		uVar12 = 0;
		if (-1 < (int)uVar9) {
			uVar12 = uVar5;
		}
		pSVar1 = stops.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		iVar4 = stops.get_Item();
		uVar9 = iVar4 - 1U;
		if ((int)(uVar12 + 1) < (int)(iVar4 - 1U)) {
			uVar9 = uVar12 + 1;
		}
		pSVar1 = stops.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		local_58 = (float)(int)uVar12;
		pSVar7 = stops.get_Item(uVar12);
		fVar13 = fVar13 - local_58;
		local_68.r = 0.0;
		local_68.g = 0.0;
		local_68.b = 0.0;
		local_68.a = 0.0;
		pSVar7 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar7);
		pSVar7 = String.Concat("#", pSVar7);
		bVar3 = ColorUtility.TryParseHtmlString(pSVar7, ref local_68);
		if (bVar3) {
			local_48.r = local_68.r;
			local_48.g = local_68.g;
			local_58 = local_68.b;
			fStack_54 = local_68.a;
		}
		else {
			local_58 = 1.0;
			fStack_54 = 1.0;
			local_48.r = 1.0;
			local_48.g = 1.0;
		}
		local_48.b = 0.0;
		local_48.a = 0.0;
		fVar14 = 1.0;
		if (fVar13 <= 1.0) {
			fVar14 = fVar13;
		}
		pSVar1 = stops.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		if (uVar8 != 0) {
			pIVar2 = (pSVar1._1).interfaceOffsets;
			lVar11 = 0;
			do {
				if (*(IList<string>*)((long)&pIVar2.interfaceType + lVar11) == typeof(IList<string>)) {
					pVVar6 = pSVar1.vtable + *(int)((long)&pIVar2.offset + lVar11);
					goto label_058ea553;
				}
				lVar11 = lVar11 + 0x10;
			} while (uVar8 * 0x10 != lVar11);
		}
		local_38 = ZEXT416((uint)fVar14);
		fVar14 = (float)local_38._0_4_;
	label_058ea553: ;
		fVar14 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14);
		pSVar7 = stops.get_Item(uVar9);
		local_68.r = 0.0;
		local_68.g = 0.0;
		local_68.b = 0.0;
		local_68.a = 0.0;
		pSVar7 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar7);
		pSVar7 = String.Concat("#", pSVar7);
		bVar3 = ColorUtility.TryParseHtmlString(pSVar7, ref local_68);
		if (bVar3) {
			fVar13 = local_68.r;
			fVar15 = local_68.g;
			fVar16 = local_68.b;
			fVar17 = local_68.a;
		}
		else {
			fVar13 = 1.0;
			fVar15 = 1.0;
			fVar16 = fVar13;
			fVar17 = fVar15;
		}
		fVar18 = 0.0;
		if (0.0 <= fVar14) {
			fVar18 = fVar14;
		}
		local_68.g = (fVar15 - local_48.g) * fVar18 + local_48.g;
		local_68.r = (fVar13 - local_48.r) * fVar18 + local_48.r;
		local_68.a = (fVar17 - fStack_54) * fVar18 + fStack_54;
		local_68.b = (fVar16 - local_58) * fVar18 + local_58;
		pSVar7 = ColorUtility.ToHtmlStringRGB(ref local_68);
		return pSVar7;
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x57EABD0", Offset = "0x57E9BD0", VA = "0x57EABD0")]
	private static Color ParseRgb(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ParseRgb): clean
		Color UVar1;
		bool bVar2;
		String pSVar3;
		Color UVar4;
		Color local_18;

		local_18.r = 0.0;
		local_18.g = 0.0;
		local_18.b = 0.0;
		local_18.a = 0.0;
		pSVar3 = AottgCharacterTextColorCodec.NormalizeRgb(value);
		pSVar3 = String.Concat("#", pSVar3);
		bVar2 = ColorUtility.TryParseHtmlString(pSVar3, ref local_18);
		if (bVar2) {
			UVar1.b = local_18.b;
			UVar1.a = local_18.a;
			UVar1.r = local_18.r;
			UVar1.g = local_18.g;
			return (Color)UVar1;
		}
		UVar4.b = 1.0;
		UVar4.a = 1.0;
		UVar4.r = 1.0;
		UVar4.g = 1.0;
		return (Color)UVar4;
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x57EAB40", Offset = "0x57E9B40", VA = "0x57EAB40")]
	private static bool IsRgb(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsRgb): clean
		bool bVar1;
		ushort uVar2;
		int index;
		bool bVar3;

		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			if (value == null) {
				throw new NullReferenceException();
			}
			index = 0;
			if (value._stringLength == 6) {
				do {
					uVar2 = value.get_Chars(index);
					if (9 < (ushort)(uVar2 - 0x30)) {
						if (0x25 < uVar2 - 0x41) {
							return false;
						}
						if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
							return false;
						}
					}
					index = index + 1;
				} while (index < value._stringLength);
			}
		}
		return bVar3;
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x57E8E10", Offset = "0x57E7E10", VA = "0x57E8E10")]
	private static bool IsColorTag(string text, int index, out string color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsColorTag): clean
		int index_00;
		int index_01;
		ushort uVar1;
		String pSVar2;
		bool bVar3;

		*color = null;
		if (text == null) {
	label_058e902b: ;
			throw new NullReferenceException();
		}
		index_00 = index + 7;
		if (index_00 < text._stringLength) {
			uVar1 = text.get_Chars(index);
			if (uVar1 == 0x5b) {
				uVar1 = text.get_Chars(index_00);
				if (uVar1 == 0x5d) {
					index_01 = index + 1;
					if (index_01 < index_00) {
						uVar1 = text.get_Chars(index_01);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar1 = text.get_Chars(index + 2);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar1 = text.get_Chars(index + 3);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar1 = text.get_Chars(index + 4);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar1 = text.get_Chars(index + 5);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar1 = text.get_Chars(index + 6);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
					}
					pSVar2 = text.Substring(index_01, 6);
					if (pSVar2 == null) goto label_058e902b;
					pSVar2 = pSVar2.ToUpperInvariant();
					*color = pSVar2;
				}
			}
		}
		else {
		}
		return bVar3;
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x57E9930", Offset = "0x57E8930", VA = "0x57E9930")]
	private static bool IsImportColorTag(string text, int index, out string color, out int length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsImportColorTag): clean
		int index_00;
		int index_01;
		uint index_02;
		int index_03;
		bool bVar1;
		ushort uVar2;
		String pSVar3;
		int iVar4;

		*color = null;
		*length = 0;
		bVar1 = String.IsNullOrEmpty(text);
		if (bVar1) {
			return false;
		}
		if (text == null) {
	label_058e9ca6: ;
			throw new NullReferenceException();
		}
		if (index < text._stringLength) {
			uVar2 = text.get_Chars(index);
			if (uVar2 != 0x5b) {
				return false;
			}
			index_00 = index + 4;
			if (((((index_00 < text._stringLength) &&(uVar2 = text.get_Chars(index_00), uVar2 == 0x5d)) && (-2 < index)) && (index_00 <= text._stringLength)) &&((index_02 = index + 1, index_00 <= (int)index_02 ||((((uVar2 = text.get_Chars(index_02), (ushort)(uVar2 - 0x30) < 10 ||((uVar2 - 0x41 < 0x26 && ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) != 0)))) &&((uVar2 = text.get_Chars(index + 2), (ushort)(uVar2 - 0x30) < 10 ||((uVar2 - 0x41 < 0x26 && ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) != 0)))))) &&((uVar2 = text.get_Chars(index + 3), (ushort)(uVar2 - 0x30) < 10 ||((uVar2 - 0x41 < 0x26 && ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) != 0)))))))))) {
				pSVar3 = text.Substring(index_02, 3);
				pSVar3 = AottgCharacterTextColorCodec.ExpandRgb(pSVar3);
				iVar4 = 5;
	label_058e9c90: ;
				*color = pSVar3;
				*length = iVar4;
				return true;
			}
			index_01 = index + 7;
			if (index_01 < text._stringLength) {
				uVar2 = text.get_Chars(index_01);
				if (uVar2 != 0x5d) {
					return false;
				}
				if ((-2 < index) && (index_01 <= text._stringLength)) {
					index_03 = index + 1;
					if (index_03 < index_01) {
						uVar2 = text.get_Chars(index_03);
						if (9 < (ushort)(uVar2 - 0x30)) {
							if (0x25 < uVar2 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar2 = text.get_Chars(index + 2);
						if (9 < (ushort)(uVar2 - 0x30)) {
							if (0x25 < uVar2 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar2 = text.get_Chars(index + 3);
						if (9 < (ushort)(uVar2 - 0x30)) {
							if (0x25 < uVar2 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar2 = text.get_Chars(index_00);
						if (9 < (ushort)(uVar2 - 0x30)) {
							if (0x25 < uVar2 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar2 = text.get_Chars(index + 5);
						if (9 < (ushort)(uVar2 - 0x30)) {
							if (0x25 < uVar2 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						uVar2 = text.get_Chars(index + 6);
						if (9 < (ushort)(uVar2 - 0x30)) {
							if (0x25 < uVar2 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
					}
					pSVar3 = text.Substring(index_03, 6);
					if (pSVar3 == null) goto label_058e9ca6;
					pSVar3 = pSVar3.ToUpperInvariant();
					iVar4 = 8;
					goto label_058e9c90;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x57EAC70", Offset = "0x57E9C70", VA = "0x57EAC70")]
	private static bool IsHexRange(string text, int start, int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHexRange): clean
		ushort uVar1;

		if (-1 < (start | count)) {
			if (text == null) {
				throw new NullReferenceException();
			}
			if (count + start <= text._stringLength) {
				if (start < count + start) {
					do {
						uVar1 = text.get_Chars(start);
						if (9 < (ushort)(uVar1 - 0x30)) {
							if (0x25 < uVar1 - 0x41) {
								return false;
							}
							if ((0x3f0000003fU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) == 0) {
								return false;
							}
						}
						start = start + 1;
						count = count + -1;
					} while (count != 0);
				}
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x57EAD00", Offset = "0x57E9D00", VA = "0x57EAD00")]
	private static string ExpandRgb(string rgb)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExpandRgb): 6 lines keep C-only constructs
		ushort uVar1;
		Object[] args;
		object pIVar2;
		object pIVar3;
		String pSVar4;
		ushort local_2c;
		ushort local_2a;
		ushort local_28;
		ushort local_26;
		ushort local_24;
		ushort local_22;

		args = (Object[])new object[6];
		if (rgb == null) {
	label_058eb019: ;
			throw new NullReferenceException();
		}
		uVar1 = rgb.get_Chars(0);
		local_22 = Char.ToUpperInvariant(uVar1);
		pIVar2 = (object)local_22;
		if (args == null) goto label_058eb019;
		if (pIVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_058eb00a;
		}
		if ((int)args.Length != 0) {
			args[0] = pIVar2;
			uVar1 = rgb.get_Chars(0);
			local_24 = Char.ToUpperInvariant(uVar1);
			pIVar2 = (object)local_24;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058eb00a;
			}
			if ((args.Length & 0xfffffffe) == 0) goto label_058eb005;
			args[1] = pIVar2;
			uVar1 = rgb.get_Chars(1);
			local_26 = Char.ToUpperInvariant(uVar1);
			pIVar2 = (object)local_26;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058eb00a;
			}
			if ((uint)args.Length < 3) goto label_058eb005;
			args[2] = pIVar2;
			uVar1 = rgb.get_Chars(1);
			local_28 = Char.ToUpperInvariant(uVar1);
			pIVar2 = (object)local_28;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058eb00a;
			}
			if ((args.Length & 0xfffffffc) == 0) goto label_058eb005;
			args[3] = pIVar2;
			uVar1 = rgb.get_Chars(2);
			local_2a = Char.ToUpperInvariant(uVar1);
			pIVar2 = (object)local_2a;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058eb00a;
			}
			if (4 < (uint)args.Length) {
				args[4] = pIVar2;
				uVar1 = rgb.get_Chars(2);
				local_2c = Char.ToUpperInvariant(uVar1);
				pIVar2 = (object)local_2c;
				if (pIVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
					if (pIVar3 == null) {
	label_058eb00a: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (5 < (uint)args.Length) {
					args[5] = pIVar2;
					return pSVar4;
				}
			}
		}
	label_058eb005: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x57E9CB0", Offset = "0x57E8CB0", VA = "0x57E9CB0")]
	private static string ExistingColor(Document existing, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExistingColor): clean
		List<string> __this;
		String pSVar1;

		if ((((existing == null) || (index < 0)) ||(__this = existing.Colors, __this == null)) ||(__this._size <= index)) {
			return "FFFFFF";
		}
		pSVar1 = __this.get_Item(index);
		pSVar1 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x57EA9F0", Offset = "0x57E99F0", VA = "0x57EA9F0")]
	private static string EditColor(Document previous, int prefix, int suffix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$EditColor): clean
		List<string> __this;
		String pSVar1;
		uint index;

		if ((previous != null) &&(__this = previous.Colors, __this != null)) {
			if ((0 < prefix) && (prefix <= __this._size)) {
				index = prefix - 1;
	override_prt_58eaa8b_5f7def29: ;
				pSVar1 = __this.get_Item(index);
				pSVar1 = AottgCharacterTextColorCodec.NormalizeRgb(pSVar1);
				return pSVar1;
			}
			if (0 < suffix) {
				pSVar1 = previous.Text;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				index = pSVar1._stringLength - suffix;
				if ((-1 < (int)index) && ((int)index < __this._size)) goto override_prt_58eaa8b_5f7def29;
			}
		}
		return "FFFFFF";
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x57EAC50", Offset = "0x57E9C50", VA = "0x57EAC50")]
	private static bool IsHex(char c)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHex): clean
		bool bVar1;

		if ((9 < (ushort)(c - 0x30)) && (5 < (ushort)(c - 0x61))) {
			bVar1 = (ushort)(c - 0x41) < 6;
		}
		return bVar1;
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x57EAAB0", Offset = "0x57E9AB0", VA = "0x57EAAB0")]
	private static void AppendEscaped(StringBuilder builder, char c)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$AppendEscaped): 6 lines keep C-only constructs
		String* ppSVar1;

		if (Il2CppMethodInitialized_0754554c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&"&gt;");
			il2cpp_codegen_initialize_runtime_metadata(&"&lt;");
			Il2CppMethodInitialized_0754554c = true;
		}
		if (c == 0x3e) {
			if (builder != null) {
				ppSVar1 = &"&gt;";
	label_058eab08: ;
				builder.Append(*ppSVar1);
				return;
			}
		}
		else if (c == 0x3c) {
			if (builder != null) {
				ppSVar1 = &"&lt;";
				goto label_058eab08;
			}
		}
		else if (builder != null) {
			builder.Append(c);
			return;
		}
		throw new NullReferenceException();
	}
}
