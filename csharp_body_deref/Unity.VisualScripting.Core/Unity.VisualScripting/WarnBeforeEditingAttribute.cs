// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.WarnBeforeEditingAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000051")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class WarnBeforeEditingAttribute : Attribute
{
	[Token(Token = "0x17000074")]
	public string warningTitle
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public string warningMessage
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public object[] emptyValues
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x2DBF5E0", Offset = "0x2DBDBE0", VA = "0x182DBF5E0")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage, params object[] emptyValues)
	{
	}
}
