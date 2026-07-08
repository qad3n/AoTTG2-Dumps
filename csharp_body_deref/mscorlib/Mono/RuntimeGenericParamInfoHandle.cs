using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000015")]
internal struct RuntimeGenericParamInfoHandle
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.GenericParamInfo* value;

	[Token(Token = "0x17000007")]
	internal Type[] Constraints
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4DE7F30", Offset = "0x4DE7F30", VA = "0x4DE7F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	internal GenericParameterAttributes Attributes
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4DE80F0", Offset = "0x4DE80F0", VA = "0x4DE80F0")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4DE7F10", Offset = "0x4DE7F10", VA = "0x4DE7F10")]
	internal RuntimeGenericParamInfoHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4DE7F40", Offset = "0x4DE7F40", VA = "0x4DE7F40")]
	private Type[] GetConstraints()
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4DE8110", Offset = "0x4DE8110", VA = "0x4DE8110")]
	private int GetConstraintsCount()
	{
		return default(int);
	}
}
