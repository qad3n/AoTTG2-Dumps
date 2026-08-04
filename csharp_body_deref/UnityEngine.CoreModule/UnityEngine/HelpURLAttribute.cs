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

[Token(Token = "0x2000148")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class HelpURLAttribute : Attribute
{
	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x10")]
	internal readonly string m_Url;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x18")]
	internal readonly bool m_Dispatcher;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string m_DispatchingFieldName;

	[Token(Token = "0x170001B5")]
	public string URL
	{
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x4DF3EA0", Offset = "0x4DF3EA0", VA = "0x4DF3EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x4DF3E30", Offset = "0x4DF3E30", VA = "0x4DF3E30")]
	public HelpURLAttribute(string url)
	{
	}
}
