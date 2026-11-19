// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLexer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLexer.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicLexer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000641")]
public class CustomLogicLexer
{
	[Token(Token = "0x4001B6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string _source;

	[Token(Token = "0x4001B6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x4001B6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x4001B70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _line;

	[Token(Token = "0x4001B71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _chars;

	[Token(Token = "0x17000A81")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003C3A")]
		[Address(RVA = "0x5A74500", Offset = "0x5A73500", VA = "0x5A74500")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$get_Compiler): clean
			return this._Compiler_k__BackingField;
		}
		[Token(Token = "0x6003C3B")]
		[Address(RVA = "0x5A74510", Offset = "0x5A73510", VA = "0x5A74510")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$set_Compiler): clean
			this._Compiler_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003C3C")]
	[Address(RVA = "0x5A74520", Offset = "0x5A73520", VA = "0x5A74520")]
	public CustomLogicLexer(string source, [Optional] CustomLogicCompiler compiler)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$.ctor): clean
		List<CustomLogicToken> __this_00;

		__this_00 = new List<CustomLogicToken>();
		this._tokens = __this_00;
		this.Error = "";
		base();
		CustomLogicSymbols.Init();
		this._source = source;
		this._Compiler_k__BackingField = compiler;
		return;
	}

	[Token(Token = "0x6003C3D")]
	[Address(RVA = "0x5A746C0", Offset = "0x5A736C0", VA = "0x5A746C0")]
	public string GetLineNumberString(int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$GetLineNumberString): clean
		CustomLogicCompiler __this_00;
		String pSVar1;

		__this_00 = this._Compiler_k__BackingField;
		if (__this_00 == null) {
			return pSVar1;
		}
		return pSVar1;
	}

	[Token(Token = "0x6003C3E")]
	[Address(RVA = "0x5A746F0", Offset = "0x5A736F0", VA = "0x5A746F0")]
	public List<CustomLogicToken> GetTokens()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$GetTokens): 11 lines keep C-only constructs
		uint uVar1;
		int piVar2;
		Char[]* targetAddress;
		int length;
		uint uVar3;
		List<CustomLogicToken> pSVar4;
		HashSet<object> pSVar5;
		Dictionary<object, int> pSVar6;
		ushort uVar7;
		bool bVar8;
		uint uVar9;
		int iVar10;
		Char[] pSVar11;
		String pSVar12;
		String str1;
		object pIVar13;
		ulong uVar14;
		MethodInfo method_00;
		uint startIndex;
		ushort local_3a;
		float local_38;
		int local_34;

		if (Il2CppMethodInitialized_0754736a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754736a = true;
		}
		local_3a = 0;
		local_34 = 0;
		this._line = 0;
		pSVar4 = this._tokens;
		if (pSVar4 != null) {
			piVar2 = &pSVar4._version;
			*piVar2 = *piVar2 + 1;
			length = pSVar4._size;
			pSVar4._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar4._items, 0, length);
			}
			pSVar12 = this._source;
			if (pSVar12 != null) {
				startIndex = 0;
				pSVar11 = pSVar12.ToCharArray();
				targetAddress = &this._chars;
				this._chars = pSVar11;
				pSVar11 = this._chars;
				while (pSVar11 != null) {
					uVar9 = (uint)pSVar11.Length;
					if ((int)uVar9 <= (int)startIndex) {
						return this._tokens;
					}
					if (uVar9 <= startIndex) {
						throw new IndexOutOfRangeException();
					}
					local_3a = pSVar11[(int)startIndex];
					if (local_3a == 10) {
						piVar2 = &this._line;
						*piVar2 = *piVar2 + 1;
						goto label_05b747f4;
					}
					pSVar12 = Char.ToString(ref local_3a);
					pSVar11 = *targetAddress;
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					uVar9 = (uint)pSVar11.Length;
					uVar14 = (ulong)(uVar9 - 1);
					if ((int)startIndex < (int)(uVar9 - 1)) {
						if ((g_data_07556750._2).cctor_finished_or_no_cctor == 0) {
							uVar9 = (uint)pSVar11.Length;
						}
						uVar1 = startIndex + 1;
						uVar14 = (ulong)uVar1;
						if (uVar9 <= uVar1) {
							throw new IndexOutOfRangeException();
						}
						str1 = Char.ToString(pSVar11.m_Items + (int)uVar1);
						pSVar12 = String.Concat(pSVar12, str1);
					}
					uVar7 = local_3a;
					bVar8 = Char.IsLetter(uVar7);
					uVar7 = local_3a;
					method_00 = (MethodInfo)CONCAT71((int7)(uVar14 >> 8), local_3a == 0x5f);
					if (bVar8 || local_3a == 0x5f) {
						pSVar12 = this.ScanBool(startIndex);
						bVar8 = (pSVar12 != "");
						if (bVar8) {
							bVar8 = (pSVar12 == "true");
							local_38 = (float)CONCAT31(local_38._1_3_, bVar8);
							pIVar13 = (object)local_38;
							this.AddToken(1, pIVar13, this._line);
							if (pSVar12 == null) {
								throw new NullReferenceException();
							}
						}
						else {
							pSVar12 = this.ScanAlphaSymbol(startIndex);
							bVar8 = (pSVar12 != "");
							if (bVar8) {
								bVar8 = (pSVar12 == "null");
								if (bVar8) {
									this.AddToken(1, null, this._line);
								}
								else {
									pSVar6 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									local_38 = (float)pSVar6.get_Item((object)pSVar12);
									pIVar13 = (object)local_38;
									this.AddToken(0, pIVar13, this._line);
								}
								if (pSVar12 == null) {
									throw new NullReferenceException();
								}
							}
							else {
								pSVar12 = this.ScanName(startIndex);
								this.AddToken(2, (object)pSVar12, this._line);
								if (pSVar12 == null) {
									throw new NullReferenceException();
								}
							}
						}
	label_05b74c80: ;
						startIndex = (startIndex + pSVar12._stringLength) - 1;
					}
					else {
						bVar8 = Char.IsDigit(uVar7);
						if (bVar8) {
							pSVar12 = this.ScanNumber(startIndex);
							if (pSVar12 == null) {
								throw new NullReferenceException();
							}
							bVar8 = pSVar12.Contains(".");
							if (bVar8) {
								local_38 = Single.Parse(pSVar12);
								pIVar13 = (object)local_38;
								this.AddToken(1, pIVar13, this._line);
							}
							else {
								local_38 = (float)Int32.Parse(pSVar12);
								pIVar13 = (object)local_38;
								this.AddToken(1, pIVar13, this._line);
							}
							goto label_05b74c80;
						}
						if (local_3a == 0x23) {
							pSVar12 = this.ScanComment(startIndex);
							if (pSVar12 == null) {
								throw new NullReferenceException();
							}
							iVar10 = pSVar12._stringLength;
	label_05b74b2c: ;
							startIndex = startIndex + iVar10 + 1;
						}
						else {
							if (local_3a == 0x22) {
								pSVar12 = this.ScanStringLiteral(startIndex, ref local_34) ;
								this.AddToken(1, (object)pSVar12, this._line);
								iVar10 = local_34;
								goto label_05b74b2c;
							}
							pSVar5 = (HashSet<object>)CustomLogicSymbols.SpecialSymbolNames;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							bVar8 = pSVar5.Contains((object)pSVar12);
							uVar3 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
							if (bVar8) {
								if (uVar3 == 0) {
								}
								pSVar6 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								local_38 = (float)pSVar6.get_Item((object)pSVar12);
								pIVar13 = (object)local_38;
								this.AddToken(0, pIVar13, this._line);
								startIndex = startIndex + 1;
							}
							else {
								if (uVar3 == 0) {
								}
								pSVar5 = (HashSet<object>)CustomLogicSymbols.SpecialSymbolNames;
								pSVar12 = Char.ToString(ref local_3a);
								if (pSVar5 == null) {
									throw new NullReferenceException();
								}
								bVar8 = pSVar5.Contains((object)pSVar12);
								if (bVar8) {
									if (local_3a == 0x2f) {
										pSVar11 = *targetAddress;
										if (pSVar11 == null) {
											throw new NullReferenceException();
										}
										uVar9 = startIndex + 1;
										uVar1 = (uint)pSVar11.Length;
										if ((int)uVar9 < (int)uVar1) {
											if (uVar1 <= uVar9) {
												throw new IndexOutOfRangeException();
											}
											if (pSVar11[(int)uVar9] == 0x2a) {
												pSVar12 = this.ScanBlockComment(uVar9);
												if (pSVar12 == null) {
													throw new NullReferenceException();
												}
												startIndex = startIndex + pSVar12._stringLength + 3;
												goto label_05b747f4;
											}
										}
									}
									pSVar6 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
									pSVar12 = Char.ToString(ref local_3a);
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									local_38 = (float)pSVar6.get_Item((object)pSVar12);
									pIVar13 = (object)local_38;
									this.AddToken(0, pIVar13, this._line);
								}
							}
						}
					}
	label_05b747f4: ;
					startIndex = startIndex + 1;
					pSVar11 = *targetAddress;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C3F")]
	[Address(RVA = "0x5A75180", Offset = "0x5A74180", VA = "0x5A75180")]
	private void AddToken(CustomLogicTokenType type, object value, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$AddToken): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicToken> __this_00;
		CustomLogicToken[] pCVar3;
		CustomLogicToken __this_01;

		__this_00 = this._tokens;
		__this_01 = new CustomLogicToken();
		__this_01.Type = type;
		__this_01.Value = value;
		__this_01.Line = line;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pCVar3 = __this_00._items;
			if (pCVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pCVar3.Length) {
					__this_00._size = uVar2 + 1;
					pCVar3[(int)uVar2] = __this_01;
					return;
				}
				__this_00.AddWithResize((object)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C40")]
	[Address(RVA = "0x5A75270", Offset = "0x5A74270", VA = "0x5A75270")]
	private string ScanAlphaSymbol(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanAlphaSymbol): 1 lines keep C-only constructs
		uint uVar1;
		ushort c;
		HashSet<object> __this_00;
		bool bVar2;
		Char[] pSVar3;
		String str1;
		String str0;
		long lVar4;

		if (Il2CppMethodInitialized_0754736c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754736c = true;
		}
		pSVar3 = this._chars;
		if (pSVar3 != null) {
			lVar4 = (long)startIndex * 2 + 0x20;
			str0 = "";
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((int)uVar1 <= startIndex) {
					return "";
				}
				if (uVar1 <= (uint)startIndex) {
	label_05b753fa: ;
					throw new IndexOutOfRangeException();
				}
				c = *(ushort)((long)pSVar3.m_Items + lVar4 + -0x20);
				bVar2 = Char.IsLetter(c);
				pSVar3 = this._chars;
				if (bVar2) {
					if (pSVar3 == null) break;
				}
				else {
					if (pSVar3 == null) break;
					if ((uint)pSVar3.Length <= (uint)startIndex) goto label_05b753fa;
					if (*(short)((long)pSVar3.m_Items + lVar4 + -0x20) != 0x5f) {
						__this_00 = (HashSet<object>)CustomLogicSymbols.AlphaSymbolNames;
						if (__this_00 != null) {
							bVar2 = __this_00.Contains((object)str0);
							if (bVar2) {
								return str0;
							}
							return "";
						}
						break;
					}
				}
				if ((uint)pSVar3.Length <= (uint)startIndex) goto label_05b753fa;
				str1 = Char.ToString((ushort)((long)pSVar3.m_Items + lVar4 + -0x20));
				str0 = String.Concat(str0, str1);
				startIndex = startIndex + 1;
				pSVar3 = this._chars;
				lVar4 = lVar4 + 2;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C41")]
	[Address(RVA = "0x5A75020", Offset = "0x5A74020", VA = "0x5A75020")]
	private string ScanBool(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanBool): clean
		uint uVar1;
		ushort c;
		long lVar2;
		bool bVar3;
		Char[] pSVar4;
		String str1;
		String a;
		long lVar5;

		pSVar4 = this._chars;
		if (pSVar4 != null) {
			lVar5 = (long)startIndex * 2 + 0x20;
			a = "";
			do {
				uVar1 = (uint)pSVar4.Length;
				if ((int)uVar1 <= startIndex) {
					return "";
				}
				if (uVar1 <= (uint)startIndex) {
	label_05b75173: ;
					throw new IndexOutOfRangeException();
				}
				c = *(ushort)((long)pSVar4.m_Items + lVar5 + -0x20);
				bVar3 = Char.IsLetter(c);
				if (!bVar3) {
					bVar3 = (a == "true");
					if (bVar3) {
						return a;
					}
					bVar3 = (a == "false");
					if (bVar3) {
						return a;
					}
					return "";
				}
				pSVar4 = this._chars;
				if (pSVar4 == null) break;
				if ((uint)pSVar4.Length <= (uint)startIndex) goto label_05b75173;
				startIndex = startIndex + 1;
				lVar2 = lVar5 + -0x20;
				lVar5 = lVar5 + 2;
				str1 = Char.ToString((ushort)((long)pSVar4.m_Items + lVar2));
				a = String.Concat(a, str1);
				pSVar4 = this._chars;
			} while (pSVar4 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C42")]
	[Address(RVA = "0x5A75540", Offset = "0x5A74540", VA = "0x5A75540")]
	private string ScanNumber(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanNumber): clean
		uint uVar1;
		ushort c;
		bool bVar2;
		Char[] pSVar3;
		String str1;
		String str0;
		long lVar4;

		pSVar3 = this._chars;
		if (pSVar3 != null) {
			lVar4 = (long)startIndex * 2 + 0x20;
			str0 = "";
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((int)uVar1 <= startIndex) {
					return str0;
				}
				if (uVar1 <= (uint)startIndex) {
	label_05b75665: ;
					throw new IndexOutOfRangeException();
				}
				c = *(ushort)((long)pSVar3.m_Items + lVar4 + -0x20);
				bVar2 = Char.IsDigit(c);
				pSVar3 = this._chars;
				if (bVar2) {
					if (pSVar3 == null) break;
				}
				else {
					if (pSVar3 == null) break;
					if ((uint)pSVar3.Length <= (uint)startIndex) goto label_05b75665;
					if (*(short)((long)pSVar3.m_Items + lVar4 + -0x20) != 0x2e) {
						return str0;
					}
				}
				if ((uint)pSVar3.Length <= (uint)startIndex) goto label_05b75665;
				str1 = Char.ToString((ushort)((long)pSVar3.m_Items + lVar4 + -0x20));
				str0 = String.Concat(str0, str1);
				startIndex = startIndex + 1;
				pSVar3 = this._chars;
				lVar4 = lVar4 + 2;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C43")]
	[Address(RVA = "0x5A75410", Offset = "0x5A74410", VA = "0x5A75410")]
	private string ScanName(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanName): clean
		uint uVar1;
		ushort c;
		bool bVar2;
		Char[] pSVar3;
		String str1;
		String str0;
		long lVar4;

		pSVar3 = this._chars;
		if (pSVar3 != null) {
			lVar4 = (long)startIndex * 2 + 0x20;
			str0 = "";
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((int)uVar1 <= startIndex) {
					return str0;
				}
				if (uVar1 <= (uint)startIndex) {
	label_05b75535: ;
					throw new IndexOutOfRangeException();
				}
				c = *(ushort)((long)pSVar3.m_Items + lVar4 + -0x20);
				bVar2 = Char.IsLetterOrDigit(c);
				pSVar3 = this._chars;
				if (bVar2) {
					if (pSVar3 == null) break;
				}
				else {
					if (pSVar3 == null) break;
					if ((uint)pSVar3.Length <= (uint)startIndex) goto label_05b75535;
					if (*(short)((long)pSVar3.m_Items + lVar4 + -0x20) != 0x5f) {
						return str0;
					}
				}
				if ((uint)pSVar3.Length <= (uint)startIndex) goto label_05b75535;
				str1 = Char.ToString((ushort)((long)pSVar3.m_Items + lVar4 + -0x20));
				str0 = String.Concat(str0, str1);
				startIndex = startIndex + 1;
				pSVar3 = this._chars;
				lVar4 = lVar4 + 2;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C44")]
	[Address(RVA = "0x5A75670", Offset = "0x5A74670", VA = "0x5A75670")]
	private string ScanStringLiteral(int startIndex, out int rawLiteralLength)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanStringLiteral): 10 lines keep C-only constructs
		int piVar1;
		ushort uVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		Char[] pSVar6;
		String pSVar7;
		String str1;
		String* ppSVar8;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		uint uVar9;
		ushort local_3a;
		CustomLogicLexer local_38;

		local_38 = this;
		pSVar7 = "";
		local_3a = 0;
		*rawLiteralLength = 0;
		do {
			pSVar6 = local_38._chars;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			uVar9 = startIndex + 1;
			uVar5 = (uint)pSVar6.Length;
			if ((int)uVar5 <= (int)uVar9) {
	label_05b7588e: ;
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_00 = (Exception)il2cpp_codegen_object_new(klass);
				pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Unclosed string literal");
				__this_00 = new Exception(pSVar7);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanStringLiteral);
				throw (object)__this_00;
			}
			iVar3 = *rawLiteralLength;
			*rawLiteralLength = iVar3 + 1;
			if (uVar5 <= uVar9) goto label_05b75889;
			uVar2 = pSVar6[(int)uVar9];
			if (uVar2 == 10) {
				piVar1 = &local_38._line;
				*piVar1 = *piVar1 + 1;
				uVar4 = (g_data_07556750._2).cctor_finished_or_no_cctor;
	joined_r0x05b7579d: ;
				if (uVar4 == 0) {
					uVar5 = (uint)pSVar6.Length;
				}
				if (uVar5 <= uVar9) {
	label_05b75889: ;
					throw new IndexOutOfRangeException();
				}
				str1 = Char.ToString(pSVar6.m_Items + (int)uVar9);
				startIndex = uVar9;
			}
			else {
				if (uVar2 != 0x5c) {
					if (uVar2 == 0x22) {
						*rawLiteralLength = iVar3;
						return pSVar7;
					}
					uVar4 = (g_data_07556750._2).cctor_finished_or_no_cctor;
					goto joined_r0x05b7579d;
				}
				startIndex = startIndex + 2;
				if ((int)uVar5 <= startIndex) goto label_05b7588e;
				*rawLiteralLength = iVar3 + 2;
				if (uVar5 <= (uint)startIndex) goto label_05b75889;
				local_3a = pSVar6[startIndex];
				switch(local_3a) {
				case 0x5c:
					ppSVar8 = &"\\";
					break;
				case 0x5d:
				case 0x5e:
				case 0x5f:
				case 0x60:
				case 0x61:
				case 0x62:
				case 99:
				case 100:
				case 0x65:
				case 0x66:
				case 0x67:
				case 0x68:
				case 0x69:
				case 0x6a:
				case 0x6b:
				case 0x6c:
				case 0x6d:
				case 0x6f:
				case 0x70:
				case 0x71:
				case 0x73:
	switchD_05b7580d_caseD_1: ;
					str1 = Char.ToString(ref local_3a);
					goto label_05b75704;
				case 0x6e:
					ppSVar8 = &"\n";
					break;
				case 0x72:
					ppSVar8 = &"\r";
					break;
				case 0x74:
					ppSVar8 = &"\t";
					break;
				default: ;
					if (local_3a != 0x22) goto switchD_05b7580d_caseD_1;
					ppSVar8 = &"\"";
				}
				str1 = *ppSVar8;
			}
	label_05b75704: ;
			pSVar7 = String.Concat(pSVar7, str1);
		} while(true);
	}

	[Token(Token = "0x6003C45")]
	[Address(RVA = "0x5A758E0", Offset = "0x5A748E0", VA = "0x5A758E0")]
	private string ScanComment(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanComment): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String str1;
		String pSVar3;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		Char[] pSVar4;

		pSVar4 = this._chars;
		if (pSVar4 != null) {
			pSVar3 = "";
			do {
				startIndex = startIndex + 1;
				uVar2 = (uint)pSVar4.Length;
				if ((int)uVar2 <= startIndex) {
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_00 = (Exception)il2cpp_codegen_object_new(klass);
					pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unclosed comment");
					__this_00 = new Exception(pSVar3);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanComment);
					throw (object)__this_00;
				}
				if (uVar2 <= (uint)startIndex) {
	label_05b759a8: ;
					throw new IndexOutOfRangeException();
				}
				if (pSVar4[startIndex] == 10) {
					piVar1 = &this._line;
					*piVar1 = *piVar1 + 1;
					return pSVar3;
				}
				if ((g_data_07556750._2).cctor_finished_or_no_cctor == 0) {
					uVar2 = (uint)pSVar4.Length;
				}
				if (uVar2 <= (uint)startIndex) goto label_05b759a8;
				str1 = Char.ToString(pSVar4.m_Items + startIndex);
				pSVar3 = String.Concat(pSVar3, str1);
				pSVar4 = this._chars;
			} while (pSVar4 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C46")]
	[Address(RVA = "0x5A75A00", Offset = "0x5A74A00", VA = "0x5A75A00")]
	private string ScanBlockComment(int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLexer.c (CustomLogic.CustomLogicLexer$$ScanBlockComment): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		short sVar3;
		uint uVar4;
		String str1;
		String pSVar5;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		Char[] pSVar6;
		uint uVar7;
		long lVar8;

		pSVar6 = this._chars;
		if (pSVar6 != null) {
			uVar7 = startIndex + 1;
			lVar8 = (long)(int)uVar7 * 2 + 0x20;
			pSVar5 = "";
			do {
				uVar4 = (uint)pSVar6.Length;
				if ((int)uVar4 <= (int)uVar7) {
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_00 = (Exception)il2cpp_codegen_object_new(klass);
					pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unclosed block comment");
					__this_00 = new Exception(pSVar5);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLexer_ScanBlockComment);
					throw (object)__this_00;
				}
				if (uVar4 <= uVar7) {
	label_05b75b15: ;
					throw new IndexOutOfRangeException();
				}
				sVar3 = *(short)((long)pSVar6.m_Items + lVar8 + -0x20);
				if (sVar3 == 0x2a) {
					uVar2 = uVar7 + 1;
					if ((int)uVar2 < (int)uVar4) {
						if (uVar4 <= uVar2) goto label_05b75b15;
						if (pSVar6[(int)uVar2] == 0x2f) {
							return pSVar5;
						}
					}
				}
				else if (sVar3 == 10) {
					piVar1 = &this._line;
					*piVar1 = *piVar1 + 1;
				}
				if ((g_data_07556750._2).cctor_finished_or_no_cctor == 0) {
					uVar4 = (uint)pSVar6.Length;
				}
				if (uVar4 <= uVar7) goto label_05b75b15;
				str1 = Char.ToString((ushort)((long)pSVar6.m_Items + lVar8 + -0x20));
				pSVar5 = String.Concat(pSVar5, str1);
				pSVar6 = this._chars;
				uVar7 = uVar7 + 1;
				lVar8 = lVar8 + 2;
			} while (pSVar6 != null);
		}
		throw new NullReferenceException();
	}
}
