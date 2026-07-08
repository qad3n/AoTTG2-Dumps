using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json;

[Token(Token = "0x2000032")]
public class JsonSerializer
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10")]
	internal TypeNameHandling _typeNameHandling;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x14")]
	internal TypeNameAssemblyFormatHandling _typeNameAssemblyFormatHandling;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x18")]
	internal PreserveReferencesHandling _preserveReferencesHandling;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x1C")]
	internal ReferenceLoopHandling _referenceLoopHandling;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x20")]
	internal MissingMemberHandling _missingMemberHandling;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x24")]
	internal ObjectCreationHandling _objectCreationHandling;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x28")]
	internal NullValueHandling _nullValueHandling;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x2C")]
	internal DefaultValueHandling _defaultValueHandling;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x30")]
	internal ConstructorHandling _constructorHandling;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x34")]
	internal MetadataPropertyHandling _metadataPropertyHandling;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x38")]
	internal JsonConverterCollection? _converters;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x40")]
	internal IContractResolver _contractResolver;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x48")]
	internal ITraceWriter? _traceWriter;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x50")]
	internal IEqualityComparer? _equalityComparer;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x58")]
	internal ISerializationBinder _serializationBinder;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x60")]
	internal StreamingContext _context;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x70")]
	private IReferenceResolver? _referenceResolver;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x78")]
	private Formatting? _formatting;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x80")]
	private DateFormatHandling? _dateFormatHandling;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x88")]
	private DateTimeZoneHandling? _dateTimeZoneHandling;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x90")]
	private DateParseHandling? _dateParseHandling;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x98")]
	private FloatFormatHandling? _floatFormatHandling;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0xA0")]
	private FloatParseHandling? _floatParseHandling;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0xA8")]
	private StringEscapeHandling? _stringEscapeHandling;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0xB0")]
	private CultureInfo _culture;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0xB8")]
	private int? _maxDepth;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0xC0")]
	private bool _maxDepthSet;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0xC1")]
	private bool? _checkAdditionalContent;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0xC8")]
	private string? _dateFormatString;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0xD0")]
	private bool _dateFormatStringSet;

	[Token(Token = "0x17000042")]
	public virtual IReferenceResolver? ReferenceResolver
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x3A6CF60", Offset = "0x3A6CF60", VA = "0x3A6CF60", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x3A6D060", Offset = "0x3A6D060", VA = "0x3A6D060", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public virtual SerializationBinder Binder
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x3A6D0E0", Offset = "0x3A6D0E0", VA = "0x3A6D0E0", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x3A6D1C0", Offset = "0x3A6D1C0", VA = "0x3A6D1C0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public virtual ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x3A6D2B0", Offset = "0x3A6D2B0", VA = "0x3A6D2B0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x3A6D2C0", Offset = "0x3A6D2C0", VA = "0x3A6D2C0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public virtual ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x3A6D340", Offset = "0x3A6D340", VA = "0x3A6D340", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x3A6D350", Offset = "0x3A6D350", VA = "0x3A6D350", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public virtual IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x3A6D360", Offset = "0x3A6D360", VA = "0x3A6D360", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x3A6D370", Offset = "0x3A6D370", VA = "0x3A6D370", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public virtual TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x3A6D380", Offset = "0x3A6D380", VA = "0x3A6D380", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x3A6D390", Offset = "0x3A6D390", VA = "0x3A6D390", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public virtual FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x3A6D3F0", Offset = "0x3A6D3F0", VA = "0x3A6D3F0", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x3A6D400", Offset = "0x3A6D400", VA = "0x3A6D400", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public virtual TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x3A6D460", Offset = "0x3A6D460", VA = "0x3A6D460", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x3A6D470", Offset = "0x3A6D470", VA = "0x3A6D470", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public virtual PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3A6D4D0", Offset = "0x3A6D4D0", VA = "0x3A6D4D0", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x3A6D4E0", Offset = "0x3A6D4E0", VA = "0x3A6D4E0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public virtual ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x3A6D540", Offset = "0x3A6D540", VA = "0x3A6D540", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x3A6D550", Offset = "0x3A6D550", VA = "0x3A6D550", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public virtual MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x3A6D5B0", Offset = "0x3A6D5B0", VA = "0x3A6D5B0", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x3A6D5C0", Offset = "0x3A6D5C0", VA = "0x3A6D5C0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public virtual NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x3A6D620", Offset = "0x3A6D620", VA = "0x3A6D620", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x3A6D630", Offset = "0x3A6D630", VA = "0x3A6D630", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public virtual DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x3A6D690", Offset = "0x3A6D690", VA = "0x3A6D690", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x3A6D6A0", Offset = "0x3A6D6A0", VA = "0x3A6D6A0", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public virtual ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x3A6D700", Offset = "0x3A6D700", VA = "0x3A6D700", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x3A6D710", Offset = "0x3A6D710", VA = "0x3A6D710", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public virtual ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x3A6D770", Offset = "0x3A6D770", VA = "0x3A6D770", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x3A6D780", Offset = "0x3A6D780", VA = "0x3A6D780", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public virtual MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x3A6D7E0", Offset = "0x3A6D7E0", VA = "0x3A6D7E0", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x3A6D7F0", Offset = "0x3A6D7F0", VA = "0x3A6D7F0", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public virtual JsonConverterCollection Converters
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x3A6D850", Offset = "0x3A6D850", VA = "0x3A6D850", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public virtual IContractResolver ContractResolver
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x3A6D8F0", Offset = "0x3A6D8F0", VA = "0x3A6D8F0", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x3A6D900", Offset = "0x3A6D900", VA = "0x3A6D900", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public virtual StreamingContext Context
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x3A6D9E0", Offset = "0x3A6D9E0", VA = "0x3A6D9E0", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x3A6D9F0", Offset = "0x3A6D9F0", VA = "0x3A6D9F0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public virtual Formatting Formatting
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x3A6DA10", Offset = "0x3A6DA10", VA = "0x3A6DA10", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x3A6DA40", Offset = "0x3A6DA40", VA = "0x3A6DA40", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public virtual DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x3A6DA90", Offset = "0x3A6DA90", VA = "0x3A6DA90", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x3A6DAC0", Offset = "0x3A6DAC0", VA = "0x3A6DAC0", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public virtual DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x3A6DB20", Offset = "0x3A6DB20", VA = "0x3A6DB20", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x3A6DB70", Offset = "0x3A6DB70", VA = "0x3A6DB70", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public virtual DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x3A6DBD0", Offset = "0x3A6DBD0", VA = "0x3A6DBD0", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x3A6DC20", Offset = "0x3A6DC20", VA = "0x3A6DC20", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public virtual FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x3A6DC80", Offset = "0x3A6DC80", VA = "0x3A6DC80", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x3A6DCB0", Offset = "0x3A6DCB0", VA = "0x3A6DCB0", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public virtual FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x3A6DD10", Offset = "0x3A6DD10", VA = "0x3A6DD10", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x3A6DD40", Offset = "0x3A6DD40", VA = "0x3A6DD40", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public virtual StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x3A6DDA0", Offset = "0x3A6DDA0", VA = "0x3A6DDA0", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3A6DDD0", Offset = "0x3A6DDD0", VA = "0x3A6DDD0", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public virtual string DateFormatString
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3A6DE30", Offset = "0x3A6DE30", VA = "0x3A6DE30", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x3A6DE80", Offset = "0x3A6DE80", VA = "0x3A6DE80", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public virtual CultureInfo Culture
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x3A6DEA0", Offset = "0x3A6DEA0", VA = "0x3A6DEA0", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x3A6DF10", Offset = "0x3A6DF10", VA = "0x3A6DF10", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public virtual int? MaxDepth
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3A6DF30", Offset = "0x3A6DF30", VA = "0x3A6DF30", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3A6DF40", Offset = "0x3A6DF40", VA = "0x3A6DF40", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public virtual bool CheckAdditionalContent
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3A6E000", Offset = "0x3A6E000", VA = "0x3A6E000", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3A6E030", Offset = "0x3A6E030", VA = "0x3A6E030", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public virtual event EventHandler<Newtonsoft.Json.Serialization.ErrorEventArgs>? Error
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x3A6CE00", Offset = "0x3A6CE00", VA = "0x3A6CE00", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x3A6CEB0", Offset = "0x3A6CEB0", VA = "0x3A6CEB0", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x3A62ED0", Offset = "0x3A62ED0", VA = "0x3A62ED0")]
	internal bool IsCheckAdditionalContentSet()
	{
		return default(bool);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x3A6E090", Offset = "0x3A6E090", VA = "0x3A6E090")]
	public JsonSerializer()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x3A6E1F0", Offset = "0x3A6E1F0", VA = "0x3A6E1F0")]
	public static JsonSerializer Create()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x3A6E230", Offset = "0x3A6E230", VA = "0x3A6E230")]
	public static JsonSerializer Create(JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x3A6EBC0", Offset = "0x3A6EBC0", VA = "0x3A6EBC0")]
	public static JsonSerializer CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x3A62700", Offset = "0x3A62700", VA = "0x3A62700")]
	public static JsonSerializer CreateDefault(JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x3A6E290", Offset = "0x3A6E290", VA = "0x3A6E290")]
	private static void ApplySerializerSettings(JsonSerializer serializer, JsonSerializerSettings settings)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x3A6EF80", Offset = "0x3A6EF80", VA = "0x3A6EF80")]
	[DebuggerStepThrough]
	public void Populate(TextReader reader, object target)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x3A63410", Offset = "0x3A63410", VA = "0x3A63410")]
	[DebuggerStepThrough]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x3A6F000", Offset = "0x3A6F000", VA = "0x3A6F000", Slot = "65")]
	internal virtual void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x3A6FC50", Offset = "0x3A6FC50", VA = "0x3A6FC50")]
	[DebuggerStepThrough]
	public object Deserialize(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x3A6FC70", Offset = "0x3A6FC70", VA = "0x3A6FC70")]
	[DebuggerStepThrough]
	public object Deserialize(TextReader reader, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000193")]
	[DebuggerStepThrough]
	public T? Deserialize<T>(JsonReader reader)
	{
		return (T?)null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3A63060", Offset = "0x3A63060", VA = "0x3A63060")]
	[DebuggerStepThrough]
	public object? Deserialize(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x3A6FCF0", Offset = "0x3A6FCF0", VA = "0x3A6FCF0", Slot = "66")]
	internal virtual object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x3A6F2D0", Offset = "0x3A6F2D0", VA = "0x3A6F2D0")]
	internal void SetupReader(JsonReader reader, out CultureInfo? previousCulture, out DateTimeZoneHandling? previousDateTimeZoneHandling, out DateParseHandling? previousDateParseHandling, out FloatParseHandling? previousFloatParseHandling, out int? previousMaxDepth, out string? previousDateFormatString)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x3A6F930", Offset = "0x3A6F930", VA = "0x3A6F930")]
	private void ResetReader(JsonReader reader, CultureInfo? previousCulture, DateTimeZoneHandling? previousDateTimeZoneHandling, DateParseHandling? previousDateParseHandling, FloatParseHandling? previousFloatParseHandling, int? previousMaxDepth, string? previousDateFormatString)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x3A6FFD0", Offset = "0x3A6FFD0", VA = "0x3A6FFD0")]
	public void Serialize(TextWriter textWriter, object? value)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x3A629F0", Offset = "0x3A629F0", VA = "0x3A629F0")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x3A70070", Offset = "0x3A70070", VA = "0x3A70070")]
	public void Serialize(TextWriter textWriter, object? value, Type objectType)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x3A70050", Offset = "0x3A70050", VA = "0x3A70050")]
	public void Serialize(JsonWriter jsonWriter, object? value)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x3A6F8B0", Offset = "0x3A6F8B0", VA = "0x3A6F8B0")]
	private TraceJsonReader CreateTraceJsonReader(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x3A700F0", Offset = "0x3A700F0", VA = "0x3A700F0", Slot = "67")]
	internal virtual void SerializeInternal(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3A6CFE0", Offset = "0x3A6CFE0", VA = "0x3A6CFE0")]
	internal IReferenceResolver GetReferenceResolver()
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3A70800", Offset = "0x3A70800", VA = "0x3A70800")]
	internal JsonConverter GetMatchingConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x3A70810", Offset = "0x3A70810", VA = "0x3A70810")]
	internal static JsonConverter GetMatchingConverter(IList<JsonConverter>? converters, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3A70990", Offset = "0x3A70990", VA = "0x3A70990")]
	internal void OnError(Newtonsoft.Json.Serialization.ErrorEventArgs e)
	{
	}
}
