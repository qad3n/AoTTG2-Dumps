// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.ValidationEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public string Path
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x1C702F0", Offset = "0x1C6E8F0", VA = "0x181C702F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	public string Message
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x1C702C0", Offset = "0x1C6E8C0", VA = "0x181C702C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x1C70230", Offset = "0x1C6E830", VA = "0x181C70230")]
	internal ValidationEventArgs(JsonSchemaException ex)
	{
	}
}
