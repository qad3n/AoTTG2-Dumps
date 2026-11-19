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

[Token(Token = "0x2000015")]
internal struct RuntimeGenericParamInfoHandle
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.GenericParamInfo* value;

	[Token(Token = "0x17000007")]
	internal Type[] Constraints
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x52D90C0", Offset = "0x52D80C0", VA = "0x52D90C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	internal GenericParameterAttributes Attributes
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x52D9280", Offset = "0x52D8280", VA = "0x52D9280")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x52D90A0", Offset = "0x52D80A0", VA = "0x52D90A0")]
	internal RuntimeGenericParamInfoHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x52D90D0", Offset = "0x52D80D0", VA = "0x52D90D0")]
	private Type[] GetConstraints()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x52D92A0", Offset = "0x52D82A0", VA = "0x52D92A0")]
	private int GetConstraintsCount()
	{
		return default(int);
	}
}
