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
			[Address(RVA = "0x55955D0", Offset = "0x55945D0", VA = "0x55955D0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D2")]
			[Address(RVA = "0x55955E0", Offset = "0x55945E0", VA = "0x55955E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public int ArrayItemCount
		{
			[Token(Token = "0x60003D3")]
			[Address(RVA = "0x55955F0", Offset = "0x55945F0", VA = "0x55955F0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60003D4")]
			[Address(RVA = "0x5595600", Offset = "0x5594600", VA = "0x5595600")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public bool IsUniqueArray
		{
			[Token(Token = "0x60003D5")]
			[Address(RVA = "0x5595610", Offset = "0x5594610", VA = "0x5595610")]
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
			[Address(RVA = "0x5595620", Offset = "0x5594620", VA = "0x5595620")]
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
			[Address(RVA = "0x5595630", Offset = "0x5594630", VA = "0x5595630")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D8")]
			[Address(RVA = "0x5595640", Offset = "0x5594640", VA = "0x5595640")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public IList<JsonSchemaModel> Schemas
		{
			[Token(Token = "0x60003D9")]
			[Address(RVA = "0x5595650", Offset = "0x5594650", VA = "0x5595650")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009C")]
		public Dictionary<string, bool> RequiredProperties
		{
			[Token(Token = "0x60003DA")]
			[Address(RVA = "0x5595660", Offset = "0x5594660", VA = "0x5595660")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009D")]
		public JTokenType TokenType
		{
			[Token(Token = "0x60003DB")]
			[Address(RVA = "0x5595670", Offset = "0x5594670", VA = "0x5595670")]
			get
			{
				return default(JTokenType);
			}
		}

		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x5591CA0", Offset = "0x5590CA0", VA = "0x5591CA0")]
		public SchemaScope(JTokenType tokenType, IList<JsonSchemaModel> schemas)
		{
		}

		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x5595680", Offset = "0x5594680", VA = "0x5595680")]
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
		[Address(RVA = "0x558E240", Offset = "0x558D240", VA = "0x558E240", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public override int Depth
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x558E270", Offset = "0x558D270", VA = "0x558E270", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008C")]
	public override string Path
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x558E2A0", Offset = "0x558D2A0", VA = "0x558E2A0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x558E2D0", Offset = "0x558D2D0", VA = "0x558E2D0", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x558E300", Offset = "0x558D300", VA = "0x558E300", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x558E310", Offset = "0x558D310", VA = "0x558E310", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x1700008F")]
	public override Type ValueType
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x558E340", Offset = "0x558D340", VA = "0x558E340", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	private IList<JsonSchemaModel> CurrentSchemas
	{
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x558E490", Offset = "0x558D490", VA = "0x558E490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	private IList<JsonSchemaModel> CurrentMemberSchemas
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x558E4B0", Offset = "0x558D4B0", VA = "0x558E4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public JsonSchema Schema
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x558FD40", Offset = "0x558ED40", VA = "0x558FD40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x558FD50", Offset = "0x558ED50", VA = "0x558FD50")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public JsonReader Reader
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x558FDF0", Offset = "0x558EDF0", VA = "0x558FDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x55953D0", Offset = "0x55943D0", VA = "0x55953D0", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000095")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x5595490", Offset = "0x5594490", VA = "0x5595490", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x558E100", Offset = "0x558D100", VA = "0x558E100")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x558E1A0", Offset = "0x558D1A0", VA = "0x558E1A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x558E370", Offset = "0x558D370", VA = "0x558E370")]
	private void Push(SchemaScope scope)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x558E3E0", Offset = "0x558D3E0", VA = "0x558E3E0")]
	private SchemaScope Pop()
	{
		return null;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x558F820", Offset = "0x558E820", VA = "0x558F820")]
	private void RaiseError(string message, JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x558FC00", Offset = "0x558EC00", VA = "0x558FC00")]
	private void OnValidationEvent(JsonSchemaException exception)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x558FC90", Offset = "0x558EC90", VA = "0x558FC90")]
	public JsonValidatingReader(JsonReader reader)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x558FE00", Offset = "0x558EE00", VA = "0x558FE00", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x558FE30", Offset = "0x558EE30", VA = "0x558FE30")]
	private void ValidateNotDisallowed(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x558FF60", Offset = "0x558EF60", VA = "0x558FF60")]
	private JsonSchemaType? GetCurrentNodeSchemaType()
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x55900C0", Offset = "0x558F0C0", VA = "0x55900C0", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x5591A30", Offset = "0x5590A30", VA = "0x5591A30", Slot = "24")]
	public override byte[] ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x5591A70", Offset = "0x5590A70", VA = "0x5591A70", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x5591AD0", Offset = "0x5590AD0", VA = "0x5591AD0", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x5591B20", Offset = "0x5590B20", VA = "0x5591B20", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x5591B60", Offset = "0x5590B60", VA = "0x5591B60", Slot = "23")]
	public override string ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x5591BA0", Offset = "0x5590BA0", VA = "0x5591BA0", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x5591BE0", Offset = "0x5590BE0", VA = "0x5591BE0", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x5591C40", Offset = "0x5590C40", VA = "0x5591C40", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x5590100", Offset = "0x558F100", VA = "0x5590100")]
	private void ValidateCurrentToken()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x5592520", Offset = "0x5591520", VA = "0x5592520")]
	private void WriteToken(IList<JsonSchemaModel> schemas)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x55946B0", Offset = "0x55936B0", VA = "0x55946B0")]
	private void ValidateEndObject(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x5594A50", Offset = "0x5593A50", VA = "0x5594A50")]
	private void ValidateEndArray(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x5594670", Offset = "0x5593670", VA = "0x5594670")]
	private void ValidateNull(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x5594630", Offset = "0x5593630", VA = "0x5594630")]
	private void ValidateBoolean(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x55940F0", Offset = "0x55930F0", VA = "0x55940F0")]
	private void ValidateString(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x55933A0", Offset = "0x55923A0", VA = "0x55933A0")]
	private void ValidateInteger(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x55920B0", Offset = "0x55910B0", VA = "0x55920B0")]
	private void ProcessValue()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x5593AE0", Offset = "0x5592AE0", VA = "0x5593AE0")]
	private void ValidateFloat(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x5594E30", Offset = "0x5593E30", VA = "0x5594E30")]
	private static double FloatingPointRemainder(double dividend, double divisor)
	{
		return default(double);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x5594DC0", Offset = "0x5593DC0", VA = "0x5594DC0")]
	private static bool IsZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x55931E0", Offset = "0x55921E0", VA = "0x55931E0")]
	private void ValidatePropertyName(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x5594EA0", Offset = "0x5593EA0", VA = "0x5594EA0")]
	private bool IsPropertyDefinied(JsonSchemaModel schema, string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x55952E0", Offset = "0x55942E0", VA = "0x55952E0")]
	private bool ValidateArray(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x5595300", Offset = "0x5594300", VA = "0x5595300")]
	private bool ValidateObject(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x5594C90", Offset = "0x5593C90", VA = "0x5594C90")]
	private bool TestType(JsonSchemaModel currentSchema, JsonSchemaType currentType)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x5595320", Offset = "0x5594320", VA = "0x5595320", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
