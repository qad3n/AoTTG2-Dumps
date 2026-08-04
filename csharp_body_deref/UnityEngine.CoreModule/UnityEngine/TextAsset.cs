// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000180")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/TextAsset.h")]
public class TextAsset : Object
{
	[Token(Token = "0x2000181")]
	private static class EncodingUtility
	{
		[Token(Token = "0x40005A0")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly KeyValuePair<byte[], Encoding>[] encodingLookup;

		[Token(Token = "0x40005A1")]
		[FieldOffset(Offset = "0x8")]
		internal static readonly Encoding targetEncoding;

		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x4DFFD50", Offset = "0x4DFFD50", VA = "0x4DFFD50")]
		static EncodingUtility()
		{
		}
	}

	[Token(Token = "0x170001D9")]
	public byte[] bytes
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x4DFF720", Offset = "0x4DFF720", VA = "0x4DFF720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	public string text
	{
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x4DFF960", Offset = "0x4DFF960", VA = "0x4DFF960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x4DFF7E0", Offset = "0x4DFF7E0", VA = "0x4DFF7E0")]
	private IntPtr GetDataPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x4DFF8A0", Offset = "0x4DFF8A0", VA = "0x4DFF8A0")]
	private long GetDataSize()
	{
		return default(long);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x4DFFD40", Offset = "0x4DFFD40", VA = "0x4DFFD40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AE1")]
	public NativeArray<T> GetData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x4DFFA20", Offset = "0x4DFFA20", VA = "0x4DFFA20")]
	internal static string DecodeString(byte[] bytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x4DFF7B0", Offset = "0x4DFF7B0", VA = "0x4DFF7B0")]
	private static extern byte[] get_bytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x4DFF870", Offset = "0x4DFF870", VA = "0x4DFF870")]
	private static extern IntPtr GetDataPtr_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x4DFF930", Offset = "0x4DFF930", VA = "0x4DFF930")]
	private static extern long GetDataSize_Injected(IntPtr _unity_self);
}
