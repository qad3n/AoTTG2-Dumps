// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CSVCompression
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CSVCompression.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CSVCompression.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Utility;

[Token(Token = "0x200091D")]
internal class CSVCompression
{
	[Token(Token = "0x4002DF3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] Alphabet;

	[Token(Token = "0x600564E")]
	[Address(RVA = "0x5CE8710", Offset = "0x5CE7710", VA = "0x5CE8710")]
	public static object[] Compress(string source, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$Compress): 19 lines keep C-only constructs
		int piVar1;
		CompressionAlgorithm __this;
		bool bVar2;
		uint uVar3;
		List<string[]> __this_00;
		String[] pSVar4;
		String pSVar5;
		String[] item;
		System_String_array_array outputArr;
		List<string> __this_01;
		ulong uVar6;
		Byte[] pSVar7;
		JSONObject __this_02;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_03;
		String s;
		JSONNode pSVar8;
		Object[] pSVar9;
		object pIVar10;
		Il2CppRGCTXData method_00;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar11;
		ulong uVar12;
		uint uVar13;
		ushort local_74;
		ushort local_72;
		Dictionary<string, string> local_70;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_50 = new byte[16];
		String local_40;
		Byte[] local_38;

		local_74 = rowDelimiter;
		local_72 = containerDelimiter;
		local_68 = (byte[])0x0;
		local_58 = null;
		__this_00 = new List<string[]>();
		if (source == null) {
	label_05de8d74: ;
			throw new NullReferenceException();
		}
		method_00 = null;
		pSVar4 = source.Split(containerDelimiter, 0);
		if (pSVar4 == null) goto label_05de8d74;
		uVar3 = (uint)pSVar4.Length;
		if (__this_00 == null) {
			if ((0 < (int)uVar3) && (pSVar4[0] != null)) {
				pSVar5 = (pSVar4[0]).Trim();
				if (pSVar5 != null) {
					pSVar5.Split(rowDelimiter, 0);
					throw new NullReferenceException();
				}
			}
			goto label_05de8d74;
		}
		if (0 < (int)uVar3) {
			uVar13 = 0;
			do {
				while(true) {
					if (uVar3 <= uVar13) goto label_05de8d42;
					if (pSVar4[(int)uVar13] == null) goto label_05de8d74;
					pSVar5 = (pSVar4[(int)uVar13]).Trim();
					if (pSVar5 == null) goto label_05de8d74;
					item = pSVar5.Split(rowDelimiter, 0);
					pMVar11 = MethodInfo_System_Collections_Generic_List_string_array_Add;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					method_00 = (Il2CppRGCTXData)__this_00._items;
					if (method_00 == null) goto label_05de8d74;
					uVar3 = __this_00._size;
					if (*(uint)&method_00[3].rgctxDataDummy <= uVar3) break;
					__this_00._size = uVar3 + 1;
					method_00[(long)(int)uVar3 + 4].method = (MethodInfo)item;
					uVar13 = uVar13 + 1;
					uVar3 = (uint)pSVar4.Length;
					if ((int)uVar3 <= (int)uVar13) goto label_05de8960;
				}
				method_00 = pMVar11.klass.rgctx_data;
				__this_00.AddWithResize(ref item.obj);
				uVar13 = uVar13 + 1;
				uVar3 = (uint)pSVar4.Length;
			} while ((int)uVar13 < (int)uVar3);
		}
	label_05de8960: ;
		outputArr = (System_String_array_array)__this_00.ToArray();
		local_70 = new Dictionary<string, string>();
		if (outputArr == null) goto label_05de8d74;
		if (outputArr.Length != 0) {
			pMVar11 = extraout_RDX;
			if ((typeof(CSVCompression)._2).cctor_finished_or_no_cctor == 0) {
				pMVar11 = extraout_RDX_00;
			}
			CSVCompression.CompressDelta(outputArr, deltaRows);
		}
		__this_01 = new List<string>();
		if (0 < (int)outputArr.Length) {
			if (__this_01 == null) {
				pSVar4 = outputArr[0];
				pSVar5 = Char.ToString(ref local_74);
				String.Join(pSVar5, pSVar4);
				throw new NullReferenceException();
			}
			uVar6 = outputArr.Length & 0xffffffff;
			uVar12 = 0;
			do {
				if (uVar6 <= uVar12) goto label_05de8d42;
				pSVar4 = outputArr[uVar12];
				pSVar5 = Char.ToString(ref local_74);
				pSVar5 = String.Join(pSVar5, pSVar4);
				pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pSVar4 = __this_01._items;
				if (pSVar4 == null) goto label_05de8d74;
				uVar3 = __this_01._size;
				if (uVar3 < (uint)pSVar4.Length) {
					__this_01._size = uVar3 + 1;
					pSVar4[(int)uVar3] = pSVar5;
				}
				else {
					__this_01.AddWithResize((object)pSVar5);
				}
				uVar12 = uVar12 + 1;
				uVar3 = (uint)outputArr.Length;
				uVar6 = (ulong)uVar3;
				method_00 = (Il2CppRGCTXData)(long)(int)uVar3;
			} while ((long)uVar12 < (long)method_00);
		}
		__this = (CompressionAlgorithm)DataCompressors.Brotli;
		pSVar5 = Char.ToString(ref local_72);
		if (__this_01 == null) goto label_05de8d74;
		pSVar4 = (String[])__this_01.ToArray();
		pSVar5 = String.Join(pSVar5, pSVar4);
		if (__this == null) goto label_05de8d74;
		pSVar7 = __this.CompressString(pSVar5, 1);
		__this_02 = new JSONObject();
		if (local_70 == null) goto label_05de8d74;
		__this_03 = local_70.Keys;
		if (__this_03 == null) goto label_05de8d74;
		local_50.GetEnumerator(__this_03);
		local_58 = local_40;
		local_68 = (byte[])local_50._0_8_;
		local_50._0_8_ = null;
		local_50._8_8_ = local_68;
		local_38 = pSVar7;
		if (__this_02 == null) {
			bVar2 = local_68.MoveNext();
			if (bVar2) {
				pSVar5 = local_70.get_Item((object)local_58);
				((JSONNode)pSVar5);
				throw new NullReferenceException();
			}
		}
		else {
			while(true) {
				bVar2 = local_68.MoveNext();
				pSVar5 = local_58;
				if (!bVar2) break;
				s = local_70.get_Item((object)local_58);
				pSVar8 = ((JSONNode)s);
				__this_02.Add(pSVar5, pSVar8);
			}
		}
		local_68.Dispose();
		pSVar9 = (Object[])new object[2];
		pSVar7 = local_38;
		if (pSVar9 == null) goto label_05de8d74;
		if (local_38 != null) {
			pIVar10 = il2cpp_vm_Object_IsInst(&local_38.obj, (((pSVar9.obj).klass)._1).element_class);
			if (pIVar10 == null) goto label_05de8d47;
		}
		if ((int)pSVar9.Length != 0) {
			pSVar9[0] = &pSVar7.obj;
			if (__this_02 != null) {
				pIVar10 = il2cpp_vm_Object_IsInst((object)__this_02, (((pSVar9.obj).klass)._1).element_class);
				if (pIVar10 == null) {
	label_05de8d47: ;
					pIVar10 = new ArrayTypeMismatchException();
					throw pIVar10;
				}
			}
			if ((pSVar9.Length & 0xfffffffe) != 0) {
				pSVar9[1] = (object)__this_02;
				return pSVar9;
			}
		}
	label_05de8d42: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600564F")]
	[Address(RVA = "0x5CE9220", Offset = "0x5CE8220", VA = "0x5CE9220")]
	public static string Decompress(byte[] source, JSONNode symbolTable, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$Decompress): 4 lines keep C-only constructs
		int piVar1;
		BrotliAlgorithm pUVar2;
		uint uVar3;
		Encoding pSVar4;
		Byte[] pSVar5;
		String pSVar6;
		List<string[]> __this;
		String[] pSVar7;
		String[] item;
		System_String_array_array pSVar8;
		List<string> __this_00;
		ulong uVar9;
		uint uVar11;
		ulong uVar12;
		ushort local_34;
		ushort local_32;

		if (Il2CppMethodInitialized_075482b5 == false) {
			Il2CppMethodInitialized_075482b5 = true;
			if ((typeof(DataCompressors)._2).cctor_finished_or_no_cctor == 0) goto label_05de9311;
	label_05de9263: ;
			pUVar2 = DataCompressors.Brotli;
		}
		else {
			if ((typeof(DataCompressors)._2).cctor_finished_or_no_cctor != 0) goto label_05de9263;
	label_05de9311: ;
			pUVar2 = DataCompressors.Brotli;
		}
		if (pUVar2 != null) {
			if ((source == null) || (source.Length == 0)) {
				pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar4 = Encoding.UTF8;
				pSVar5 = pUVar2.Decompress(source, 0x1000, 0xa00000);
				if (pSVar4 == null) goto label_05de9658;
				pSVar6 = pSVar4.GetString(pSVar5);
			}
			__this = new List<string[]>();
			if ((pSVar6 != null) &&(pSVar7 = pSVar6.Split(containerDelimiter, 0), pSVar7 != null)) {
				uVar3 = (uint)pSVar7.Length;
				if (__this == null) {
					if ((0 < (int)uVar3) && (pSVar7[0] != null)) {
						(pSVar7[0]).Split(rowDelimiter, 0);
						throw new NullReferenceException();
					}
				}
				else {
					if (0 < (int)uVar3) {
						uVar11 = 0;
						do {
							while(true) {
								if (uVar3 <= uVar11) goto label_05de9645;
								if (pSVar7[(int)uVar11] == null) goto label_05de9658;
								item = (pSVar7[(int)uVar11]).Split(rowDelimiter, 0);
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar8 = __this._items;
								if (pSVar8 == null) goto label_05de9658;
								uVar3 = __this._size;
								if ((uint)pSVar8.Length <= uVar3) break;
								__this._size = uVar3 + 1;
								pSVar8[(int)uVar3] = item;
								uVar11 = uVar11 + 1;
								uVar3 = (uint)pSVar7.Length;
								if ((int)uVar3 <= (int)uVar11) goto label_05de949d;
							}
							__this.AddWithResize(ref item.obj);
							uVar11 = uVar11 + 1;
							uVar3 = (uint)pSVar7.Length;
						} while ((int)uVar11 < (int)uVar3);
					}
	label_05de949d: ;
					pSVar8 = (System_String_array_array)__this.ToArray();
					if (pSVar8 != null) {
						if (pSVar8.Length != 0) {
							if ((typeof(CSVCompression)._2).cctor_finished_or_no_cctor == 0) {
							}
							CSVCompression.DecompressDelta(pSVar8, deltaRows);
						}
						__this_00 = new List<string>();
						if (0 < (int)pSVar8.Length) {
							if (__this_00 == null) {
								pSVar7 = pSVar8[0];
								pSVar6 = Char.ToString(ref local_34);
								String.Join(pSVar6, pSVar7);
								throw new NullReferenceException();
							}
							uVar9 = pSVar8.Length & 0xffffffff;
							uVar12 = 0;
							do {
								if (uVar9 <= uVar12) {
	label_05de9645: ;
									throw new IndexOutOfRangeException();
								}
								pSVar7 = pSVar8[uVar12];
								pSVar6 = Char.ToString(ref local_34);
								pSVar6 = String.Join(pSVar6, pSVar7);
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar7 = __this_00._items;
								if (pSVar7 == null) goto label_05de9658;
								uVar3 = __this_00._size;
								if (uVar3 < (uint)pSVar7.Length) {
									__this_00._size = uVar3 + 1;
									pSVar7[(int)uVar3] = pSVar6;
								}
								else {
									__this_00.AddWithResize((object)pSVar6);
								}
								uVar12 = uVar12 + 1;
								uVar3 = (uint)pSVar8.Length;
								uVar9 = (ulong)uVar3;
							} while ((long)uVar12 < (long)(int)uVar3);
						}
						pSVar6 = Char.ToString(ref local_32);
						if (__this_00 != null) {
							pSVar7 = (String[])__this_00.ToArray();
							pSVar6 = String.Join(pSVar6, pSVar7);
							return pSVar6;
						}
					}
				}
			}
		}
	label_05de9658: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005650")]
	[Address(RVA = "0x5CE8E80", Offset = "0x5CE7E80", VA = "0x5CE8E80")]
	private static void CompressDelta(string[][] outputArr, int deltaRows)
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$CompressDelta): clean
		String[] pSVar1;
		bool bVar2;
		uint uVar3;
		String[] pSVar4;
		uint uVar6;
		ulong uVar7;
		ulong uVar8;
		int iVar9;
		long lVar10;
		uint uVar11;

		pSVar4 = (String[])new string[100];
		if (outputArr == null) {
	label_05de90d4: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)outputArr.Length;
		if (pSVar4 == null) {
			if (uVar3 != 0) {
				if ((outputArr[0] != null) &&((int)outputArr[0].Length < 1)) {
	label_05de8f58: ;
					if (1 < (int)uVar3) {
						if (deltaRows < 1) {
							uVar11 = uVar3 - 2;
							if (uVar3 - 1 < uVar3 - 2) {
								uVar11 = uVar3 - 1;
							}
							uVar11 = uVar11 + 1;
							uVar6 = 1;
							if (0x20 < uVar11) {
								uVar6 = 0x20;
								if ((uVar11 & 0x1f) != 0) {
									uVar6 = uVar11 & 0x1f;
								}
								iVar9 = uVar11 - uVar6;
								uVar6 = (uVar11 - uVar6) + 1;
								do {
									iVar9 = iVar9 + -0x20;
								} while (iVar9 != 0);
							}
							do {
								if (uVar3 <= uVar6) goto label_05de8f37;
								uVar6 = uVar6 + 1;
							} while ((int)uVar6 < (int)uVar3);
						}
						else {
							if (pSVar4 == null) {
								if ((outputArr[1] != null) &&((int)outputArr[1].Length == 0)) goto label_05de8f37;
								goto label_05de90d4;
							}
							uVar11 = 1;
							do {
								if (uVar3 <= uVar11) goto label_05de8f37;
								pSVar1 = outputArr[(int)uVar11];
								if (pSVar1 == null) goto label_05de90d4;
								uVar8 = 0;
								do {
									if (((uint)pSVar1.Length <= uVar8) || ((uint)pSVar4.Length <= uVar8)) goto label_05de8f37;
									bVar2 = (pSVar1[uVar8] == pSVar4[uVar8]);
									uVar7 = (ulong)(uint)pSVar1.Length;
									if (bVar2) {
										if (uVar7 <= uVar8) goto label_05de8f37;
										pSVar1[uVar8] = (String)**(ulong*)(g_data_07556758 + 0xb8);
									}
									else {
										if ((uVar7 <= uVar8) || ((uint)pSVar4.Length <= uVar8)) goto label_05de8f37;
										pSVar4[uVar8] = pSVar1[uVar8];
									}
									uVar8 = uVar8 + 1;
								} while (uVar8 != (uint)deltaRows);
								uVar11 = uVar11 + 1;
								uVar3 = (uint)outputArr.Length;
							} while ((int)uVar11 < (int)uVar3);
						}
					}
					return;
				}
				goto label_05de90d4;
			}
		}
		else if (uVar3 != 0) {
			lVar10 = 0;
			uVar8 = 0;
			do {
				pSVar1 = outputArr[0];
				if (pSVar1 == null) goto label_05de90d4;
				uVar11 = (uint)pSVar1.Length;
				if ((long)(int)uVar11 <= (long)uVar8) goto label_05de8f58;
				if ((uVar11 <= uVar8) || ((uint)pSVar4.Length <= uVar8)) break;
				pSVar4[uVar8] = pSVar1[uVar8];
				uVar8 = uVar8 + 1;
				uVar3 = (uint)outputArr.Length;
				lVar10 = lVar10 + 8;
			} while (uVar3 != 0);
		}
	label_05de8f37: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005651")]
	[Address(RVA = "0x5CE99A0", Offset = "0x5CE89A0", VA = "0x5CE99A0")]
	private static void CompressSymbol(string[][] outputArr, Dictionary<string, string> symbolTable)
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$CompressSymbol): 19 lines keep C-only constructs
		String[] pSVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		int iVar5;
		Dictionary<string, int> __this;
		ulong uVar6;
		Utility_CSVCompression___c_StaticFields pUVar7;
		Func<T, TResult> __this_00;
		object pIVar8;
		VirtualInvokeData pVVar9;
		il2cpp_array_size_t iVar10;
		String pSVar11;
		MethodInfo pMVar12;
		long lVar13;
		ulong uVar14;
		int iVar15;
		uint uVar16;
		uint uVar17;
		int index;
		byte[] auVar18 = new byte[12];
		MethodInfo pMStack_68;
		object pIStack_58;
		Dictionary<string, string> pSStack_50;
		Dictionary<string, string> pSStack_48;
		object* ppIStack_38;

