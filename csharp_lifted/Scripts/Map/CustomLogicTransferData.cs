// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicTransferData
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicTransferData.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003E0")]
internal class CustomLogicTransferData
{
	[Token(Token = "0x40013B8")]
	private const byte MsgStart = 0;

	[Token(Token = "0x40013B9")]
	private const byte MsgBody = 1;

	[Token(Token = "0x40013BA")]
	private const byte MsgEnd = 2;

	[Token(Token = "0x40013BB")]
	private const int ChunkSize = 10000;

	[Token(Token = "0x40013BC")]
	[FieldOffset(Offset = "0x10")]
	private List<byte> _compressed;

	[Token(Token = "0x40013BD")]
	[FieldOffset(Offset = "0x18")]
	private List<byte[][]> _messages;

	[Token(Token = "0x40013BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly OrderedTransferReceiver _receiver;

	[Token(Token = "0x170002A7")]
	public IReadOnlyList<byte[][]> Messages
	{
		[Token(Token = "0x6001897")]
		[Address(RVA = "0x586C020", Offset = "0x586B020", VA = "0x586C020")]
		get
		{
			// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$get_Messages): clean
			return (IReadOnlyList<byte[][]>)this._messages;
		}
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x5869F90", Offset = "0x5868F90", VA = "0x5869F90")]
	public void Prepare(string source, string hash)
	{
		// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$Prepare): 9 lines keep C-only constructs
		int piVar1;
		List<byte[][]>* targetAddress;
		uint uVar2;
		int iVar3;
		CompressionAlgorithm __this_00;
		System_Byte_array_array_array pSVar4;
		int iVar6;
		Byte[] pSVar7;
		List<byte> pSVar8;
		List<byte[][]> pSVar9;
		System_Byte_array_array pSVar10;
		List<T> __this_01;
		Byte[] pSVar11;
		Encoding pSVar12;
		int count;
		int index;
		Byte[]* targetAddress_00;
		byte uVar13;

		if (Il2CppMethodInitialized_07545987 == false) {
			Il2CppMethodInitialized_07545987 = true;
			if ((typeof(DataCompressors)._2).cctor_finished_or_no_cctor == 0) goto label_0596a083;
	label_05969fc9: ;
			__this_00 = (CompressionAlgorithm)DataCompressors.Brotli;
		}
		else {
			if ((typeof(DataCompressors)._2).cctor_finished_or_no_cctor != 0) goto label_05969fc9;
	label_0596a083: ;
			__this_00 = (CompressionAlgorithm)DataCompressors.Brotli;
		}
		if (__this_00 != null) {
			pSVar7 = __this_00.CompressString(source, 1);
			pSVar8 = new List<byte>((IEnumerable<T>)pSVar7);
			this._compressed = pSVar8;
			pSVar9 = new List<byte[][]>();
			pSVar10 = (System_Byte_array_array)new byte[][2];
			pSVar7 = (Byte[])new byte[1];
			if (pSVar10 != null) {
				if ((int)pSVar10.Length != 0) {
					pSVar10[0] = pSVar7;
					pSVar7 = (Byte[])new byte[0];
					if ((pSVar10.Length & 0xfffffffe) != 0) {
						pSVar10[1] = pSVar7;
						if (pSVar9 != null) {
							piVar1 = &pSVar9._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = pSVar9._items;
							if (pSVar4 != null) {
								uVar2 = pSVar9._size;
								if (uVar2 < (uint)pSVar4.Length) {
									pSVar9._size = uVar2 + 1;
									pSVar4[(int)uVar2] = pSVar10;
								}
								else {
									pSVar9.AddWithResize((object)pSVar10);
								}
								targetAddress = &this._messages;
								this._messages = pSVar9;
								pSVar8 = this._compressed;
								if (pSVar8 != null) {
									iVar6 = 0;
									index = 0;
									do {
										iVar3 = pSVar8._size;
										if (iVar3 <= index) {
											if (iVar3 != 0) {
												return;
											}
											pSVar9 = *targetAddress;
											pSVar10 = (System_Byte_array_array)new byte[][3];
											pSVar7 = (Byte[])new byte[1];
											if (pSVar7 != null) {
												if ((int)pSVar7.Length == 0) goto label_0596a5cc;
												pSVar7[0] = 2;
												if (pSVar10 != null) {
													if ((int)pSVar10.Length == 0) goto label_0596a5cc;
													pSVar10[0] = pSVar7;
													pSVar7 = (Byte[])new byte[0];
													if ((pSVar10.Length & 0xfffffffe) == 0) goto label_0596a5cc;
													pSVar10[1] = pSVar7;
													pSVar12 = Encoding.UTF8;
													if (pSVar12 != null) {
														pSVar7 = pSVar12.GetBytes(hash);
														if ((uint)pSVar10.Length < 3) goto label_0596a5cc;
														pSVar10[2] = pSVar7;
														if (pSVar9 != null) {
															piVar1 = &pSVar9._version;
															*piVar1 = *piVar1 + 1;
															pSVar4 = pSVar9._items;
															if (pSVar4 != null) {
																uVar2 = pSVar9._size;
																if (uVar2 < (uint)pSVar4.Length) {
																	pSVar9._size = uVar2 + 1;
																	pSVar4[(int)uVar2] = pSVar10;
																	return;
																}
																pSVar9.AddWithResize((object)pSVar10);
																return;
															}
														}
													}
												}
											}
											break;
										}
										count = iVar6 + iVar3;
										if (9999 < count) {
											count = 10000;
										}
										__this_01 = pSVar8.GetRange(index, count);
										if (__this_01 == null) break;
										uVar13 = (count + index == iVar3) + 1;
										pSVar7 = __this_01.ToArray();
										pSVar9 = *targetAddress;
										if (count + index == iVar3) {
											pSVar10 = (System_Byte_array_array)new byte[][3];
											pSVar11 = (Byte[])new byte[1];
											if (pSVar11 == null) break;
											if ((int)pSVar11.Length == 0) goto label_0596a5cc;
											pSVar11[0] = uVar13;
											if (pSVar10 == null) break;
											if ((int)pSVar10.Length == 0) goto label_0596a5cc;
											pSVar10[0] = pSVar11;
											if ((pSVar10.Length & 0xfffffffe) == 0) goto label_0596a5cc;
											pSVar10[1] = pSVar7;
											pSVar12 = Encoding.UTF8;
											if (pSVar12 == null) break;
											pSVar7 = pSVar12.GetBytes(hash);
											if ((uint)pSVar10.Length < 3) goto label_0596a5cc;
											targetAddress_00 = pSVar10.m_Items + 2;
											pSVar10[2] = pSVar7;
										}
										else {
											pSVar10 = (System_Byte_array_array)new byte[][2];
											pSVar11 = (Byte[])new byte[1];
											if (pSVar11 == null) break;
											if ((int)pSVar11.Length == 0) goto label_0596a5cc;
											pSVar11[0] = uVar13;
											if (pSVar10 == null) break;
											if ((int)pSVar10.Length == 0) goto label_0596a5cc;
											pSVar10[0] = pSVar11;
											if ((pSVar10.Length & 0xfffffffe) == 0) goto label_0596a5cc;
											targetAddress_00 = pSVar10.m_Items + 1;
											pSVar10[1] = pSVar7;
										}
										if (pSVar9 == null) break;
										piVar1 = &pSVar9._version;
										*piVar1 = *piVar1 + 1;
										pSVar4 = pSVar9._items;
										if (pSVar4 == null) break;
										uVar2 = pSVar9._size;
										if (uVar2 < (uint)pSVar4.Length) {
											pSVar9._size = uVar2 + 1;
											pSVar4[(int)uVar2] = pSVar10;
										}
										else {
											pSVar9.AddWithResize(ref pSVar10.obj);
										}
										index = index + 10000;
										pSVar8 = this._compressed;
										iVar6 = iVar6 + -10000;
									} while (pSVar8 != null);
								}
							}
						}
						goto label_0596a5c7;
					}
				}
	label_0596a5cc: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_0596a5c7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x586A9A0", Offset = "0x58699A0", VA = "0x586A9A0")]
	public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, out string source, out string hash)
	{
		// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$TryReceive): 3 lines keep C-only constructs
		OrderedTransferReceiver __this_00;
		CustomLogicTransferData.c__DisplayClass10_0 __this_01;
		Func<T1, T2, T3, TResult> __this_02;
		Action<T1, T2> __this_03;
		Action __this_04;

		__this_01 = new CustomLogicTransferData.c__DisplayClass10_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.completedSource = null;
			__this_01.completedHash = null;
			__this_01.completed = false;
			__this_00 = this._receiver;
			__this_02 = new Func<byte[][], int, int, bool>(null, (intptr_t)MethodInfo_Map_CustomLogicTransferData_ValidateMessage);
			__this_03 = new Action<byte[][], int>((object)__this_01, (intptr_t)MethodInfo_Map_CustomLogicTransferData_c__DisplayClass10_0_TryReceive_b__0);
			__this_04 = new Action((object)this, (intptr_t)MethodInfo_Map_CustomLogicTransferData_ResetReceiveState);
			if (__this_00 != null) {
				__this_00.TryReceive(message, messageIndex, messageTotal, (Func<byte[][], int, int, bool>)__this_02, (Action<byte[][], int>)__this_03, __this_04);
				*source = __this_01.completedSource;
				*hash = __this_01.completedHash;
				return __this_01.completed;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x586C2D0", Offset = "0x586B2D0", VA = "0x586C2D0")]
	private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$ValidateMessage): clean
		byte uVar1;
		Byte[] pSVar2;
		int iVar3;
		bool bVar4;

		if (message != null) {
			iVar3 = (int)message.Length;
			if (iVar3 < 2) {
				return false;
			}
			pSVar2 = message[0];
			if (pSVar2 != null) {
				if ((int)pSVar2.Length != 1) {
					return false;
				}
				uVar1 = pSVar2[0];
				if (uVar1 == 2) {
					if (messageTotal + -1 != messageIndex) {
						return false;
					}
					if (iVar3 != 3) {
						return false;
					}
					if (message[1] != null) {
						if (10000 < (int)message[1].Length) {
							return false;
						}
						if (message[2] != null) {
							iVar3 = (int)message[2].Length;
							bVar4 = SBORROW4(iVar3, 0x401);
							iVar3 = iVar3 + -0x401;
							goto label_0596c386;
						}
					}
				}
				else if (uVar1 == 1) {
					if (messageIndex < 1) {
						return false;
					}
					if (messageTotal + -1 <= messageIndex) {
						return false;
					}
					if (iVar3 != 2) {
						return false;
					}
					if (message[1] != null) {
						iVar3 = (int)message[1].Length;
						bVar4 = SBORROW4(iVar3, 0x2711);
						iVar3 = iVar3 + -0x2711;
	label_0596c386: ;
						return bVar4 != iVar3 < 0;
					}
				}
				else {
					if (uVar1 != 0) {
						return false;
					}
					if (messageIndex != 0) {
						return false;
					}
					if (iVar3 != 2) {
						return false;
					}
					if (message[1] != null) {
						return (int)message[1].Length == 0;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x58696E0", Offset = "0x58686E0", VA = "0x58696E0")]
	public void Reset()
	{
		// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$Reset): clean
		OrderedTransferReceiver pMVar1;
		SortedDictionary<int, byte[][]> __this_00;
		List<byte> __this_01;

		pMVar1 = this._receiver;
		if (pMVar1 != null) {
			__this_00 = pMVar1._pending;
			if (__this_00 != null) {
				__this_00.Clear();
				pMVar1._expectedIndex = 0;
				pMVar1._messageTotal = 0;
				pMVar1._receivedBytes = 0;
				pMVar1._active = false;
				__this_01 = new List<byte>();
				this._compressed = __this_01;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x586C400", Offset = "0x586B400", VA = "0x586C400")]
	private void ResetReceiveState()
	{
		// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$ResetReceiveState): clean
		List<byte> __this_00;

		__this_00 = new List<byte>();
		this._compressed = __this_00;
		return;
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x586AC80", Offset = "0x5869C80", VA = "0x586AC80")]
	public CustomLogicTransferData()
	{
		// Lifted from source/cpp/Map/CustomLogicTransferData.c (Map.CustomLogicTransferData$$.ctor): clean
		List<byte> __this_00;
		List<byte[][]> __this_01;
		OrderedTransferReceiver __this_02;

		__this_00 = new List<byte>();
		this._compressed = __this_00;
		__this_01 = new List<byte[][]>();
		this._messages = __this_01;
		__this_02 = new OrderedTransferReceiver(0x80000000);
		this._receiver = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/CustomLogicTransferData.c.

	// Map.CustomLogicTransferData.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// Map.CustomLogicTransferData.<>c__DisplayClass10_0$$<TryReceive>b__0: clean
	private void c__DisplayClass10_0__TryReceive_b__0(System_Byte_array_array orderedMessage, int __)
	{
		byte uVar1;
		CustomLogicTransferData pMVar2;
		CompressionAlgorithm __this_00;
		List<byte> pSVar3;
		Byte[] pSVar4;
		String pSVar5;
		Encoding pSVar6;

		if (orderedMessage != null) {
			if ((int)orderedMessage.Length == 0) {
	label_0596c772: ;
				throw new IndexOutOfRangeException();
			}
			pSVar4 = orderedMessage[0];
			if (pSVar4 != null) {
				if ((int)pSVar4.Length == 0) goto label_0596c772;
				uVar1 = pSVar4[0];
				if (uVar1 == 0) {
					pMVar2 = this.__4__this;
					pSVar3 = new List<byte>();
					if (pMVar2 == null) goto label_0596c76d;
					pMVar2._compressed = pSVar3;
				}
				pMVar2 = this.__4__this;
				if (pMVar2 != null) {
					if ((orderedMessage.Length & 0xfffffffe) == 0) goto label_0596c772;
					pSVar3 = pMVar2._compressed;
					if (pSVar3 != null) {
						pSVar3.AddRange((IEnumerable<T>)orderedMessage[1]);
						if (uVar1 != 2) {
							return;
						}
						pMVar2 = this.__4__this;
						if ((pMVar2 != null) &&(pSVar3 = pMVar2._compressed, pSVar3 != null) ) {
							__this_00 = (CompressionAlgorithm)DataCompressors.Brotli;
							pSVar4 = pSVar3.ToArray();
							if (__this_00 != null) {
								pSVar5 = __this_00.DecompressString(pSVar4, 0x1000, 0xa00000);
								this.completedSource = pSVar5;
								pSVar6 = Encoding.UTF8;
								if ((uint)orderedMessage.Length < 3) goto label_0596c772;
								if (pSVar6 != null) {
									pSVar5 = pSVar6.GetString(orderedMessage[2]);
									this.completedHash = pSVar5;
									this.completed = true;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_0596c76d: ;
		throw new NullReferenceException();
	}
}
