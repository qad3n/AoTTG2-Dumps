// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonSerializerSettings
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
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json;

[Token(Token = "0x2000033")]
public class JsonSerializerSettings
{
	[Token(Token = "0x40000BE")]
	internal const ReferenceLoopHandling DefaultReferenceLoopHandling = ReferenceLoopHandling.Error;

	[Token(Token = "0x40000BF")]
	internal const MissingMemberHandling DefaultMissingMemberHandling = MissingMemberHandling.Ignore;

	[Token(Token = "0x40000C0")]
	internal const NullValueHandling DefaultNullValueHandling = NullValueHandling.Include;

	[Token(Token = "0x40000C1")]
	internal const DefaultValueHandling DefaultDefaultValueHandling = DefaultValueHandling.Include;

	[Token(Token = "0x40000C2")]
	internal const ObjectCreationHandling DefaultObjectCreationHandling = ObjectCreationHandling.Auto;

	[Token(Token = "0x40000C3")]
	internal const PreserveReferencesHandling DefaultPreserveReferencesHandling = PreserveReferencesHandling.None;

	[Token(Token = "0x40000C4")]
	internal const ConstructorHandling DefaultConstructorHandling = ConstructorHandling.Default;

	[Token(Token = "0x40000C5")]
	internal const TypeNameHandling DefaultTypeNameHandling = TypeNameHandling.None;

	[Token(Token = "0x40000C6")]
	internal const MetadataPropertyHandling DefaultMetadataPropertyHandling = MetadataPropertyHandling.Default;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly StreamingContext DefaultContext;

	[Token(Token = "0x40000C8")]
	internal const Formatting DefaultFormatting = Formatting.None;

	[Token(Token = "0x40000C9")]
	internal const DateFormatHandling DefaultDateFormatHandling = DateFormatHandling.IsoDateFormat;

	[Token(Token = "0x40000CA")]
	internal const DateTimeZoneHandling DefaultDateTimeZoneHandling = DateTimeZoneHandling.RoundtripKind;

	[Token(Token = "0x40000CB")]
	internal const DateParseHandling DefaultDateParseHandling = DateParseHandling.DateTime;

	[Token(Token = "0x40000CC")]
	internal const FloatParseHandling DefaultFloatParseHandling = FloatParseHandling.Double;

	[Token(Token = "0x40000CD")]
	internal const FloatFormatHandling DefaultFloatFormatHandling = FloatFormatHandling.String;

	[Token(Token = "0x40000CE")]
	internal const StringEscapeHandling DefaultStringEscapeHandling = StringEscapeHandling.Default;

	[Token(Token = "0x40000CF")]
	internal const TypeNameAssemblyFormatHandling DefaultTypeNameAssemblyFormatHandling = TypeNameAssemblyFormatHandling.Simple;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly CultureInfo DefaultCulture;

	[Token(Token = "0x40000D1")]
	internal const bool DefaultCheckAdditionalContent = false;

	[Token(Token = "0x40000D2")]
	internal const string DefaultDateFormatString = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.FFFFFFFK";

	[Token(Token = "0x40000D3")]
	internal const int DefaultMaxDepth = 64;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x10")]
	internal Formatting? _formatting;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x18")]
	internal DateFormatHandling? _dateFormatHandling;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x20")]
	internal DateTimeZoneHandling? _dateTimeZoneHandling;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x28")]
	internal DateParseHandling? _dateParseHandling;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x30")]
	internal FloatFormatHandling? _floatFormatHandling;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x38")]
	internal FloatParseHandling? _floatParseHandling;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x40")]
	internal StringEscapeHandling? _stringEscapeHandling;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x48")]
	internal CultureInfo? _culture;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x50")]
	internal bool? _checkAdditionalContent;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x54")]
	internal int? _maxDepth;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x5C")]
	internal bool _maxDepthSet;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x60")]
	internal string? _dateFormatString;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x68")]
	internal bool _dateFormatStringSet;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x6C")]
	internal TypeNameAssemblyFormatHandling? _typeNameAssemblyFormatHandling;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x74")]
	internal DefaultValueHandling? _defaultValueHandling;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x7C")]
	internal PreserveReferencesHandling? _preserveReferencesHandling;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x84")]
	internal NullValueHandling? _nullValueHandling;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x8C")]
	internal ObjectCreationHandling? _objectCreationHandling;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x94")]
	internal MissingMemberHandling? _missingMemberHandling;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x9C")]
	internal ReferenceLoopHandling? _referenceLoopHandling;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0xA8")]
	internal StreamingContext? _context;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0xC0")]
	internal ConstructorHandling? _constructorHandling;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0xC8")]
	internal TypeNameHandling? _typeNameHandling;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0xD0")]
	internal MetadataPropertyHandling? _metadataPropertyHandling;

