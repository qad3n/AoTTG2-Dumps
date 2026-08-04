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
			[Address(RVA = "0x3D9AF80", Offset = "0x3D9AF80", VA = "0x3D9AF80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D2")]
			[Address(RVA = "0x3D9AF90", Offset = "0x3D9AF90", VA = "0x3D9AF90")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public int ArrayItemCount
		{
			[Token(Token = "0x60003D3")]
			[Address(RVA = "0x3D9AFA0", Offset = "0x3D9AFA0", VA = "0x3D9AFA0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60003D4")]
			[Address(RVA = "0x3D9AFB0", Offset = "0x3D9AFB0", VA = "0x3D9AFB0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public bool IsUniqueArray
		{
			[Token(Token = "0x60003D5")]
			[Address(RVA = "0x3D9AFC0", Offset = "0x3D9AFC0", VA = "0x3D9AFC0")]
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
			[Address(RVA = "0x3D9AFD0", Offset = "0x3D9AFD0", VA = "0x3D9AFD0")]
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
			[Address(RVA = "0x3D9AFE0", Offset = "0x3D9AFE0", VA = "0x3D9AFE0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60003D8")]
			[Address(RVA = "0x3D9AFF0", Offset = "0x3D9AFF0", VA = "0x3D9AFF0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public IList<JsonSchemaModel> Schemas
		{
			[Token(Token = "0x60003D9")]
			[Address(RVA = "0x3D9B000", Offset = "0x3D9B000", VA = "0x3D9B000")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009C")]
		public Dictionary<string, bool> RequiredProperties
		{
			[Token(Token = "0x60003DA")]
			[Address(RVA = "0x3D9B010", Offset = "0x3D9B010", VA = "0x3D9B010")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009D")]
		public JTokenType TokenType
		{
			[Token(Token = "0x60003DB")]
			[Address(RVA = "0x3D9B020", Offset = "0x3D9B020", VA = "0x3D9B020")]
			get
			{
				return default(JTokenType);
			}
		}

		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x3D97260", Offset = "0x3D97260", VA = "0x3D97260")]
		public SchemaScope(JTokenType tokenType, IList<JsonSchemaModel> schemas)
		{
		}

		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x3D9B030", Offset = "0x3D9B030", VA = "0x3D9B030")]
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
		[Address(RVA = "0x3D92FE0", Offset = "0x3D92FE0", VA = "0x3D92FE0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public override int Depth
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x3D93010", Offset = "0x3D93010", VA = "0x3D93010", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008C")]
	public override string Path
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x3D93040", Offset = "0x3D93040", VA = "0x3D93040", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x3D93070", Offset = "0x3D93070", VA = "0x3D93070", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x3D930A0", Offset = "0x3D930A0", VA = "0x3D930A0", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x3D930B0", Offset = "0x3D930B0", VA = "0x3D930B0", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x1700008F")]
	public override Type ValueType
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x3D930E0", Offset = "0x3D930E0", VA = "0x3D930E0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	private IList<JsonSchemaModel> CurrentSchemas
	{
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x3D93230", Offset = "0x3D93230", VA = "0x3D93230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	private IList<JsonSchemaModel> CurrentMemberSchemas
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x3D93250", Offset = "0x3D93250", VA = "0x3D93250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public JsonSchema Schema
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x3D94D10", Offset = "0x3D94D10", VA = "0x3D94D10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x3D94D20", Offset = "0x3D94D20", VA = "0x3D94D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public JsonReader Reader
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x3D94DC0", Offset = "0x3D94DC0", VA = "0x3D94DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x3D9AD80", Offset = "0x3D9AD80", VA = "0x3D9AD80", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000095")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x3D9AE40", Offset = "0x3D9AE40", VA = "0x3D9AE40", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x3D92EA0", Offset = "0x3D92EA0", VA = "0x3D92EA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x3D92F40", Offset = "0x3D92F40", VA = "0x3D92F40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x3D93110", Offset = "0x3D93110", VA = "0x3D93110")]
	private void Push(SchemaScope scope)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x3D93180", Offset = "0x3D93180", VA = "0x3D93180")]
	private SchemaScope Pop()
	{
		return null;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x3D947F0", Offset = "0x3D947F0", VA = "0x3D947F0")]
	private void RaiseError(string message, JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3D94BD0", Offset = "0x3D94BD0", VA = "0x3D94BD0")]
	private void OnValidationEvent(JsonSchemaException exception)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x3D94C60", Offset = "0x3D94C60", VA = "0x3D94C60")]
	public JsonValidatingReader(JsonReader reader)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3D94DD0", Offset = "0x3D94DD0", VA = "0x3D94DD0", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x3D94E00", Offset = "0x3D94E00", VA = "0x3D94E00")]
	private void ValidateNotDisallowed(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3D94F30", Offset = "0x3D94F30", VA = "0x3D94F30")]
	private JsonSchemaType? GetCurrentNodeSchemaType()
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3D95090", Offset = "0x3D95090", VA = "0x3D95090", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x3D96FF0", Offset = "0x3D96FF0", VA = "0x3D96FF0", Slot = "24")]
	public override byte[] ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x3D97030", Offset = "0x3D97030", VA = "0x3D97030", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3D97090", Offset = "0x3D97090", VA = "0x3D97090", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x3D970E0", Offset = "0x3D970E0", VA = "0x3D970E0", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3D97120", Offset = "0x3D97120", VA = "0x3D97120", Slot = "23")]
	public override string ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3D97160", Offset = "0x3D97160", VA = "0x3D97160", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x3D971A0", Offset = "0x3D971A0", VA = "0x3D971A0", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x3D97200", Offset = "0x3D97200", VA = "0x3D97200", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x3D950D0", Offset = "0x3D950D0", VA = "0x3D950D0")]
	private void ValidateCurrentToken()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x3D97BB0", Offset = "0x3D97BB0", VA = "0x3D97BB0")]
	private void WriteToken(IList<JsonSchemaModel> schemas)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x3D99FC0", Offset = "0x3D99FC0", VA = "0x3D99FC0")]
	private void ValidateEndObject(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x3D9A370", Offset = "0x3D9A370", VA = "0x3D9A370")]
	private void ValidateEndArray(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x3D99F80", Offset = "0x3D99F80", VA = "0x3D99F80")]
	private void ValidateNull(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3D99F40", Offset = "0x3D99F40", VA = "0x3D99F40")]
	private void ValidateBoolean(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x3D99960", Offset = "0x3D99960", VA = "0x3D99960")]
	private void ValidateString(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x3D98C20", Offset = "0x3D98C20", VA = "0x3D98C20")]
	private void ValidateInteger(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x3D97670", Offset = "0x3D97670", VA = "0x3D97670")]
	private void ProcessValue()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x3D99360", Offset = "0x3D99360", VA = "0x3D99360")]
	private void ValidateFloat(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x3D9A750", Offset = "0x3D9A750", VA = "0x3D9A750")]
	private static double FloatingPointRemainder(double dividend, double divisor)
	{
		return default(double);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x3D9A6E0", Offset = "0x3D9A6E0", VA = "0x3D9A6E0")]
	private static bool IsZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x3D98A60", Offset = "0x3D98A60", VA = "0x3D98A60")]
	private void ValidatePropertyName(JsonSchemaModel schema)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x3D9A7C0", Offset = "0x3D9A7C0", VA = "0x3D9A7C0")]
	private bool IsPropertyDefinied(JsonSchemaModel schema, string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x3D9AC90", Offset = "0x3D9AC90", VA = "0x3D9AC90")]
	private bool ValidateArray(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x3D9ACB0", Offset = "0x3D9ACB0", VA = "0x3D9ACB0")]
	private bool ValidateObject(JsonSchemaModel schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x3D9A5B0", Offset = "0x3D9A5B0", VA = "0x3D9A5B0")]
	private bool TestType(JsonSchemaModel currentSchema, JsonSchemaType currentType)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x3D9ACD0", Offset = "0x3D9ACD0", VA = "0x3D9ACD0", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
