// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ResourceRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000167")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ResourceRequest : AsyncOperation
{
	[Token(Token = "0x2000168")]
	internal new static class BindingsMarshaller
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x690E9A0", Offset = "0x690D9A0", VA = "0x690E9A0")]
		public static ResourceRequest ConvertToManaged(IntPtr ptr)
		{
			return null;
		}
	}

	[Token(Token = "0x40005B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string m_Path;

	[Token(Token = "0x40005BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal Type m_Type;

	[Token(Token = "0x17000219")]
	public Object asset
	{
		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x690E8E0", Offset = "0x690D8E0", VA = "0x690E8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x690E7C0", Offset = "0x690D7C0", VA = "0x690E7C0", Slot = "4")]
	protected virtual Object GetResult()
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x690E900", Offset = "0x690D900", VA = "0x690E900")]
	protected ResourceRequest(IntPtr ptr)
	{
	}
}