	[Token(Token = "0x17000060")]
	public ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x1BD4EF0", Offset = "0x1BD34F0", VA = "0x181BD4EF0")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x1BD57E0", Offset = "0x1BD3DE0", VA = "0x181BD57E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x1BD4DF0", Offset = "0x1BD33F0", VA = "0x181BD4DF0")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x1BD5660", Offset = "0x1BD3C60", VA = "0x181BD5660")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x1BD4E70", Offset = "0x1BD3470", VA = "0x181BD4E70")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x1BD5720", Offset = "0x1BD3D20", VA = "0x181BD5720")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public NullValueHandling NullValueHandling
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x1BD4E30", Offset = "0x1BD3430", VA = "0x181BD4E30")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x1BD56C0", Offset = "0x1BD3CC0", VA = "0x181BD56C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x1BD4C40", Offset = "0x1BD3240", VA = "0x181BD4C40")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x1BD5380", Offset = "0x1BD3980", VA = "0x181BD5380")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public IList<JsonConverter> Converters
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x187BC60", Offset = "0x187A260", VA = "0x18187BC60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x1BD5220", Offset = "0x1BD3820", VA = "0x181BD5220")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x1BD4EB0", Offset = "0x1BD34B0", VA = "0x181BD4EB0")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x1BD5780", Offset = "0x1BD3D80", VA = "0x181BD5780")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x1BD4FE0", Offset = "0x1BD35E0", VA = "0x181BD4FE0")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x1BD5A20", Offset = "0x1BD4020", VA = "0x181BD5A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x1BD4DB0", Offset = "0x1BD33B0", VA = "0x181BD4DB0")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x1BD5600", Offset = "0x1BD3C00", VA = "0x181BD5600")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x1BD4FA0", Offset = "0x1BD35A0", VA = "0x181BD4FA0")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x1BD59C0", Offset = "0x1BD3FC0", VA = "0x181BD59C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x1BD4FA0", Offset = "0x1BD35A0", VA = "0x181BD4FA0")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x1BD59C0", Offset = "0x1BD3FC0", VA = "0x181BD59C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x1BD49C0", Offset = "0x1BD2FC0", VA = "0x181BD49C0")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x1BD5110", Offset = "0x1BD3710", VA = "0x181BD5110")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public IContractResolver? ContractResolver
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x1BD5200", Offset = "0x1BD3800", VA = "0x181BD5200")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x1BD53E0", Offset = "0x1BD39E0", VA = "0x181BD53E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	[Obsolete("ReferenceResolver property is obsolete. Use the ReferenceResolverProvider property to set the IReferenceResolver: settings.ReferenceResolverProvider = () => resolver")]
	public IReferenceResolver? ReferenceResolver
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x1BD4F30", Offset = "0x1BD3530", VA = "0x181BD4F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x1BD5840", Offset = "0x1BD3E40", VA = "0x181BD5840")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public Func<IReferenceResolver?>? ReferenceResolverProvider
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0xB5B620", Offset = "0xB59C20", VA = "0x180B5B620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0xB5BC50", Offset = "0xB5A250", VA = "0x180B5BC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public ITraceWriter? TraceWriter
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x1BD59A0", Offset = "0x1BD3FA0", VA = "0x181BD59A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public SerializationBinder? Binder
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x1BD48C0", Offset = "0x1BD2EC0", VA = "0x181BD48C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x1BD5020", Offset = "0x1BD3620", VA = "0x181BD5020")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public ISerializationBinder? SerializationBinder
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x1BD5920", Offset = "0x1BD3F20", VA = "0x181BD5920")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public EventHandler<ErrorEventArgs>? Error
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x1BD5400", Offset = "0x1BD3A00", VA = "0x181BD5400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public StreamingContext Context
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x1BD4A00", Offset = "0x1BD3000", VA = "0x181BD4A00")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x1BD5170", Offset = "0x1BD3770", VA = "0x181BD5170")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public string DateFormatString
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x1BD4B60", Offset = "0x1BD3160", VA = "0x181BD4B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x1BD52A0", Offset = "0x1BD38A0", VA = "0x181BD52A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public int? MaxDepth
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x1BD4D50", Offset = "0x1BD3350", VA = "0x181BD4D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x1BD5540", Offset = "0x1BD3B40", VA = "0x181BD5540")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public Formatting Formatting
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x1BD4D10", Offset = "0x1BD3310", VA = "0x181BD4D10")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x1BD54E0", Offset = "0x1BD3AE0", VA = "0x181BD54E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x1BD4B20", Offset = "0x1BD3120", VA = "0x181BD4B20")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x1BD5240", Offset = "0x1BD3840", VA = "0x181BD5240")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x1BD4BF0", Offset = "0x1BD31F0", VA = "0x181BD4BF0")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x1BD5320", Offset = "0x1BD3920", VA = "0x181BD5320")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public DateParseHandling DateParseHandling
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x1BD4BA0", Offset = "0x1BD31A0", VA = "0x181BD4BA0")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x1BD52C0", Offset = "0x1BD38C0", VA = "0x181BD52C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x1BD4C90", Offset = "0x1BD3290", VA = "0x181BD4C90")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x1BD5420", Offset = "0x1BD3A20", VA = "0x181BD5420")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x1BD4CD0", Offset = "0x1BD32D0", VA = "0x181BD4CD0")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x1BD5480", Offset = "0x1BD3A80", VA = "0x181BD5480")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x1BD4F50", Offset = "0x1BD3550", VA = "0x181BD4F50")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x1BD5940", Offset = "0x1BD3F40", VA = "0x181BD5940")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x1BD4AC0", Offset = "0x1BD30C0", VA = "0x181BD4AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool CheckAdditionalContent
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x1BD4980", Offset = "0x1BD2F80", VA = "0x181BD4980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x1BD50B0", Offset = "0x1BD36B0", VA = "0x181BD50B0")]
		set
		{
		}
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x1BD4570", Offset = "0x1BD2B70", VA = "0x181BD4570")]
	static JsonSerializerSettings()
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x1BD4840", Offset = "0x1BD2E40", VA = "0x181BD4840")]
	[DebuggerStepThrough]
	public JsonSerializerSettings()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x1BD4600", Offset = "0x1BD2C00", VA = "0x181BD4600")]
	public JsonSerializerSettings(JsonSerializerSettings original)
	{
	}
}
