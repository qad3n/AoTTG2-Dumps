using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200017D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/TextAsset.h")]
public class TextAsset : Object
{
	[Token(Token = "0x200017E")]
	private static class EncodingUtility
	{
		[Token(Token = "0x40005A0")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly KeyValuePair<byte[], Encoding>[] encodingLookup;

		[Token(Token = "0x40005A1")]
		[FieldOffset(Offset = "0x8")]
		internal static readonly Encoding targetEncoding;

		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x4AD8420", Offset = "0x4AD8420", VA = "0x4AD8420")]
		static EncodingUtility()
		{
		}
	}

	[Token(Token = "0x170001D8")]
	public byte[] bytes
	{
		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x4AD7DF0", Offset = "0x4AD7DF0", VA = "0x4AD7DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public string text
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x4AD8030", Offset = "0x4AD8030", VA = "0x4AD8030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x4AD7EB0", Offset = "0x4AD7EB0", VA = "0x4AD7EB0")]
	private IntPtr GetDataPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x4AD7F70", Offset = "0x4AD7F70", VA = "0x4AD7F70")]
	private long GetDataSize()
	{
		return default(long);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x4AD8410", Offset = "0x4AD8410", VA = "0x4AD8410", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	public NativeArray<T> GetData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x4AD80F0", Offset = "0x4AD80F0", VA = "0x4AD80F0")]
	internal static string DecodeString(byte[] bytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x4AD7E80", Offset = "0x4AD7E80", VA = "0x4AD7E80")]
	private static extern byte[] get_bytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x4AD7F40", Offset = "0x4AD7F40", VA = "0x4AD7F40")]
	private static extern IntPtr GetDataPtr_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x4AD8000", Offset = "0x4AD8000", VA = "0x4AD8000")]
	private static extern long GetDataSize_Injected(IntPtr _unity_self);
}
