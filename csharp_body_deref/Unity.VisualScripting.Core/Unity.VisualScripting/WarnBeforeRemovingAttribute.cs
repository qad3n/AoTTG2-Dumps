// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.WarnBeforeRemovingAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000052")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class WarnBeforeRemovingAttribute : Attribute
{
	[Token(Token = "0x17000077")]
	public string warningTitle
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public string warningMessage
	{
		[Token(Token = "0x600021B")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public WarnBeforeRemovingAttribute(string warningTitle, string warningMessage)
	{
	}
}
