// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HelpURLAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200017B")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class HelpURLAttribute : Attribute
{
	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x10")]
	internal readonly string m_Url;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x18")]
	internal readonly bool m_Dispatcher;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string m_DispatchingFieldName;

	[Token(Token = "0x17000223")]
	public virtual string URL
	{
		[Token(Token = "0x6000CD5")]
		[Address(RVA = "0x6911490", Offset = "0x6910490", VA = "0x6911490", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x6911420", Offset = "0x6910420", VA = "0x6911420")]
	public HelpURLAttribute(string url)
	{
	}
}
