using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000199")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal class SystemClock
{
	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTime s_Epoch;

	[Token(Token = "0x170001FA")]
	public static DateTime now
	{
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x4ADE0C0", Offset = "0x4ADE0C0", VA = "0x4ADE0C0")]
		get
		{
			return default(DateTime);
		}
	}
}
