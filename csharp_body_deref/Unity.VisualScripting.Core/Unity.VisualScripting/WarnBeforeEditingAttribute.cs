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
	[Token(Token = "0x17000073")]
	public string warningTitle
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x4CA4100", Offset = "0x4CA4100", VA = "0x4CA4100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public string warningMessage
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x4CA4110", Offset = "0x4CA4110", VA = "0x4CA4110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public object[] emptyValues
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x4CA4120", Offset = "0x4CA4120", VA = "0x4CA4120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4CA4060", Offset = "0x4CA4060", VA = "0x4CA4060")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4CA40A0", Offset = "0x4CA40A0", VA = "0x4CA40A0")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage, params object[] emptyValues)
	{
	}
}
