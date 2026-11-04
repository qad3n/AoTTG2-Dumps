// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ResourceRequest
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000166")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ResourceRequest : AsyncOperation
{
	[Token(Token = "0x2000167")]
	internal new static class BindingsMarshaller
	{
		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x2F12C90", Offset = "0x2F11290", VA = "0x182F12C90")]
		public static ResourceRequest ConvertToManaged(IntPtr ptr)
		{
			return null;
		}
	}

	[Token(Token = "0x40005B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string m_Path;

	[Token(Token = "0x40005B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal Type m_Type;

	[Token(Token = "0x17000214")]
	public Object asset
	{
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x1B47C10", Offset = "0x1B46210", VA = "0x181B47C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x2F25300", Offset = "0x2F23900", VA = "0x182F25300", Slot = "4")]
	protected virtual Object GetResult()
	{
		return null;
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x2F0EFE0", Offset = "0x2F0D5E0", VA = "0x182F0EFE0")]
	protected ResourceRequest(IntPtr ptr)
	{
	}
}
