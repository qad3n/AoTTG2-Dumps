using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000137")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ResourceRequest : AsyncOperation
{
	[Token(Token = "0x4000530")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string m_Path;

	[Token(Token = "0x4000531")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal Type m_Type;

	[Token(Token = "0x170001AC")]
	public Object asset
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x4ACADB0", Offset = "0x4ACADB0", VA = "0x4ACADB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x4ACAC90", Offset = "0x4ACAC90", VA = "0x4ACAC90", Slot = "4")]
	protected virtual Object GetResult()
	{
		return null;
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x4ACADD0", Offset = "0x4ACADD0", VA = "0x4ACADD0")]
	public ResourceRequest()
	{
	}
}
