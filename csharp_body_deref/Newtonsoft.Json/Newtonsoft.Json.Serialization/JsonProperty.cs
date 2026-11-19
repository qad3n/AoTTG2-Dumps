// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000123")]
public class JsonProperty
{
	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x10")]
	internal Required? _required;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x18")]
	internal bool _hasExplicitDefaultValue;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x20")]
	private object? _defaultValue;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x28")]
	private bool _hasGeneratedDefaultValue;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x30")]
	private string? _propertyName;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x38")]
	internal bool _skipPropertyNameEscape;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x40")]
	private Type? _propertyType;

	[Token(Token = "0x1700012E")]
	internal JsonContract? PropertyContract
	{
		[Token(Token = "0x6000862")]
		[Address(RVA = "0x55D2F50", Offset = "0x55D1F50", VA = "0x55D2F50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x55D2F60", Offset = "0x55D1F60", VA = "0x55D2F60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public string? PropertyName
	{
		[Token(Token = "0x6000864")]
		[Address(RVA = "0x55D2F70", Offset = "0x55D1F70", VA = "0x55D2F70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000865")]
		[Address(RVA = "0x55C6620", Offset = "0x55C5620", VA = "0x55C6620")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public Type? DeclaringType
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x55D2F80", Offset = "0x55D1F80", VA = "0x55D2F80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000867")]
		[Address(RVA = "0x55D2F90", Offset = "0x55D1F90", VA = "0x55D2F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public int? Order
	{
		[Token(Token = "0x6000868")]
		[Address(RVA = "0x55D2FA0", Offset = "0x55D1FA0", VA = "0x55D2FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000869")]
		[Address(RVA = "0x55D2FB0", Offset = "0x55D1FB0", VA = "0x55D2FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public string? UnderlyingName
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x55D2FC0", Offset = "0x55D1FC0", VA = "0x55D2FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x55D2FD0", Offset = "0x55D1FD0", VA = "0x55D2FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public IValueProvider? ValueProvider
	{
		[Token(Token = "0x600086C")]
		[Address(RVA = "0x55D2FE0", Offset = "0x55D1FE0", VA = "0x55D2FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x55D2FF0", Offset = "0x55D1FF0", VA = "0x55D2FF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public IAttributeProvider? AttributeProvider
	{
		[Token(Token = "0x600086E")]
		[Address(RVA = "0x55D3000", Offset = "0x55D2000", VA = "0x55D3000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086F")]
		[Address(RVA = "0x55D3010", Offset = "0x55D2010", VA = "0x55D3010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Type? PropertyType
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x55D3020", Offset = "0x55D2020", VA = "0x55D3020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x55C5D70", Offset = "0x55C4D70", VA = "0x55C5D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x55D3030", Offset = "0x55D2030", VA = "0x55D3030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x55D3040", Offset = "0x55D2040", VA = "0x55D3040")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000137")]
	[Obsolete("MemberConverter is obsolete. Use Converter instead.")]
	public JsonConverter? MemberConverter
	{
		[Token(Token = "0x6000874")]
		[Address(RVA = "0x55D3050", Offset = "0x55D2050", VA = "0x55D3050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000875")]
		[Address(RVA = "0x55D3060", Offset = "0x55D2060", VA = "0x55D3060")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public bool Ignored
	{
		[Token(Token = "0x6000876")]
		[Address(RVA = "0x55D3070", Offset = "0x55D2070", VA = "0x55D3070")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000877")]
		[Address(RVA = "0x55D3080", Offset = "0x55D2080", VA = "0x55D3080")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool Readable
	{
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x55D3090", Offset = "0x55D2090", VA = "0x55D3090")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x55D30A0", Offset = "0x55D20A0", VA = "0x55D30A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public bool Writable
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x55D30B0", Offset = "0x55D20B0", VA = "0x55D30B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087B")]
		[Address(RVA = "0x55D30C0", Offset = "0x55D20C0", VA = "0x55D30C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool HasMemberAttribute
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x55D30D0", Offset = "0x55D20D0", VA = "0x55D30D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x55D30E0", Offset = "0x55D20E0", VA = "0x55D30E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public object? DefaultValue
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x55C66A0", Offset = "0x55C56A0", VA = "0x55C66A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x55C66B0", Offset = "0x55C56B0", VA = "0x55C66B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public Required Required
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x55D2B40", Offset = "0x55D1B40", VA = "0x55D2B40")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x55D31A0", Offset = "0x55D21A0", VA = "0x55D31A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool IsRequiredSpecified
	{
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x55D31F0", Offset = "0x55D21F0", VA = "0x55D31F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public bool? IsReference
	{
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x55D3220", Offset = "0x55D2220", VA = "0x55D3220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x55D3230", Offset = "0x55D2230", VA = "0x55D3230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public NullValueHandling? NullValueHandling
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x55D3240", Offset = "0x55D2240", VA = "0x55D3240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x55D3250", Offset = "0x55D2250", VA = "0x55D3250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public DefaultValueHandling? DefaultValueHandling
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x55D3260", Offset = "0x55D2260", VA = "0x55D3260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x55D3270", Offset = "0x55D2270", VA = "0x55D3270")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public ReferenceLoopHandling? ReferenceLoopHandling
	{
		[Token(Token = "0x600088A")]
		[Address(RVA = "0x55D3280", Offset = "0x55D2280", VA = "0x55D3280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088B")]
		[Address(RVA = "0x55D3290", Offset = "0x55D2290", VA = "0x55D3290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public ObjectCreationHandling? ObjectCreationHandling
	{
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x55D32A0", Offset = "0x55D22A0", VA = "0x55D32A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x55D32B0", Offset = "0x55D22B0", VA = "0x55D32B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public TypeNameHandling? TypeNameHandling
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x55D32C0", Offset = "0x55D22C0", VA = "0x55D32C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088F")]
		[Address(RVA = "0x55D32D0", Offset = "0x55D22D0", VA = "0x55D32D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public Predicate<object>? ShouldSerialize
	{
		[Token(Token = "0x6000890")]
		[Address(RVA = "0x55D32E0", Offset = "0x55D22E0", VA = "0x55D32E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x55D32F0", Offset = "0x55D22F0", VA = "0x55D32F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public Predicate<object>? ShouldDeserialize
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x55D3310", Offset = "0x55D2310", VA = "0x55D3310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x55D3320", Offset = "0x55D2320", VA = "0x55D3320")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public Predicate<object>? GetIsSpecified
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x55D3340", Offset = "0x55D2340", VA = "0x55D3340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000895")]
		[Address(RVA = "0x55D3350", Offset = "0x55D2350", VA = "0x55D3350")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public Action<object, object?>? SetIsSpecified
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x55D3370", Offset = "0x55D2370", VA = "0x55D3370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x55D3380", Offset = "0x55D2380", VA = "0x55D3380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x6000899")]
		[Address(RVA = "0x55D33D0", Offset = "0x55D23D0", VA = "0x55D33D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x55D33E0", Offset = "0x55D23E0", VA = "0x55D33E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x55D3400", Offset = "0x55D2400", VA = "0x55D3400")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x55D3410", Offset = "0x55D2410", VA = "0x55D3410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x600089D")]
		[Address(RVA = "0x55D3420", Offset = "0x55D2420", VA = "0x55D3420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x55D3430", Offset = "0x55D2430", VA = "0x55D3430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x55D3440", Offset = "0x55D2440", VA = "0x55D3440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x55D3450", Offset = "0x55D2450", VA = "0x55D3450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x55D30F0", Offset = "0x55D20F0", VA = "0x55D30F0")]
	internal object? GetResolvedDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x55D33A0", Offset = "0x55D23A0", VA = "0x55D33A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x55D3460", Offset = "0x55D2460", VA = "0x55D3460")]
	internal void WritePropertyName(JsonWriter writer)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x55C5D60", Offset = "0x55C4D60", VA = "0x55C5D60")]
	public JsonProperty()
	{
	}
}
