using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000122")]
public class JsonPrimitiveContract : JsonContract
{
	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, ReadType> ReadTypeMap;

	[Token(Token = "0x1700012D")]
	internal PrimitiveTypeCode TypeCode
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x3AE4CE0", Offset = "0x3AE4CE0", VA = "0x3AE4CE0")]
		[CompilerGenerated]
		get
		{
			return default(PrimitiveTypeCode);
		}
		[Token(Token = "0x600085F")]
		[Address(RVA = "0x3AE4CF0", Offset = "0x3AE4CF0", VA = "0x3AE4CF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x3ADCAB0", Offset = "0x3ADCAB0", VA = "0x3ADCAB0")]
	public JsonPrimitiveContract(Type underlyingType)
	{
	}
}
