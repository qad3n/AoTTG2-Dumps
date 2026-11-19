// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdown
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EA")]
public static class AottgChangelogMarkdown
{
	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Regex InlinePattern;

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x5D77370", Offset = "0x5D76370", VA = "0x5D77370")]
	public static IReadOnlyList<AottgChangelogMarkdownBlock> Parse(string markdown)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Parse): 30 lines keep C-only constructs
		int piVar1;
		AottgChangelogMarkdownBlock* ppGVar2;
		String text;
		bool bVar3;
		uint uVar4;
		List<AottgChangelogMarkdownBlock> __this;
		String pSVar5;
		String[] pSVar6;
		AottgChangelogMarkdownBlock __this_00;
		AottgChangelogMarkdownBlock[] pGVar7;
		List<string> __this_01;
		il2cpp_array_size_t iVar8;
		String[] pSVar9;
		MethodInfo pMVar10;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		String* ppSVar11;
		int type;
		uint uVar12;
		String local_48;
		String* local_40;
		String local_38;

		local_48 = null;
		__this = new List<AottgChangelogMarkdownBlock>();
		bVar3 = String.IsNullOrWhiteSpace(markdown);
		if (bVar3) {
			return (IReadOnlyList<AottgChangelogMarkdownBlock>)__this;
		}
		if (((markdown != null) &&(pSVar5 = markdown.Replace("\r\n", "\n"), pSVar5 != null)) &&(pSVar5 = pSVar5.Replace(0xd, 10), pSVar5 != null)) {
			pSVar6 = pSVar5.Split(10, 0);
			if (pSVar6 != null) {
				uVar4 = (uint)pSVar6.Length;
				if ((int)uVar4 < 1) {
					return (IReadOnlyList<AottgChangelogMarkdownBlock>)__this;
				}
				local_40 = pSVar6.m_Items;
				uVar12 = 0;
				pMVar10 = extraout_RDX;
	label_05e7751c: ;
				if (uVar4 <= uVar12) {
	label_05e779e3: ;
					throw new IndexOutOfRangeException();
				}
				pSVar5 = pSVar6[(int)uVar12];
				if ((typeof(AottgChangelogMarkdown)._2).cctor_finished_or_no_cctor == 0) {
					pMVar10 = extraout_RDX_01;
				}
				bVar3 = AottgChangelogMarkdown.TryReadHeader(pSVar5, ref local_48);
				text = local_48;
				if (bVar3) {
					__this_00 = new AottgChangelogMarkdownBlock(0, text, null);
					pMVar10 = MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add;
					if (__this == null) goto label_05e77925;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar7 = __this._items;
					if (pGVar7 == null) goto label_05e77925;
	label_05e77597: ;
					uVar4 = __this._size;
					if ((uint)pGVar7.Length <= uVar4) {
						pMVar10 = pMVar10.klass.rgctx_data[0xe].method;
						goto label_05e77755;
					}
					__this._size = uVar4 + 1;
					ppGVar2 = pGVar7.m_Items + (long)(int)uVar4 + -4;
					pGVar7[(int)uVar4] = __this_00;
	label_05e77507: ;
					uVar12 = uVar12 + 1;
					uVar4 = (uint)pSVar6.Length;
					pMVar10 = extraout_RDX_00;
					if ((int)uVar4 <= (int)uVar12) {
						return (IReadOnlyList<AottgChangelogMarkdownBlock>)__this;
					}
					goto label_05e7751c;
				}
				if (((pSVar5 == null) ||(bVar3 = pSVar5.StartsWith("- ", 4), !bVar3 )) || (pSVar5._stringLength < 3)) {
					bVar3 = String.IsNullOrWhiteSpace(pSVar5);
					if (bVar3) {
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						type = 3;
					}
					else {
						type = 1;
					}
					__this_00 = new AottgChangelogMarkdownBlock(type, pSVar5, null);
					pMVar10 = MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add;
					if (__this == null) goto label_05e77925;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar7 = __this._items;
					if (pGVar7 == null) goto label_05e77925;
					uVar4 = __this._size;
					if (uVar4 < (uint)pGVar7.Length) {
						__this._size = uVar4 + 1;
						ppGVar2 = pGVar7.m_Items + (long)(int)uVar4 + -4;
						pGVar7[(int)uVar4] = __this_00;
						goto label_05e77507;
					}
					pMVar10 = pMVar10.klass.rgctx_data[0xe].method;
	label_05e77755: ;
					__this.AddWithResize((object)__this_00);
					uVar12 = uVar12 + 1;
					uVar4 = (uint)pSVar6.Length;
					pMVar10 = extraout_RDX_02;
					if ((int)uVar4 <= (int)uVar12) {
						return (IReadOnlyList<AottgChangelogMarkdownBlock>)__this;
					}
					goto label_05e7751c;
				}
				__this_01 = new List<string>();
				iVar8 = pSVar6.Length;
				if ((int)uVar12 < (int)(uint)iVar8) {
					if (__this_01 == null) {
						if (uVar12 < (uint)iVar8) {
							pSVar5 = pSVar6[(int)uVar12];
							if (((pSVar5 != null) &&(bVar3 = pSVar5.StartsWith("- ", 4))) && (2 < pSVar5._stringLength)) {
								if ((uint)pSVar6.Length <= uVar12) goto label_05e779e3;
								if (pSVar6[(int)uVar12] != null) {
									(pSVar6[(int)uVar12]).Substring(2);
									throw new NullReferenceException();
								}
							}
							goto label_05e77925;
						}
						goto label_05e779e3;
					}
					ppSVar11 = local_40 + (int)uVar12;
					do {
						if ((uint)iVar8 <= uVar12) goto label_05e779e3;
						pSVar5 = *ppSVar11;
						if (((pSVar5 == null) ||(bVar3 = pSVar5.StartsWith("- ", 4), !bVar3)) || (pSVar5._stringLength < 3)) goto label_05e77899;
						if ((uint)pSVar6.Length <= uVar12) goto label_05e779e3;
						if (*ppSVar11 == null) goto label_05e77925;
						pSVar5 = (*ppSVar11).Substring(2);
						pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar9 = __this_01._items;
						if (pSVar9 == null) goto label_05e77925;
						uVar4 = __this_01._size;
						if (uVar4 < (uint)pSVar9.Length) {
							__this_01._size = uVar4 + 1;
							pSVar9[(int)uVar4] = pSVar5;
						}
						else {
							__this_01.AddWithResize((object)pSVar5);
						}
						uVar12 = uVar12 + 1;
						uVar4 = (uint)pSVar6.Length;
						iVar8 = (il2cpp_array_size_t)uVar4;
						ppSVar11 = ppSVar11 + 1;
					} while ((int)uVar12 < (int)uVar4);
				}
				else {
	label_05e77899: ;
					if (__this_01 == null) goto label_05e77925;
				}
				uVar12 = uVar12 - 1;
				local_38 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				pSVar9 = (String[])__this_01.ToArray();
				__this_00 = new AottgChangelogMarkdownBlock(2, local_38, pSVar9);
				pMVar10 = MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add;
				if (__this != null) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar7 = __this._items;
					if (pGVar7 != null) goto label_05e77597;
				}
			}
		}
	label_05e77925: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x5D77B50", Offset = "0x5D76B50", VA = "0x5D77B50")]
	public static string RenderInline(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$RenderInline): 12 lines keep C-only constructs
		byte bVar1;
		int capacity;
		int iVar2;
		Regex __this;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar5;
		StringBuilder __this_00;
		MatchCollection __this_01;
		VirtualInvokeData pVVar6;
		Capture __this_02;
		String pSVar7;
		StringBuilder pSVar8;
		object pIVar9;
		int length;
		ulong uVar10;
		MethodInfo pMVar11;
		long lVar12;
		uint startIndex;
		object local_68;
		long local_60;
		String local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_68 = null;
		local_50 = null;
		bVar5 = String.IsNullOrEmpty(text);
		if (bVar5) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (text != null) {
			capacity = text._stringLength;
			__this_00 = new StringBuilder(capacity);
			if ((typeof(AottgChangelogMarkdown)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgChangelogMarkdown)) ;
			}
			__this = AottgChangelogMarkdown.InlinePattern;
			if ((__this != null) &&(local_58 = text, __this_01 = __this.Matches(text), __this_01 != null)) {
				local_68 = (object)__this_01.GetEnumerator();
				local_40 = (byte)&local_68;
				local_38 = &local_50;
				if (local_68 != null) {
					local_60 = 0;
					startIndex = 0;
					local_40 = (byte)&local_68;
					do {
						pIVar9 = local_68;
						pIVar3 = local_68.klass;
						uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
						bVar5 = pIVar9.Dispose();
						pIVar9 = local_68;
						if (!bVar5) {
							pIVar9 = (local_68 as IDisposable);
							local_50 = pIVar9;
							if (pIVar9 == null) goto label_05e78116;
							pIVar3 = pIVar9.klass;
							uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
							if (uVar10 == 0) goto label_05e780ef;
							pIVar4 = (pIVar3._1).interfaceOffsets;
							lVar12 = 0;
							goto label_05e780e0;
						}
						if (local_68 == null) {
							throw new NullReferenceException();
						}
						pIVar3 = local_68.klass;
						uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
						__this_02 = (Capture)pIVar9.Dispose();
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						bVar1 = (typeof(Match)._2).typeHierarchyDepth;
						if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Match))) {
							throw new InvalidCastException();
						}
						iVar2 = __this_02._Index_k__BackingField;
						length = iVar2 - startIndex;
						if (length != 0 && (int)startIndex <= iVar2) {
							pMVar11 = (MethodInfo)(ulong)startIndex;
							pSVar7 = local_58.Substring(startIndex, length);
							pSVar7 = AottgChangelogMarkdown.Escape(pSVar7);
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_00.Append(pSVar7);
						}
						pSVar7 = __this_02.Value;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						bVar5 = pSVar7.StartsWith("**", 4);
						if ((bVar5) &&(bVar5 = pSVar7.EndsWith("**", 4))) {
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							pSVar8 = __this_00.Append("_b_");
							pMVar11 = (MethodInfo)0x2;
							pSVar7 = pSVar7.Substring(2, pSVar7._stringLength + -4);
							pSVar7 = AottgChangelogMarkdown.Escape(pSVar7);
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							pSVar8 = pSVar8.Append(pSVar7);
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							pSVar8.Append("</b>");
						}
						else {
							pMVar11 = (MethodInfo *)"*";
							bVar5 = pSVar7.StartsWith("*", 4);
							if ((bVar5) &&(pMVar11 = (MethodInfo *)"*", bVar5 = pSVar7.EndsWith("*", 4), bVar5)) {
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								pSVar8 = __this_00.Append("_i_");
								pMVar11 = (MethodInfo)0x1;
								pSVar7 = pSVar7.Substring(1, pSVar7._stringLength + -2);
								if ((typeof(AottgChangelogMarkdown)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pSVar7 = AottgChangelogMarkdown.Escape(pSVar7);
								if (pSVar8 == null) {
									throw new NullReferenceException();
								}
								pSVar8 = pSVar8.Append(pSVar7);
								if (pSVar8 == null) {
									throw new NullReferenceException();
								}
								pSVar8.Append("</i>");
							}
							else {
								if ((typeof(AottgChangelogMarkdown)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pSVar7 = AottgChangelogMarkdown.Escape(pSVar7);
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								__this_00.Append(pSVar7);
							}
						}
						startIndex = __this_02._Length_k__BackingField +__this_02._Index_k__BackingField;
					} while (local_68 != null);
				}
				throw new NullReferenceException();
			}
		}
		goto label_05e781e6;
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar10 * 0x10 != lVar12)) break;
	label_05e780e0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar12);
				goto label_05e7810d;
			}
		}
	label_05e780ef: ;
	label_05e7810d: ;
		pIVar9.Dispose();
	label_05e78116: ;
		if (local_60 != 0) {
			throw;
		}
		if ((int)startIndex < local_58._stringLength) {
			pMVar11 = (MethodInfo)(ulong)startIndex;
			pSVar7 = local_58.Substring(startIndex);
			if ((typeof(AottgChangelogMarkdown)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgChangelogMarkdown)) ;
			}
			pSVar7 = AottgChangelogMarkdown.Escape(pSVar7);
			if (__this_00 != null) {
				__this_00.Append(pSVar7);
	label_05e78180: ;
				pSVar7 = __this_00.ToString();
				return pSVar7;
			}
		}
		else if (__this_00 != null) goto label_05e78180;
	label_05e781e6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x5D779F0", Offset = "0x5D769F0", VA = "0x5D779F0")]
	private static bool TryReadHeader(string line, out string header)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$TryReadHeader): 4 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		int startIndex;

		*header = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if (line != null) {
			bVar1 = line.StartsWith("# ", 4);
			startIndex = 2;
			if (!bVar1) {
				bVar1 = line.StartsWith("## ", 4);
				startIndex = 3;
				if (!bVar1) {
					return false;
				}
			}
			pSVar2 = line.Substring(startIndex);
			*header = pSVar2;
			if (*header != null) {
				pSVar2 = (*header).Trim();
				*header = pSVar2;
				if (*header != null) {
					return 0 < ((*header).fields)._stringLength;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x5D77AF0", Offset = "0x5D76AF0", VA = "0x5D77AF0")]
	private static bool IsBullet(string line)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$IsBullet): clean
		bool bVar1;
		bool bVar2;

		if (line == null) {
		}
		else {
			bVar1 = line.StartsWith("- ", 4);
			if (bVar1) {
				bVar2 = 2 < line._stringLength;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x5D78280", Offset = "0x5D77280", VA = "0x5D78280")]
	private static string Escape(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Escape): 6 lines keep C-only constructs
		bool bVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_075487d4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&"&amp;");
			il2cpp_codegen_initialize_runtime_metadata(&"&gt;");
			il2cpp_codegen_initialize_runtime_metadata(&"&lt;");
			Il2CppMethodInitialized_075487d4 = true;
		}
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value != null) {
			pSVar2 = value.Replace("&", "&amp;");
			if (pSVar2 != null) {
				pSVar2 = pSVar2.Replace("<", "&lt;");
				if (pSVar2 != null) {
					pSVar2 = pSVar2.Replace(">", "&gt;");
					return pSVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdown.c.

	// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$.cctor: clean
	static AottgChangelogMarkdown()
	{
		Regex __this;

		__this = new Regex("(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)", 8);
		AottgChangelogMarkdown.InlinePattern = __this;
		return;
	}
}
