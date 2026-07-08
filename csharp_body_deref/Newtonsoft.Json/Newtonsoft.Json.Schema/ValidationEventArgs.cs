using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x2000153")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public class ValidationEventArgs : EventArgs
{
	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x10")]
	private readonly JsonSchemaException _ex;

	[Token(Token = "0x170001C8")]
	public JsonSchemaException Exception
	{
		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x3B104B0", Offset = "0x3B104B0", VA = "0x3B104B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public string Path
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x3B104C0", Offset = "0x3B104C0", VA = "0x3B104C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	public string Message
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x3B02860", Offset = "0x3B02860", VA = "0x3B02860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x3B10420", Offset = "0x3B10420", VA = "0x3B10420")]
	internal ValidationEventArgs(JsonSchemaException ex)
	{
	}
}
