// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextAsset
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001B7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/TextAsset.h")]
public class TextAsset : Object
{
	[Token(Token = "0x20001B8")]
	internal enum CreateOptions
	{
		[Token(Token = "0x4000635")]
		None,
		[Token(Token = "0x4000636")]
		CreateNativeObject
	}

	[Token(Token = "0x20001B9")]
	private static class EncodingUtility
	{
		[Token(Token = "0x4000637")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly KeyValuePair<byte[], Encoding>[] encodingLookup;

		[Token(Token = "0x4000638")]
		[FieldOffset(Offset = "0x8")]
		internal static readonly Encoding targetEncoding;

		[Token(Token = "0x6000E4A")]
		[Address(RVA = "0x2F16EE0", Offset = "0x2F154E0", VA = "0x182F16EE0")]
		static EncodingUtility()
		{
		}
	}

	[Token(Token = "0x17000247")]
	public byte[] bytes
	{
		[Token(Token = "0x6000E3C")]
		[Address(RVA = "0x2F29550", Offset = "0x2F27B50", VA = "0x182F29550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public string text
	{
		[Token(Token = "0x6000E40")]
		[Address(RVA = "0x2F29380", Offset = "0x2F27980", VA = "0x182F29380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x2F291F0", Offset = "0x2F277F0", VA = "0x182F291F0")]
	private static void Internal_CreateInstance([UnityEngine.Writable] TextAsset self, string text)
	{
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x2F29060", Offset = "0x2F27660", VA = "0x182F29060")]
	private IntPtr GetDataPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x2F29120", Offset = "0x2F27720", VA = "0x182F29120")]
	private long GetDataSize()
	{
		return default(long);
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x2F29380", Offset = "0x2F27980", VA = "0x182F29380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x2F29430", Offset = "0x2F27A30", VA = "0x182F29430")]
	public TextAsset()
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x2F29490", Offset = "0x2F27A90", VA = "0x182F29490")]
	internal TextAsset(CreateOptions options, string text)
	{
	}

	[Token(Token = "0x6000E44")]
	public NativeArray<T> GetData<T>() where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x2F28DA0", Offset = "0x2F273A0", VA = "0x182F28DA0")]
	internal static string DecodeString(byte[] bytes)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x2F29510", Offset = "0x2F27B10", VA = "0x182F29510")]
	private static extern byte[] get_bytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x2F291A0", Offset = "0x2F277A0", VA = "0x182F291A0")]
	private static extern void Internal_CreateInstance_Injected([UnityEngine.Writable] TextAsset self, ref ManagedSpanWrapper text);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x2F29020", Offset = "0x2F27620", VA = "0x182F29020")]
	private static extern IntPtr GetDataPtr_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x2F290E0", Offset = "0x2F276E0", VA = "0x182F290E0")]
	private static extern long GetDataSize_Injected(IntPtr _unity_self);
}
