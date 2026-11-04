// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeGenericParamInfoHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000033")]
internal struct RuntimeGenericParamInfoHandle
{
	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.GenericParamInfo* value;

	[Token(Token = "0x17000007")]
	internal Type[] Constraints
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x194C890", Offset = "0x194AE90", VA = "0x18194C890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	internal GenericParameterAttributes Attributes
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x194C870", Offset = "0x194AE70", VA = "0x18194C870")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x194C500", Offset = "0x194AB00", VA = "0x18194C500")]
	internal RuntimeGenericParamInfoHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x194C730", Offset = "0x194AD30", VA = "0x18194C730")]
	private Type[] GetConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x194C700", Offset = "0x194AD00", VA = "0x18194C700")]
	private int GetConstraintsCount()
	{
		return default(int);
	}
}
