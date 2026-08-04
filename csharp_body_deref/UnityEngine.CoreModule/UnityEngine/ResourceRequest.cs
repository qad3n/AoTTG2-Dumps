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
[Token(Token = "0x200013A")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ResourceRequest : AsyncOperation
{
	[Token(Token = "0x4000530")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string m_Path;

	[Token(Token = "0x4000531")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal Type m_Type;

	[Token(Token = "0x170001AD")]
	public Object asset
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x4DF26E0", Offset = "0x4DF26E0", VA = "0x4DF26E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x4DF25C0", Offset = "0x4DF25C0", VA = "0x4DF25C0", Slot = "4")]
	protected virtual Object GetResult()
	{
		return null;
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x4DF2700", Offset = "0x4DF2700", VA = "0x4DF2700")]
	public ResourceRequest()
	{
	}
}
