// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonSerializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0xD8")]
	[CompilerGenerated]
	private EventHandler<Newtonsoft.Json.Serialization.ErrorEventArgs>? m_Error;

	[Token(Token = "0x17000042")]
	public virtual IReferenceResolver? ReferenceResolver
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x1BD6EF0", Offset = "0x1BD54F0", VA = "0x181BD6EF0", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x1BD91E0", Offset = "0x1BD77E0", VA = "0x181BD91E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public virtual SerializationBinder Binder
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x1BD83D0", Offset = "0x1BD69D0", VA = "0x181BD83D0", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x1BD8900", Offset = "0x1BD6F00", VA = "0x181BD8900", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public virtual ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x1BD9270", Offset = "0x1BD7870", VA = "0x181BD9270", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public virtual ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public virtual IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public virtual TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x1BD9440", Offset = "0x1BD7A40", VA = "0x181BD9440", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public virtual FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x1BD93D0", Offset = "0x1BD79D0", VA = "0x181BD93D0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public virtual TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x1BD9360", Offset = "0x1BD7960", VA = "0x181BD9360", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public virtual PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x1BD9100", Offset = "0x1BD7700", VA = "0x181BD9100", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public virtual ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x1BD9170", Offset = "0x1BD7770", VA = "0x181BD9170", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public virtual MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x1BD8FB0", Offset = "0x1BD75B0", VA = "0x181BD8FB0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public virtual NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x1BD9020", Offset = "0x1BD7620", VA = "0x181BD9020", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public virtual DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x1BD8CF0", Offset = "0x1BD72F0", VA = "0x181BD8CF0", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public virtual ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x1BD9090", Offset = "0x1BD7690", VA = "0x181BD9090", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public virtual ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x1BD8A60", Offset = "0x1BD7060", VA = "0x181BD8A60", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public virtual MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x1BD8F40", Offset = "0x1BD7540", VA = "0x181BD8F40", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public virtual JsonConverterCollection Converters
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x1BD8510", Offset = "0x1BD6B10", VA = "0x181BD8510", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public virtual IContractResolver ContractResolver
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x1BD8AF0", Offset = "0x1BD70F0", VA = "0x181BD8AF0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public virtual StreamingContext Context
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x1BD8500", Offset = "0x1BD6B00", VA = "0x181BD8500", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x1BD8AD0", Offset = "0x1BD70D0", VA = "0x181BD8AD0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public virtual Formatting Formatting
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x1BD87D0", Offset = "0x1BD6DD0", VA = "0x181BD87D0", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x1BD8E20", Offset = "0x1BD7420", VA = "0x181BD8E20", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public virtual DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x1BD8610", Offset = "0x1BD6C10", VA = "0x181BD8610", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x1BD8BA0", Offset = "0x1BD71A0", VA = "0x181BD8BA0", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public virtual DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x1BD86F0", Offset = "0x1BD6CF0", VA = "0x181BD86F0", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x1BD8C90", Offset = "0x1BD7290", VA = "0x181BD8C90", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public virtual DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x1BD8690", Offset = "0x1BD6C90", VA = "0x181BD8690", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x1BD8C30", Offset = "0x1BD7230", VA = "0x181BD8C30", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public virtual FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x1BD8790", Offset = "0x1BD6D90", VA = "0x181BD8790", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x1BD8DC0", Offset = "0x1BD73C0", VA = "0x181BD8DC0", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public virtual FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x1BD8750", Offset = "0x1BD6D50", VA = "0x181BD8750", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x1BD8D60", Offset = "0x1BD7360", VA = "0x181BD8D60", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public virtual StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x1BD8810", Offset = "0x1BD6E10", VA = "0x181BD8810", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x1BD9300", Offset = "0x1BD7900", VA = "0x181BD9300", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public virtual string DateFormatString
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x1BD8650", Offset = "0x1BD6C50", VA = "0x181BD8650", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x1BD8C00", Offset = "0x1BD7200", VA = "0x181BD8C00", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public virtual CultureInfo Culture
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x1BD85A0", Offset = "0x1BD6BA0", VA = "0x181BD85A0", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public virtual int? MaxDepth
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x1BD8E80", Offset = "0x1BD7480", VA = "0x181BD8E80", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public virtual bool CheckAdditionalContent
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x1BD84C0", Offset = "0x1BD6AC0", VA = "0x181BD84C0", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x1BD8A00", Offset = "0x1BD7000", VA = "0x181BD8A00", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public virtual event EventHandler<Newtonsoft.Json.Serialization.ErrorEventArgs>? Error
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x1BD8320", Offset = "0x1BD6920", VA = "0x181BD8320", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x1BD8850", Offset = "0x1BD6E50", VA = "0x181BD8850", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x1BD6F60", Offset = "0x1BD5560", VA = "0x181BD6F60")]
	internal bool IsCheckAdditionalContentSet()
	{
		return default(bool);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x1BD81C0", Offset = "0x1BD67C0", VA = "0x181BD81C0")]
	public JsonSerializer()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x1BD6800", Offset = "0x1BD4E00", VA = "0x181BD6800")]
	public static JsonSerializer Create()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x1BD6650", Offset = "0x1BD4C50", VA = "0x181BD6650")]
	public static JsonSerializer Create(JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x1BD6340", Offset = "0x1BD4940", VA = "0x181BD6340")]
	public static JsonSerializer CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x1BD6580", Offset = "0x1BD4B80", VA = "0x181BD6580")]
	public static JsonSerializer CreateDefault(JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x1BD5A80", Offset = "0x1BD4080", VA = "0x181BD5A80")]
	private static void ApplySerializerSettings(JsonSerializer serializer, JsonSerializerSettings settings)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x1BD72F0", Offset = "0x1BD58F0", VA = "0x181BD72F0")]
	[DebuggerStepThrough]
	public void Populate(TextReader reader, object target)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x1BD72D0", Offset = "0x1BD58D0", VA = "0x181BD72D0")]
	[DebuggerStepThrough]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x1BD6FC0", Offset = "0x1BD55C0", VA = "0x181BD6FC0", Slot = "65")]
	internal virtual void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x1BD6CA0", Offset = "0x1BD52A0", VA = "0x181BD6CA0")]
	[DebuggerStepThrough]
	public object Deserialize(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x1BD6CE0", Offset = "0x1BD52E0", VA = "0x181BD6CE0")]
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
	[Address(RVA = "0x1BD6CC0", Offset = "0x1BD52C0", VA = "0x181BD6CC0")]
	[DebuggerStepThrough]
	public object? Deserialize(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x1BD6990", Offset = "0x1BD4F90", VA = "0x181BD6990", Slot = "66")]
	internal virtual object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x1BD7D40", Offset = "0x1BD6340", VA = "0x181BD7D40")]
	internal void SetupReader(JsonReader reader, out CultureInfo? previousCulture, out DateTimeZoneHandling? previousDateTimeZoneHandling, out DateParseHandling? previousDateParseHandling, out FloatParseHandling? previousFloatParseHandling, out int? previousMaxDepth, out string? previousDateFormatString)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x1BD7360", Offset = "0x1BD5960", VA = "0x181BD7360")]
	private void ResetReader(JsonReader reader, CultureInfo? previousCulture, DateTimeZoneHandling? previousDateTimeZoneHandling, DateParseHandling? previousDateParseHandling, FloatParseHandling? previousFloatParseHandling, int? previousMaxDepth, string? previousDateFormatString)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x1BD7C90", Offset = "0x1BD6290", VA = "0x181BD7C90")]
	public void Serialize(TextWriter textWriter, object? value)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x1BD7C70", Offset = "0x1BD6270", VA = "0x181BD7C70")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x1BD7BF0", Offset = "0x1BD61F0", VA = "0x181BD7BF0")]
	public void Serialize(TextWriter textWriter, object? value, Type objectType)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x1BD7D10", Offset = "0x1BD6310", VA = "0x181BD7D10")]
	public void Serialize(JsonWriter jsonWriter, object? value)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x1BD65C0", Offset = "0x1BD4BC0", VA = "0x181BD65C0")]
	private TraceJsonReader CreateTraceJsonReader(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x1BD7650", Offset = "0x1BD5C50", VA = "0x181BD7650", Slot = "67")]
	internal virtual void SerializeInternal(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x1BD6EF0", Offset = "0x1BD54F0", VA = "0x181BD6EF0")]
	internal IReferenceResolver GetReferenceResolver()
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x1BD6D50", Offset = "0x1BD5350", VA = "0x181BD6D50")]
	internal JsonConverter GetMatchingConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x1BD6E20", Offset = "0x1BD5420", VA = "0x181BD6E20")]
	internal static JsonConverter GetMatchingConverter(IList<JsonConverter>? converters, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x1BD6FA0", Offset = "0x1BD55A0", VA = "0x181BD6FA0")]
	internal void OnError(Newtonsoft.Json.Serialization.ErrorEventArgs e)
	{
	}
}
