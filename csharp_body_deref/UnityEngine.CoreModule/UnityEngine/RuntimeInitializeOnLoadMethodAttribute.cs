using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000175")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
public class RuntimeInitializeOnLoadMethodAttribute : PreserveAttribute
{
	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x10")]
	private RuntimeInitializeLoadType m_LoadType;

	[Token(Token = "0x170001D7")]
	private RuntimeInitializeLoadType loadType
	{
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x4AD6D50", Offset = "0x4AD6D50", VA = "0x4AD6D50")]
		set
		{
		}
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x4AD6D30", Offset = "0x4AD6D30", VA = "0x4AD6D30")]
	public RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeLoadType loadType)
	{
	}
}
