// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HelpURLAttribute
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200017A")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
[UnityEngine.Scripting.UsedByNativeCode]
public class HelpURLAttribute : Attribute
{
	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x10")]
	internal readonly string m_Url;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x18")]
	internal readonly bool m_Dispatcher;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string m_DispatchingFieldName;

	[Token(Token = "0x1700021E")]
	public virtual string URL
	{
		[Token(Token = "0x6000CC3")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x2F1B790", Offset = "0x2F19D90", VA = "0x182F1B790")]
	public HelpURLAttribute(string url)
	{
	}
}
