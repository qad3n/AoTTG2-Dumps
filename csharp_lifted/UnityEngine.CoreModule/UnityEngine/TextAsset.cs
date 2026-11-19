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

[Token(Token = "0x20001B8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/TextAsset.h")]
public class TextAsset : Object
{
	[Token(Token = "0x20001B9")]
	internal enum CreateOptions
	{
		[Token(Token = "0x400063A")]
		None,
		[Token(Token = "0x400063B")]
		CreateNativeObject
	}

	[Token(Token = "0x20001BA")]
	private static class EncodingUtility
	{
		[Token(Token = "0x400063C")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly KeyValuePair<byte[], Encoding>[] encodingLookup;

		[Token(Token = "0x400063D")]
		[FieldOffset(Offset = "0x8")]
		internal static readonly Encoding targetEncoding;

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x691F190", Offset = "0x691E190", VA = "0x691F190")]
		static EncodingUtility()
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public byte[] bytes
	{
		[Token(Token = "0x6000E4E")]
		[Address(RVA = "0x691E940", Offset = "0x691D940", VA = "0x691E940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	public string text
	{
		[Token(Token = "0x6000E52")]
		[Address(RVA = "0x691ED00", Offset = "0x691DD00", VA = "0x691ED00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x691E9F0", Offset = "0x691D9F0", VA = "0x691E9F0")]
	private static void Internal_CreateInstance([UnityEngine.Writable] TextAsset self, string text)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x691EBA0", Offset = "0x691DBA0", VA = "0x691EBA0")]
	private IntPtr GetDataPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x691EC50", Offset = "0x691DC50", VA = "0x691EC50")]
	private long GetDataSize()
	{
		return default(long);
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x691F0C0", Offset = "0x691E0C0", VA = "0x691F0C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x691F0D0", Offset = "0x691E0D0", VA = "0x691F0D0")]
	public TextAsset()
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x691F120", Offset = "0x691E120", VA = "0x691F120")]
	internal TextAsset(CreateOptions options, string text)
	{
	}

	[Token(Token = "0x6000E56")]
	public NativeArray<T> GetData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x691EDC0", Offset = "0x691DDC0", VA = "0x691EDC0")]
	internal static string DecodeString(byte[] bytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x691E9C0", Offset = "0x691D9C0", VA = "0x691E9C0")]
	private static extern byte[] get_bytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x691EB60", Offset = "0x691DB60", VA = "0x691EB60")]
	private static extern void Internal_CreateInstance_Injected([UnityEngine.Writable] TextAsset self, ref ManagedSpanWrapper text);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x691EC20", Offset = "0x691DC20", VA = "0x691EC20")]
	private static extern IntPtr GetDataPtr_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x691ECD0", Offset = "0x691DCD0", VA = "0x691ECD0")]
	private static extern long GetDataSize_Injected(IntPtr _unity_self);
}