		pSStack_48 = symbolTable;
		pIStack_58 = null;
		pMStack_68 = (MethodInfo)CSVCompression.ToBase62(0);
		__this = il2cpp_codegen_object_new(typeof(Dictionary<string, int>)) ;
		__this = new Dictionary<object, int>();
		pSStack_50 = new Dictionary<string, string>();
		if (outputArr != null) {
			uVar16 = (uint)outputArr.Length;
			if (__this == null) {
				if ((int)uVar16 < 1) goto label_05dea20a;
				uVar17 = 0;
				do {
					if (outputArr[(int)uVar17] == null) goto label_05dea20a;
					uVar6 = outputArr[(int)uVar17].Length;
					if (0 < (int)uVar6) goto label_05dea1fe;
					uVar17 = uVar17 + 1;
				} while (uVar16 != uVar17);
			}
			else if (0 < (int)uVar16) {
				uVar17 = 0;
				do {
					if (uVar16 <= uVar17) goto label_05dea205;
					pSVar1 = outputArr[(int)uVar17];
					if (pSVar1 == null) goto label_05dea20a;
					if (0 < (int)pSVar1.Length) {
						uVar6 = pSVar1.Length & 0xffffffff;
						uVar14 = 0;
						do {
							if (uVar6 <= uVar14) goto label_05dea205;
							pSVar11 = pSVar1[uVar14];
							bVar4 = __this.ContainsKey((object)pSVar11);
							if (bVar4) {
								iVar5 = __this.get_Item((object)pSVar11);
								__this.set_Item((object)pSVar11, iVar5 + 1);
							}
							else {
								__this.Add((object)pSVar11, 1);
							}
							uVar14 = uVar14 + 1;
							uVar16 = (uint)pSVar1.Length;
							uVar6 = (ulong)uVar16;
						} while ((long)uVar14 < (long)(int)uVar16);
					}
					uVar17 = uVar17 + 1;
					uVar16 = (uint)outputArr.Length;
				} while ((int)uVar17 < (int)uVar16);
			}
			if (__this != null) {
				pMVar12 = pMStack_68;
				bVar4 = __this.ContainsKey((object)pMStack_68);
				index = 0;
				if (bVar4) {
					index = 0;
					do {
						index = index + 1;
						pMStack_68 = (MethodInfo)CSVCompression.ToBase62(index);
						pMVar12 = pMStack_68;
						bVar4 = __this.ContainsKey((object)pMStack_68);
					} while (bVar4);
				}
				if ((typeof(CSVCompression.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar7 = typeof(CSVCompression.c).static_fields;
					__this_00 = (Func<T, TResult>)pUVar7.__9__4_0;
				}
				else {
					pUVar7 = typeof(CSVCompression.c).static_fields;
					__this_00 = (Func<T, TResult>)pUVar7.__9__4_0;
				}
				if (__this_00 == null) {
					if (((typeof(CSVCompression.c))._2).cctor_finished_or_no_cctor == 0) {
						pUVar7 = typeof(CSVCompression.c).static_fields;
					}
					pIVar8 = (object)pUVar7.__9;
					__this_00 = (Func<T, TResult>)il2cpp_codegen_object_new(typeof(Func<KeyValuePair<string, int>, int>)) ;
					__this_00 = new Func<KeyValuePair<object, int>, int>(pIVar8, (intptr_t)MethodInfo_Utility_CSVCompression_c_CompressSymbol_b__4_0);
					pUVar7 = typeof(CSVCompression.c).static_fields;
					pUVar7.__9__4_0 = (Func<KeyValuePair<string, int>, int>)__this_00;
				}
				pIVar8 = (object)Enumerable.OrderByDescending<KeyValuePair<string, int>, int>((System_Collections_Generic_IEnumerable_TSource__o)__this, (System_Func_TSource__TKey__o)__this_00);
				if (pIVar8 != null) {
					pIVar2 = pIVar8.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					pIStack_58 = pIVar8.Dispose();
					ppIStack_38 = &pIStack_58;
					iVar15 = 0;
					do {
						pIVar8 = pIStack_58;
						if (pIStack_58 == null) {
							throw new NullReferenceException();
						}
						pIVar2 = pIStack_58.klass;
						uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
						bVar4 = pIVar8.Dispose();
						pIVar8 = pIStack_58;
						if (!bVar4) {
	label_05dea04b: ;
							pIVar8 = pIStack_58;
							if (pIStack_58 == null) goto label_05dea0b6;
							pIVar2 = pIStack_58.klass;
							uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
							if (uVar6 == 0) goto label_05dea08f;
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar13 = 0;
							goto label_05dea080;
						}
						if (pIStack_58 == null) {
							throw new NullReferenceException();
						}
						pIVar2 = pIStack_58.klass;
						uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
						auVar18 = pIVar8.Dispose();
						pMVar12 = auVar18._0_8_;
						if ((auVar18._8_4_ < 3) || (10000 < iVar15)) goto label_05dea04b;
						if (pMVar12 == null) {
							throw new NullReferenceException();
						}
						if (pMStack_68 == null) {
							throw new NullReferenceException();
						}
						if (((String)&pMStack_68.invoker_method)._stringLength < *(int)&pMVar12.invoker_method) {
							if (pSStack_48 == null) {
								throw new NullReferenceException();
							}
							pSStack_48.Add((object)pMStack_68, (object)pMVar12);
							if (pSStack_50 == null) {
								throw new NullReferenceException();
							}
							pSStack_50.Add((object)pMVar12, (object)pMStack_68);
							index = index + 1;
							pMStack_68 = (MethodInfo)CSVCompression.ToBase62(index);
							if (pMStack_68 == null) {
								throw new NullReferenceException();
							}
							iVar15 = iVar15 + ((String)&pMStack_68.invoker_method)._stringLength + *(int)&pMVar12.invoker_method + 6;
						}
					} while(true);
				}
			}
		}
		goto label_05dea20a;
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar6 * 0x10 != lVar13)) break;
	label_05dea080: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar9 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
				goto label_05dea0ad;
			}
		}
	label_05dea08f: ;
	label_05dea0ad: ;
		pIVar8.Dispose();
	label_05dea0b6: ;
		iVar10 = outputArr.Length;
		uVar16 = (uint)iVar10;
		if (0 < (int)uVar16) {
			if (pSStack_50 == null) {
				uVar17 = 0;
				do {
					if (uVar16 <= uVar17) goto label_05dea205;
					if (outputArr[(int)uVar17] == null) goto label_05dea20a;
					uVar6 = outputArr[(int)uVar17].Length;
					if (0 < (int)uVar6) goto label_05dea1fe;
					uVar17 = uVar17 + 1;
				} while ((int)uVar17 < (int)uVar16);
			}
			else {
				uVar16 = 0;
				do {
					if ((uint)iVar10 <= uVar16) goto label_05dea205;
					pSVar1 = outputArr[(int)uVar16];
					if (pSVar1 == null) goto label_05dea20a;
					if (0 < (int)pSVar1.Length) {
						uVar6 = pSVar1.Length & 0xffffffff;
						lVar13 = 0;
						uVar14 = 0;
						do {
							if (uVar6 <= uVar14) goto label_05dea205;
							bVar4 = pSStack_50.ContainsKey((object)pSVar1[uVar14]);
							if (bVar4) {
								if (((uint)pSVar1.Length <= uVar14) ||(pSVar11 = pSStack_50.get_Item((object)pSVar1[uVar14]), (uint)pSVar1.Length <= uVar14)) goto label_05dea205;
								pSVar1[uVar14] = pSVar11;
							}
							uVar14 = uVar14 + 1;
							uVar17 = (uint)pSVar1.Length;
							uVar6 = (ulong)uVar17;
							lVar13 = lVar13 + 8;
						} while ((long)uVar14 < (long)(int)uVar17);
						iVar10 = outputArr.Length;
					}
					uVar16 = uVar16 + 1;
				} while ((int)uVar16 < (int)iVar10);
			}
		}
		return;
	label_05dea1fe: ;
		if ((uVar6 & 0xffffffff) == 0) {
	label_05dea205: ;
			throw new IndexOutOfRangeException();
		}
	label_05dea20a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005652")]
	[Address(RVA = "0x5CE9750", Offset = "0x5CE8750", VA = "0x5CE9750")]
	private static void DecompressDelta(string[][] outputArr, int deltaRows)
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$DecompressDelta): clean
		String[] pSVar1;
		bool bVar3;
		uint uVar4;
		object obj;
		String[] pSVar5;
		uint uVar7;
		int iVar8;
		ulong uVar9;
		uint uVar10;

		if (outputArr != null) {
			if ((int)outputArr.Length == 0) {
	label_05de9995: ;
				throw new IndexOutOfRangeException();
			}
			if (outputArr[0] != null) {
				pSVar5 = null;
				obj = (outputArr[0]).Clone();
				if ((obj != null) &&(pSVar5 = (String[])(obj as string[]), pSVar5 == null)) {
					throw new InvalidCastException();
				}
				uVar4 = (uint)outputArr.Length;
				if (1 < (int)uVar4) {
					if (deltaRows < 1) {
						uVar10 = uVar4 - 2;
						if (uVar4 - 1 < uVar4 - 2) {
							uVar10 = uVar4 - 1;
						}
						uVar10 = uVar10 + 1;
						uVar7 = 1;
						if (0x20 < uVar10) {
							uVar7 = 0x20;
							if ((uVar10 & 0x1f) != 0) {
								uVar7 = uVar10 & 0x1f;
							}
							iVar8 = uVar10 - uVar7;
							uVar7 = (uVar10 - uVar7) + 1;
							do {
								iVar8 = iVar8 + -0x20;
							} while (iVar8 != 0);
						}
						do {
							if (uVar4 <= uVar7) goto label_05de9995;
							uVar7 = uVar7 + 1;
						} while ((int)uVar7 < (int)uVar4);
					}
					else {
						if (pSVar5 == null) {
							pSVar5 = outputArr[1];
							if ((pSVar5 != null) &&(((int)pSVar5.Length == 0 ||((bVar3 = (pSVar5[0] == (String)**(ulong*)(g_data_07556758 + 0xb8)), !bVar3 && ((int)pSVar5.Length == 0)))))) goto label_05de9995;
							goto label_05de995d;
						}
						uVar10 = 1;
						do {
							if (uVar4 <= uVar10) goto label_05de9995;
							pSVar1 = outputArr[(int)uVar10];
							if (pSVar1 == null) goto label_05de995d;
							uVar9 = 0;
							do {
								if ((uint)pSVar1.Length <= uVar9) goto label_05de9995;
								bVar3 = (pSVar1[uVar9] == (String)**(ulong*)(g_data_07556758 + 0xb8));
								if (bVar3) {
									if (((uint)pSVar5.Length <= uVar9) || ((uint)pSVar1.Length <= uVar9)) goto label_05de9995;
									pSVar1[uVar9] = pSVar5[uVar9];
								}
								else {
									if (((uint)pSVar1.Length <= uVar9) || ((uint)pSVar5.Length <= uVar9)) goto label_05de9995;
									pSVar5[uVar9] = pSVar1[uVar9];
								}
								uVar9 = uVar9 + 1;
							} while (uVar9 != (uint)deltaRows);
							uVar10 = uVar10 + 1;
							uVar4 = (uint)outputArr.Length;
						} while ((int)uVar10 < (int)uVar4);
					}
				}
				return;
			}
		}
	label_05de995d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005653")]
	[Address(RVA = "0x5CEA530", Offset = "0x5CE9530", VA = "0x5CEA530")]
	private static void DecompressSymbol(string[][] outputArr, JSONNode symbolTable)
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$DecompressSymbol): clean
		String[] pSVar1;
		bool bVar2;
		uint uVar3;
		ulong uVar4;
		String pSVar5;
		JSONNode d;
		uint uVar6;
		ulong uVar7;
		long lVar8;

		if (outputArr == null) {
	label_05dea6c6: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)outputArr.Length;
		if (symbolTable == null) {
			if (0 < (int)uVar3) {
				uVar6 = 0;
				do {
					if (outputArr[(int)uVar6] == null) goto label_05dea6c6;
					uVar4 = outputArr[(int)uVar6].Length;
					if (0 < (int)uVar4) {
						if ((uVar4 & 0xffffffff) == 0) goto label_05dea6c1;
						goto label_05dea6c6;
					}
					uVar6 = uVar6 + 1;
				} while (uVar3 != uVar6);
			}
		}
		else if (0 < (int)uVar3) {
			uVar6 = 0;
			do {
				if (uVar3 <= uVar6) {
	label_05dea6c1: ;
					throw new IndexOutOfRangeException();
				}
				pSVar1 = outputArr[(int)uVar6];
				if (pSVar1 == null) goto label_05dea6c6;
				if (0 < (int)pSVar1.Length) {
					uVar4 = pSVar1.Length & 0xffffffff;
					lVar8 = 0;
					uVar7 = 0;
					do {
						if (uVar4 <= uVar7) goto label_05dea6c1;
						bVar2 = symbolTable.HasKey(pSVar1[uVar7]);
						if (bVar2) {
							if ((uint)pSVar1.Length <= uVar7) goto label_05dea6c1;
							d = symbolTable.get_Item(pSVar1[uVar7]) ;
							pSVar5 = ((JSONNode)d);
							if ((uint)pSVar1.Length <= uVar7) goto label_05dea6c1;
							pSVar1[uVar7] = pSVar5;
						}
						uVar7 = uVar7 + 1;
						uVar3 = (uint)pSVar1.Length;
						uVar4 = (ulong)uVar3;
						lVar8 = lVar8 + 8;
					} while ((long)uVar7 < (long)(int)uVar3);
				}
				uVar6 = uVar6 + 1;
				uVar3 = (uint)outputArr.Length;
			} while ((int)uVar6 < (int)uVar3);
		}
		return;
	}

	[Token(Token = "0x6005654")]
	[Address(RVA = "0x5CEA240", Offset = "0x5CE9240", VA = "0x5CEA240")]
	private static string ToBase62(int index)
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$ToBase62): 2 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		long lVar4;
		List<string> __this;
		String pSVar6;
		String[] pSVar7;
		Char[] pSVar8;

		if (index == 0) {
			pSVar8 = CSVCompression.Alphabet;
			if (pSVar8 != null) {
				if ((int)pSVar8.Length != 0) {
					pSVar6 = Char.ToString(pSVar8.m_Items);
					return pSVar6;
				}
	label_05dea529: ;
				throw new IndexOutOfRangeException();
			}
		}
		else {
			__this = new List<string>();
			pSVar8 = CSVCompression.Alphabet;
			if (pSVar8 != null) {
				if (index < 1) {
					if (__this == null) goto label_05dea524;
				}
				else {
					iVar2 = (int)pSVar8.Length;
					if (__this == null) {
						if ((typeof(CSVCompression)._2).cctor_finished_or_no_cctor == 0) {
							pSVar8 = CSVCompression.Alphabet;
							if (pSVar8 == null) goto label_05dea524;
						}
						if ((uint)((long)index % (long)iVar2) < (uint)pSVar8.Length) {
							Char.ToString(pSVar8.m_Items + ((long)index % (long)iVar2 & 0xffffffff));
							throw new NullReferenceException();
						}
						goto label_05dea529;
					}
					do {
						while(true) {
							lVar4 = (long)index;
							index = index / iVar2;
							pSVar8 = CSVCompression.Alphabet;
							if (pSVar8 == null) goto label_05dea524;
							if ((uint)pSVar8.Length <= (uint)(lVar4 % (long)iVar2)) goto label_05dea529;
							pSVar6 = Char.ToString(pSVar8.m_Items + (lVar4 % (long)iVar2 & 0xffffffff));
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = __this._items;
							if (pSVar7 == null) goto label_05dea524;
							uVar3 = __this._size;
							if ((uint)pSVar7.Length <= uVar3) break;
							__this._size = uVar3 + 1;
							pSVar7[(int)uVar3] = pSVar6;
							if (index < 1) goto label_05dea4de;
						}
						__this.AddWithResize((object)pSVar6);
					} while (0 < index);
				}
	label_05dea4de: ;
				__this.Reverse();
				pSVar7 = (String[])__this.ToArray();
				pSVar6 = String.Join("", pSVar7);
				return pSVar6;
			}
		}
	label_05dea524: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005655")]
	[Address(RVA = "0x5CEA6D0", Offset = "0x5CE96D0", VA = "0x5CEA6D0")]
	public CSVCompression()
	{
		// Lifted from source/cpp/Utility/CSVCompression.c (Utility.CSVCompression$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/CSVCompression.c.

	// Utility.CSVCompression$$.cctor: clean
	static CSVCompression()
	{
		Char[] pSVar1;

		if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" == null) {
			throw new NullReferenceException();
		}
		pSVar1 = ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789").ToCharArray();
		CSVCompression.Alphabet = pSVar1;
		return;
	}

	// Utility.CSVCompression.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CSVCompression.c();
		CSVCompression.c.__9 = (CSVCompression.c)__this;
		return;
	}

	// Utility.CSVCompression.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Utility.CSVCompression.<>c$$<CompressSymbol>b__4_0: clean
	private int c__CompressSymbol_b__4_0(System_Collections_Generic_KeyValuePair_string__int__o x)
	{
		return x.value;
	}
}
