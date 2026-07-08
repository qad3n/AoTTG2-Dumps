using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200014D")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public class JsonSchemaResolver
{
	[Token(Token = "0x170001C7")]
	public IList<JsonSchema> LoadedSchemas
	{
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x3B0F1A0", Offset = "0x3B0F1A0", VA = "0x3B0F1A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x3B0F1B0", Offset = "0x3B0F1B0", VA = "0x3B0F1B0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x3B02F10", Offset = "0x3B02F10", VA = "0x3B02F10")]
	public JsonSchemaResolver()
	{
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x3B0F1C0", Offset = "0x3B0F1C0", VA = "0x3B0F1C0", Slot = "4")]
	public virtual JsonSchema GetSchema(string reference)
	{
		return null;
	}
}
