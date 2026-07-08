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
		[Address(RVA = "0x3AE4FA0", Offset = "0x3AE4FA0", VA = "0x3AE4FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x3AE4FB0", Offset = "0x3AE4FB0", VA = "0x3AE4FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public string? PropertyName
	{
		[Token(Token = "0x6000864")]
		[Address(RVA = "0x3AE4FC0", Offset = "0x3AE4FC0", VA = "0x3AE4FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000865")]
		[Address(RVA = "0x3AD8410", Offset = "0x3AD8410", VA = "0x3AD8410")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public Type? DeclaringType
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x3AE4FD0", Offset = "0x3AE4FD0", VA = "0x3AE4FD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000867")]
		[Address(RVA = "0x3AE4FE0", Offset = "0x3AE4FE0", VA = "0x3AE4FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public int? Order
	{
		[Token(Token = "0x6000868")]
		[Address(RVA = "0x3AE4FF0", Offset = "0x3AE4FF0", VA = "0x3AE4FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000869")]
		[Address(RVA = "0x3AE5000", Offset = "0x3AE5000", VA = "0x3AE5000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public string? UnderlyingName
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x3AE5010", Offset = "0x3AE5010", VA = "0x3AE5010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x3AE5020", Offset = "0x3AE5020", VA = "0x3AE5020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public IValueProvider? ValueProvider
	{
		[Token(Token = "0x600086C")]
		[Address(RVA = "0x3AE5030", Offset = "0x3AE5030", VA = "0x3AE5030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x3AE5040", Offset = "0x3AE5040", VA = "0x3AE5040")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public IAttributeProvider? AttributeProvider
	{
		[Token(Token = "0x600086E")]
		[Address(RVA = "0x3AE5050", Offset = "0x3AE5050", VA = "0x3AE5050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086F")]
		[Address(RVA = "0x3AE5060", Offset = "0x3AE5060", VA = "0x3AE5060")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Type? PropertyType
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x3AE5070", Offset = "0x3AE5070", VA = "0x3AE5070")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x3AD7B40", Offset = "0x3AD7B40", VA = "0x3AD7B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x3AE5080", Offset = "0x3AE5080", VA = "0x3AE5080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x3AE5090", Offset = "0x3AE5090", VA = "0x3AE5090")]
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
		[Address(RVA = "0x3AE50A0", Offset = "0x3AE50A0", VA = "0x3AE50A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000875")]
		[Address(RVA = "0x3AE50B0", Offset = "0x3AE50B0", VA = "0x3AE50B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public bool Ignored
	{
		[Token(Token = "0x6000876")]
		[Address(RVA = "0x3AE50C0", Offset = "0x3AE50C0", VA = "0x3AE50C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000877")]
		[Address(RVA = "0x3AE50D0", Offset = "0x3AE50D0", VA = "0x3AE50D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool Readable
	{
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x3AE50E0", Offset = "0x3AE50E0", VA = "0x3AE50E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x3AE50F0", Offset = "0x3AE50F0", VA = "0x3AE50F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public bool Writable
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x3AE5100", Offset = "0x3AE5100", VA = "0x3AE5100")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087B")]
		[Address(RVA = "0x3AE5110", Offset = "0x3AE5110", VA = "0x3AE5110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool HasMemberAttribute
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x3AE5120", Offset = "0x3AE5120", VA = "0x3AE5120")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x3AE5130", Offset = "0x3AE5130", VA = "0x3AE5130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public object? DefaultValue
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x3AD8490", Offset = "0x3AD8490", VA = "0x3AD8490")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x3AD84A0", Offset = "0x3AD84A0", VA = "0x3AD84A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public Required Required
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x3AE4B90", Offset = "0x3AE4B90", VA = "0x3AE4B90")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x3AE51F0", Offset = "0x3AE51F0", VA = "0x3AE51F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool IsRequiredSpecified
	{
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x3AE5240", Offset = "0x3AE5240", VA = "0x3AE5240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public bool? IsReference
	{
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x3AE5270", Offset = "0x3AE5270", VA = "0x3AE5270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x3AE5280", Offset = "0x3AE5280", VA = "0x3AE5280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public NullValueHandling? NullValueHandling
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x3AE5290", Offset = "0x3AE5290", VA = "0x3AE5290")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x3AE52A0", Offset = "0x3AE52A0", VA = "0x3AE52A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public DefaultValueHandling? DefaultValueHandling
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x3AE52B0", Offset = "0x3AE52B0", VA = "0x3AE52B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x3AE52C0", Offset = "0x3AE52C0", VA = "0x3AE52C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public ReferenceLoopHandling? ReferenceLoopHandling
	{
		[Token(Token = "0x600088A")]
		[Address(RVA = "0x3AE52D0", Offset = "0x3AE52D0", VA = "0x3AE52D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088B")]
		[Address(RVA = "0x3AE52E0", Offset = "0x3AE52E0", VA = "0x3AE52E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public ObjectCreationHandling? ObjectCreationHandling
	{
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x3AE52F0", Offset = "0x3AE52F0", VA = "0x3AE52F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x3AE5300", Offset = "0x3AE5300", VA = "0x3AE5300")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public TypeNameHandling? TypeNameHandling
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x3AE5310", Offset = "0x3AE5310", VA = "0x3AE5310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088F")]
		[Address(RVA = "0x3AE5320", Offset = "0x3AE5320", VA = "0x3AE5320")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public Predicate<object>? ShouldSerialize
	{
		[Token(Token = "0x6000890")]
		[Address(RVA = "0x3AE5330", Offset = "0x3AE5330", VA = "0x3AE5330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x3AE5340", Offset = "0x3AE5340", VA = "0x3AE5340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public Predicate<object>? ShouldDeserialize
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x3AE5360", Offset = "0x3AE5360", VA = "0x3AE5360")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x3AE5370", Offset = "0x3AE5370", VA = "0x3AE5370")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public Predicate<object>? GetIsSpecified
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x3AE5390", Offset = "0x3AE5390", VA = "0x3AE5390")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000895")]
		[Address(RVA = "0x3AE53A0", Offset = "0x3AE53A0", VA = "0x3AE53A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public Action<object, object?>? SetIsSpecified
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x3AE53C0", Offset = "0x3AE53C0", VA = "0x3AE53C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x3AE53D0", Offset = "0x3AE53D0", VA = "0x3AE53D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x6000899")]
		[Address(RVA = "0x3AE5420", Offset = "0x3AE5420", VA = "0x3AE5420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x3AE5430", Offset = "0x3AE5430", VA = "0x3AE5430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x3AE5450", Offset = "0x3AE5450", VA = "0x3AE5450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x3AE5460", Offset = "0x3AE5460", VA = "0x3AE5460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x600089D")]
		[Address(RVA = "0x3AE5470", Offset = "0x3AE5470", VA = "0x3AE5470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x3AE5480", Offset = "0x3AE5480", VA = "0x3AE5480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x3AE5490", Offset = "0x3AE5490", VA = "0x3AE5490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x3AE54A0", Offset = "0x3AE54A0", VA = "0x3AE54A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x3AE5140", Offset = "0x3AE5140", VA = "0x3AE5140")]
	internal object? GetResolvedDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x3AE53F0", Offset = "0x3AE53F0", VA = "0x3AE53F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x3AE54B0", Offset = "0x3AE54B0", VA = "0x3AE54B0")]
	internal void WritePropertyName(JsonWriter writer)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x3AD7B30", Offset = "0x3AD7B30", VA = "0x3AD7B30")]
	public JsonProperty()
	{
	}
}
