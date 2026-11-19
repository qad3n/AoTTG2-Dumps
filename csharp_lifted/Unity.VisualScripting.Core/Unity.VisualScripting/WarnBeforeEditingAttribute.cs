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
		[Address(RVA = "0x6793520", Offset = "0x6792520", VA = "0x6793520")]
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
		[Address(RVA = "0x6793530", Offset = "0x6792530", VA = "0x6793530")]
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
		[Address(RVA = "0x6793540", Offset = "0x6792540", VA = "0x6793540")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x6793480", Offset = "0x6792480", VA = "0x6793480")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x67934C0", Offset = "0x67924C0", VA = "0x67934C0")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage, params object[] emptyValues)
	{
	}
}
