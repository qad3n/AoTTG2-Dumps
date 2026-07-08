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
			[Address(RVA = "0x3AA5630", Offset = "0x3AA5630", VA = "0x3AA5630")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D2")]
			[Address(RVA = "0x3AA5640", Offset = "0x3AA5640", VA = "0x3AA5640")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public int ArrayItemCount
		{
			[Token(Token = "0x60003D3")]
			[Address(RVA = "0x3AA5650", Offset = "0x3AA5650", VA = "0x3AA5650")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60003D4")]
			[Address(RVA = "0x3AA5660", Offset = "0x3AA5660", VA = "0x3AA5660")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public bool IsUniqueArray
		{
			[Token(Token = "0x60003D5")]
			[Address(RVA = "0x3AA5670", Offset = "0x3AA5670", VA = "0x3AA5670")]
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
			[Address(RVA = "0x3AA5680", Offset = "0x3AA5680", VA = "0x3AA5680")]
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
			[Address(RVA = "0x3AA5690", Offset = "0x3AA5690", VA = "0x3AA5690")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D8")]
			[Address(RVA = "0x3AA56A0", Offset = "0x3AA56A0", VA = "0x3AA56A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public IList<JsonSchemaModel> Schemas
		{
			[Token(Token = "0x60003D9")]
			[Address(RVA = "0x3AA56B0", Offset = "0x3AA56B0", VA = "0x3AA56B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009C")]
		public Dictionary<string, bool> RequiredProperties
		{
			[Token(Token = "0x60003DA")]
			[Address(RVA = "0x3AA56C0", Offset = "0x3AA56C0", VA = "0x3AA56C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009D")]
		public JTokenType TokenType
		{
			[Token(Token = "0x60003DB")]
			[Address(RVA = "0x3AA56D0", Offset = "0x3AA56D0", VA = "0x3AA56D0")]
			get
			{
				return default(JTokenType);
			}
		}

		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x3AA1910", Offset = "0x3AA1910", VA = "0x3AA1910")]
		public SchemaScope(JTokenType tokenType, IList<JsonSchemaModel> schemas)
		{
		}

		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x3AA56E0", Offset = "0x3AA56E0", VA = "0x3AA56E0")]
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

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IList<JsonSchemaModel> EmptySchemaList;

	[Token(Token = "0x1700008A")]
	public override object Value
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x3A9D690", Offset = "0x3A9D690", VA = "0x3A9D690", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public override int Depth
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x3A9D6C0", Offset = "0x3A9D6C0", VA = "0x3A9D6C0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008C")]
	public override string Path
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x3A9D6F0", Offset = "0x3A9D6F0", VA = "0x3A9D6F0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x3A9D720", Offset = "0x3A9D720", VA = "0x3A9D720", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x3A9D750", Offset = "0x3A9D750", VA = "0x3A9D750", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x3A9D760", Offset = "0x3A9D760", VA = "0x3A9D760", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x1700008F")]
	public override Type ValueType
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x3A9D790", Offset = "0x3A9D790", VA = "0x3A9D790", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	private IList<JsonSchemaModel> CurrentSchemas
	{
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x3A9D8E0", Offset = "0x3A9D8E0", VA = "0x3A9D8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	private IList<JsonSchemaModel> CurrentMemberSchemas
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x3A9D900", Offset = "0x3A9D900", VA = "0x3A9D900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public JsonSchema Schema
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x3A9F3C0", Offset = "0x3A9F3C0", VA = "0x3A9F3C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x3A9F3D0", Offset = "0x3A9F3D0", VA = "0x3A9F3D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public JsonReader Reader
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x3A9F470", Offset = "0x3A9F470", VA = "0x3A9F470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x3AA5430", Offset = "0x3AA5430", VA = "0x3AA5430", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000095")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x3AA54F0", Offset = "0x3AA54F0", VA = "0x3AA54F0", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x3A9D550", Offset = "0x3A9D550", VA = "0x3A9D550")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x3A9D5F0", Offset = "0x3A9D5F0", VA = "0x3A9D5F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x3A9D7C0", Offset = "0x3A9D7C0", VA = "0x3A9D7C0")]
	private void Push(SchemaScope scope)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x3A9D830", Offset = "0x3A9D830", VA = "0x3A9D830")]
	private SchemaScope Pop()
	{
		return null;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x3A9EEA0", Offset = "0x3A9EEA0", VA = "0x3A9EEA0")]
	private void RaiseError(string message, JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3A9F280", Offset = "0x3A9F280", VA = "0x3A9F280")]
	private void OnValidationEvent(JsonSchemaException exception)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x3A9F310", Offset = "0x3A9F310", VA = "0x3A9F310")]
	public JsonValidatingReader(JsonReader reader)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3A9F480", Offset = "0x3A9F480", VA = "0x3A9F480", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x3A9F4B0", Offset = "0x3A9F4B0", VA = "0x3A9F4B0")]
	private void ValidateNotDisallowed(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3A9F5E0", Offset = "0x3A9F5E0", VA = "0x3A9F5E0")]
	private JsonSchemaType? GetCurrentNodeSchemaType()
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3A9F740", Offset = "0x3A9F740", VA = "0x3A9F740", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x3AA16A0", Offset = "0x3AA16A0", VA = "0x3AA16A0", Slot = "24")]
	public override byte[] ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x3AA16E0", Offset = "0x3AA16E0", VA = "0x3AA16E0", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3AA1740", Offset = "0x3AA1740", VA = "0x3AA1740", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x3AA1790", Offset = "0x3AA1790", VA = "0x3AA1790", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3AA17D0", Offset = "0x3AA17D0", VA = "0x3AA17D0", Slot = "23")]
	public override string ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3AA1810", Offset = "0x3AA1810", VA = "0x3AA1810", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x3AA1850", Offset = "0x3AA1850", VA = "0x3AA1850", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x3AA18B0", Offset = "0x3AA18B0", VA = "0x3AA18B0", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x3A9F780", Offset = "0x3A9F780", VA = "0x3A9F780")]
	private void ValidateCurrentToken()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x3AA2260", Offset = "0x3AA2260", VA = "0x3AA2260")]
	private void WriteToken(IList<JsonSchemaModel> schemas)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x3AA4670", Offset = "0x3AA4670", VA = "0x3AA4670")]
	private void ValidateEndObject(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x3AA4A20", Offset = "0x3AA4A20", VA = "0x3AA4A20")]
	private void ValidateEndArray(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x3AA4630", Offset = "0x3AA4630", VA = "0x3AA4630")]
	private void ValidateNull(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3AA45F0", Offset = "0x3AA45F0", VA = "0x3AA45F0")]
	private void ValidateBoolean(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x3AA4010", Offset = "0x3AA4010", VA = "0x3AA4010")]
	private void ValidateString(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x3AA32D0", Offset = "0x3AA32D0", VA = "0x3AA32D0")]
	private void ValidateInteger(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x3AA1D20", Offset = "0x3AA1D20", VA = "0x3AA1D20")]
	private void ProcessValue()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x3AA3A10", Offset = "0x3AA3A10", VA = "0x3AA3A10")]
	private void ValidateFloat(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x3AA4E00", Offset = "0x3AA4E00", VA = "0x3AA4E00")]
	private static double FloatingPointRemainder(double dividend, double divisor)
	{
		return default(double);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x3AA4D90", Offset = "0x3AA4D90", VA = "0x3AA4D90")]
	private static bool IsZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x3AA3110", Offset = "0x3AA3110", VA = "0x3AA3110")]
	private void ValidatePropertyName(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x3AA4E70", Offset = "0x3AA4E70", VA = "0x3AA4E70")]
	private bool IsPropertyDefinied(JsonSchemaModel schema, string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x3AA5340", Offset = "0x3AA5340", VA = "0x3AA5340")]
	private bool ValidateArray(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x3AA5360", Offset = "0x3AA5360", VA = "0x3AA5360")]
	private bool ValidateObject(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x3AA4C60", Offset = "0x3AA4C60", VA = "0x3AA4C60")]
	private bool TestType(JsonSchemaModel currentSchema, JsonSchemaType currentType)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x3AA5380", Offset = "0x3AA5380", VA = "0x3AA5380", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
