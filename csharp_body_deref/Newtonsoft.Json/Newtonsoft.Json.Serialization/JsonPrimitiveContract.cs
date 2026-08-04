// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonPrimitiveContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3DDA630", Offset = "0x3DDA630", VA = "0x3DDA630")]
		[CompilerGenerated]
		get
		{
			return default(PrimitiveTypeCode);
		}
		[Token(Token = "0x600085F")]
		[Address(RVA = "0x3DDA640", Offset = "0x3DDA640", VA = "0x3DDA640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x3DD2400", Offset = "0x3DD2400", VA = "0x3DD2400")]
	public JsonPrimitiveContract(Type underlyingType)
	{
	}
}
