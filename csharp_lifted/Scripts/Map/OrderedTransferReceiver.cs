// ==================== AoTTG2 cross-reference ====================
// Type: Map.OrderedTransferReceiver
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/OrderedTransferReceiver.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003E2")]
internal class OrderedTransferReceiver
{
	[Token(Token = "0x40013C3")]
	public const long MaxTransferBytes = 2147483648L;

	[Token(Token = "0x40013C4")]
	[FieldOffset(Offset = "0x10")]
	private readonly SortedDictionary<int, byte[][]> _pending;

	[Token(Token = "0x40013C5")]
	[FieldOffset(Offset = "0x18")]
	private readonly long _maxTransferBytes;

	[Token(Token = "0x40013C6")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxTransferMessages;

	[Token(Token = "0x40013C7")]
	[FieldOffset(Offset = "0x24")]
	private int _expectedIndex;

	[Token(Token = "0x40013C8")]
	[FieldOffset(Offset = "0x28")]
	private int _messageTotal;

	[Token(Token = "0x40013C9")]
	[FieldOffset(Offset = "0x30")]
	private long _receivedBytes;

	[Token(Token = "0x40013CA")]
	[FieldOffset(Offset = "0x38")]
	private bool _active;

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x586C470", Offset = "0x586B470", VA = "0x586C470")]
	public OrderedTransferReceiver(long maxTransferBytes = 2147483648L)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$.ctor): 6 lines keep C-only constructs
		SortedDictionary<int, byte[][]> __this_00;
		long iVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_01;
		String paramName;
		MethodInfo lastManagedFrame;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(SortedDictionary<int, byte[][]>));
		__this_00 = new SortedDictionary<int, object>();
		this._pending = __this_00;
		base();
		if (maxTransferBytes - 1U >> 0x1f != 0) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
			__this_01 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
			paramName = il2cpp_codegen_get_runtime_metadata(&"maxTransferBytes");
			__this_01 = new ArgumentOutOfRangeException(paramName);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_OrderedTransferReceiver_ctor);
			throw (object)__this_01;
		}
		this._maxTransferBytes = maxTransferBytes;
		iVar1 = Math.Min(0x7fffffff, (ulong)((int)((maxTransferBytes & 0xffffffffU) / 10000) + 2));
		this._maxTransferMessages = (int32_t)iVar1;
		return;
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x586C040", Offset = "0x586B040", VA = "0x586C040")]
	public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, Func<byte[][], int, int, bool> validator, Action<byte[][], int> processor, Action resetState)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$TryReceive): 4 lines keep C-only constructs
		int piVar1;
		int iVar2;
		SortedDictionary<int, byte[][]> pSVar3;
		long lVar4;
		sbyte cVar5;
		bool bVar6;
		long lVar7;
		int iVar8;
		uint in_register_00000014;
		MethodInfo method_00;
		MethodInfo pMVar9;

		pMVar9 = (MethodInfo)CONCAT44(in_register_00000014, messageIndex);
		if ((((message != null) && (1 < messageTotal)) && (messageIndex < messageTotal)) && ((-1 < messageIndex && (messageTotal <= this._maxTransferMessages)))) {
			if (validator == null) {
				throw new NullReferenceException();
			}
			cVar5 = (*(code)validator.invoke_impl)(validator.method_code,message,messageIndex,messageTotal,validator.method);
			pMVar9 = method_00;
			if (cVar5 != false) {
				if (this._active == false) {
					this._active = true;
					this._messageTotal = messageTotal;
				}
				else if (this._messageTotal != messageTotal) {
					this.Fail(resetState);
					return false;
				}
				this.Drain(processor);
				if (messageIndex < this._expectedIndex) {
					return true;
				}
				pSVar3 = this._pending;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				bVar6 = pSVar3.ContainsKey(messageIndex);
				if (bVar6) {
					return true;
				}
				iVar2 = (int)message.Length;
				iVar8 = 0;
				lVar7 = 0;
				if (0 < iVar2) {
					do {
						if (message[iVar8] == null) {
							throw new NullReferenceException();
						}
						lVar7 = lVar7 + (int)message[iVar8].Length;
						iVar8 = iVar8 + 1;
					} while (iVar2 != iVar8);
				}
				lVar4 = this._receivedBytes;
				pMVar9 = (MethodInfo)(this._maxTransferBytes - lVar4);
				if ((long)pMVar9 < lVar7) {
					this.Fail(resetState);
					return false;
				}
				this._receivedBytes = lVar4 + lVar7;
				if (this._expectedIndex == messageIndex) {
					if (processor == null) {
						throw new NullReferenceException();
					}
					(*(code)processor.invoke_impl)(processor.method_code,message,messageIndex,processor.method);
					piVar1 = &this._expectedIndex;
					*piVar1 = *piVar1 + 1;
					this.Drain(processor);
				}
				else {
					pSVar3 = this._pending;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					processor = (Action<byte[][], int>)(ulong)(uint)messageIndex;
					pSVar3.Add(messageIndex, ref message.obj);
				}
				if (this._expectedIndex == this._messageTotal) {
					this.Reset();
					return true;
				}
				return true;
			}
		}
		this.Fail(resetState);
		return false;
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x586C3A0", Offset = "0x586B3A0", VA = "0x586C3A0")]
	public void Reset()
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$Reset): clean
		SortedDictionary<int, byte[][]> __this_00;

		__this_00 = this._pending;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		this._expectedIndex = 0;
		this._messageTotal = 0;
		this._receivedBytes = 0;
		this._active = false;
		return;
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x586C780", Offset = "0x586B780", VA = "0x586C780")]
	private bool IsValidEnvelope(byte[][] message, int messageIndex, int messageTotal)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$IsValidEnvelope): clean
		bool bVar1;

		if ((message != null) && (1 < messageTotal)) {
			bVar1 = (messageIndex < messageTotal && -1 < messageIndex) && messageTotal <= this._maxTransferMessages;
		}
		return bVar1;
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x586C8A0", Offset = "0x586B8A0", VA = "0x586C8A0")]
	private void Drain(Action<byte[][], int> processor)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$Drain): clean
		bool bVar1;
		int key;
		SortedDictionary<int, byte[][]> pSVar2;
		object local_30;

		local_30 = null;
		pSVar2 = this._pending;
		if (pSVar2 != null) {
			key = this._expectedIndex;
			if (processor == null) {
				bVar1 = pSVar2.TryGetValue(key, ref local_30);
				if (!bVar1) {
					return;
				}
				pSVar2 = this._pending;
				if (pSVar2 != null) {
					pSVar2.Remove(this._expectedIndex);
					throw new NullReferenceException();
				}
			}
			else {
				do {
					bVar1 = pSVar2.TryGetValue(key, ref local_30);
					if (!bVar1) {
						return;
					}
					pSVar2 = this._pending;
					if (pSVar2 == null) break;
					pSVar2.Remove(this._expectedIndex);
					(*(code)processor.invoke_impl)(processor.method_code,local_30,this._expectedIndex,processor.method);
					key = this._expectedIndex + 1;
					this._expectedIndex = key;
					pSVar2 = this._pending;
				} while (pSVar2 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x586CA00", Offset = "0x586BA00", VA = "0x586CA00")]
	private void Process(byte[][] message, int messageIndex, Action<byte[][], int> processor)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$Process): 2 lines keep C-only constructs
		int piVar1;

		if (processor == null) {
			throw new NullReferenceException();
		}
		(*(code)processor.invoke_impl)(processor.method_code,message,messageIndex,processor.method);
		piVar1 = &this._expectedIndex;
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x586C7B0", Offset = "0x586B7B0", VA = "0x586C7B0")]
	private bool Fail(Action resetState)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$Fail): clean
		SortedDictionary<int, byte[][]> __this_00;

		__this_00 = this._pending;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		this._expectedIndex = 0;
		this._messageTotal = 0;
		this._receivedBytes = 0;
		this._active = false;
		if (resetState != null) {
			(*(code)resetState.invoke_impl)(resetState.method_code,resetState.method);
		}
		return false;
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x586C9B0", Offset = "0x586B9B0", VA = "0x586C9B0")]
	private static long GetMessageBytes(byte[][] message)
	{
		// Lifted from source/cpp/Map/OrderedTransferReceiver.c (Map.OrderedTransferReceiver$$GetMessageBytes): clean
		int iVar1;
		long lVar2;
		int iVar3;

		if (message == null) {
	label_0596c9ec: ;
			throw new NullReferenceException();
		}
		iVar1 = (int)message.Length;
		iVar3 = 0;
		lVar2 = 0;
		if (0 < iVar1) {
			do {
				if (message[iVar3] == null) goto label_0596c9ec;
				lVar2 = lVar2 + (int)message[iVar3].Length;
				iVar3 = iVar3 + 1;
			} while (iVar1 != iVar3);
		}
		return lVar2;
	}
}
