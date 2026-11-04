// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonValidatingReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Schema;

namespace Newtonsoft.Json;

[Token(Token = "0x2000073")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public class JsonValidatingReader : JsonReader, IJsonLineInfo
{
	[Token(Token = "0x2000074")]
	private class SchemaScope
	{
		[Token(Token = "0x40002B8")]
		[FieldOffset(Offset = "0x10")]
		private readonly JTokenType _tokenType;

		[Token(Token = "0x40002B9")]
		[FieldOffset(Offset = "0x18")]
		private readonly IList<JsonSchemaModel> _schemas;

		[Token(Token = "0x40002BA")]
		[FieldOffset(Offset = "0x20")]
		private readonly Dictionary<string, bool> _requiredProperties;

		[Token(Token = "0x17000096")]
		public string CurrentPropertyName
		{
			[Token(Token = "0x60003D1")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D2")]
			[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public int ArrayItemCount
		{
			[Token(Token = "0x60003D3")]
			[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60003D4")]
			[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public bool IsUniqueArray
		{
			[Token(Token = "0x60003D5")]
			[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000099")]
		public IList<JToken> UniqueArrayItems
		{
			[Token(Token = "0x60003D6")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009A")]
		public JTokenWriter CurrentItemWriter
		{
			[Token(Token = "0x60003D7")]
			[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D8")]
			[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public IList<JsonSchemaModel> Schemas
		{
			[Token(Token = "0x60003D9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009C")]
		public Dictionary<string, bool> RequiredProperties
		{
			[Token(Token = "0x60003DA")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009D")]
		public JTokenType TokenType
		{
			[Token(Token = "0x60003DB")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			get
			{
				return default(JTokenType);
			}
		}

		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x1C10470", Offset = "0x1C0EA70", VA = "0x181C10470")]
		public SchemaScope(JTokenType tokenType, IList<JsonSchemaModel> schemas)
		{
		}

		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x1C101F0", Offset = "0x1C0E7F0", VA = "0x181C101F0")]
		private IEnumerable<string> GetRequiredProperties(JsonSchemaModel schema)
		{
			return null;
		}
	}

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x78")]
	private readonly JsonReader _reader;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x80")]
	private readonly Stack<SchemaScope> _stack;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x88")]
	private JsonSchema _schema;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x90")]
	private JsonSchemaModel _model;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x98")]
	private SchemaScope _currentScope;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0xA0")]
	[CompilerGenerated]
	private ValidationEventHandler m_ValidationEventHandler;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IList<JsonSchemaModel> EmptySchemaList;

	[Token(Token = "0x1700008A")]
	public override object Value
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x1C04D40", Offset = "0x1C03340", VA = "0x181C04D40", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public override int Depth
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x1C04C50", Offset = "0x1C03250", VA = "0x181C04C50", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008C")]
	public override string Path
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x1C04C80", Offset = "0x1C03280", VA = "0x181C04C80", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x1C04CB0", Offset = "0x1C032B0", VA = "0x181C04CB0", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x1C04CE0", Offset = "0x1C032E0", VA = "0x181C04CE0", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x1700008F")]
	public override Type ValueType
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x1C04D10", Offset = "0x1C03310", VA = "0x181C04D10", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	private IList<JsonSchemaModel> CurrentSchemas
	{
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x1C04C30", Offset = "0x1C03230", VA = "0x181C04C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	private IList<JsonSchemaModel> CurrentMemberSchemas
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x1C04260", Offset = "0x1C02860", VA = "0x181C04260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public JsonSchema Schema
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x1C04E10", Offset = "0x1C03410", VA = "0x181C04E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public JsonReader Reader
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x1C001D0", Offset = "0x1BFE7D0", VA = "0x181C001D0", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000095")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x1C00230", Offset = "0x1BFE830", VA = "0x181C00230", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x1C041C0", Offset = "0x1C027C0", VA = "0x181C041C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x1C04D70", Offset = "0x1C03370", VA = "0x181C04D70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x1C006B0", Offset = "0x1BFECB0", VA = "0x181C006B0")]
	private void Push(SchemaScope scope)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x1C00330", Offset = "0x1BFE930", VA = "0x181C00330")]
	private SchemaScope Pop()
	{
		return null;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x1C00720", Offset = "0x1BFED20", VA = "0x181C00720")]
	private void RaiseError(string message, JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x1C00290", Offset = "0x1BFE890", VA = "0x181C00290")]
	private void OnValidationEvent(JsonSchemaException exception)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x1C04110", Offset = "0x1C02710", VA = "0x181C04110")]
	public JsonValidatingReader(JsonReader reader)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x1BFFC20", Offset = "0x1BFE220", VA = "0x181BFFC20", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x1C02ED0", Offset = "0x1C014D0", VA = "0x181C02ED0")]
	private void ValidateNotDisallowed(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x1BFFCD0", Offset = "0x1BFE2D0", VA = "0x181BFFCD0")]
	private JsonSchemaType? GetCurrentNodeSchemaType()
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x1C00B80", Offset = "0x1BFF180", VA = "0x181C00B80", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x1C009B0", Offset = "0x1BFEFB0", VA = "0x181C009B0", Slot = "24")]
	public override byte[] ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x1C00AC0", Offset = "0x1BFF0C0", VA = "0x181C00AC0", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x1C00B20", Offset = "0x1BFF120", VA = "0x181C00B20", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x1C00960", Offset = "0x1BFEF60", VA = "0x181C00960", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x1C00BD0", Offset = "0x1BFF1D0", VA = "0x181C00BD0", Slot = "23")]
	public override string ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x1C00A60", Offset = "0x1BFF060", VA = "0x181C00A60", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x1C00A00", Offset = "0x1BFF000", VA = "0x181C00A00", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x1C00C20", Offset = "0x1BFF220", VA = "0x181C00C20", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x1C00E30", Offset = "0x1BFF430", VA = "0x181C00E30")]
	private void ValidateCurrentToken()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x1C037A0", Offset = "0x1C01DA0", VA = "0x181C037A0")]
	private void WriteToken(IList<JsonSchemaModel> schemas)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x1C01EF0", Offset = "0x1C004F0", VA = "0x181C01EF0")]
	private void ValidateEndObject(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x1C01CF0", Offset = "0x1C002F0", VA = "0x181C01CF0")]
	private void ValidateEndArray(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x1C031B0", Offset = "0x1C017B0", VA = "0x181C031B0")]
	private void ValidateNull(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x1C00DF0", Offset = "0x1BFF3F0", VA = "0x181C00DF0")]
	private void ValidateBoolean(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x1C033E0", Offset = "0x1C019E0", VA = "0x181C033E0")]
	private void ValidateString(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x1C027F0", Offset = "0x1C00DF0", VA = "0x181C027F0")]
	private void ValidateInteger(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x1C003E0", Offset = "0x1BFE9E0", VA = "0x181C003E0")]
	private void ProcessValue()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x1C022A0", Offset = "0x1C008A0", VA = "0x181C022A0")]
	private void ValidateFloat(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x1BFFC60", Offset = "0x1BFE260", VA = "0x181BFFC60")]
	private static double FloatingPointRemainder(double dividend, double divisor)
	{
		return default(double);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x1C00110", Offset = "0x1BFE710", VA = "0x181C00110")]
	private static bool IsZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x1C03210", Offset = "0x1C01810", VA = "0x181C03210")]
	private void ValidatePropertyName(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x1BFFEA0", Offset = "0x1BFE4A0", VA = "0x181BFFEA0")]
	private bool IsPropertyDefinied(JsonSchemaModel schema, string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x1C00DD0", Offset = "0x1BFF3D0", VA = "0x181C00DD0")]
	private bool ValidateArray(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x1C031F0", Offset = "0x1C017F0", VA = "0x181C031F0")]
	private bool ValidateObject(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x1C00C90", Offset = "0x1BFF290", VA = "0x181C00C90")]
	private bool TestType(JsonSchemaModel currentSchema, JsonSchemaType currentType)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x1C00170", Offset = "0x1BFE770", VA = "0x181C00170", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
