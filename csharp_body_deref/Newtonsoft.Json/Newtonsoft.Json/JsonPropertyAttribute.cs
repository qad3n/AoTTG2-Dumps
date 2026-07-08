using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000027")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false)]
public sealed class JsonPropertyAttribute : Attribute
{
	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x10")]
	internal NullValueHandling? _nullValueHandling;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x18")]
	internal DefaultValueHandling? _defaultValueHandling;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x20")]
	internal ReferenceLoopHandling? _referenceLoopHandling;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x28")]
	internal ObjectCreationHandling? _objectCreationHandling;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x30")]
	internal TypeNameHandling? _typeNameHandling;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x38")]
	internal bool? _isReference;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x3C")]
	internal int? _order;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x44")]
	internal Required? _required;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x4C")]
	internal bool? _itemIsReference;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x50")]
	internal ReferenceLoopHandling? _itemReferenceLoopHandling;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x58")]
	internal TypeNameHandling? _itemTypeNameHandling;

	[Token(Token = "0x1700001D")]
	public Type? ItemConverterType
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x3A65330", Offset = "0x3A65330", VA = "0x3A65330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x3A65340", Offset = "0x3A65340", VA = "0x3A65340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x3A65350", Offset = "0x3A65350", VA = "0x3A65350")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x3A65360", Offset = "0x3A65360", VA = "0x3A65360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x3A65370", Offset = "0x3A65370", VA = "0x3A65370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x3A65380", Offset = "0x3A65380", VA = "0x3A65380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x3A65390", Offset = "0x3A65390", VA = "0x3A65390")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x3A653A0", Offset = "0x3A653A0", VA = "0x3A653A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public NullValueHandling NullValueHandling
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x3A653B0", Offset = "0x3A653B0", VA = "0x3A653B0")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x3A653E0", Offset = "0x3A653E0", VA = "0x3A653E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x3A65430", Offset = "0x3A65430", VA = "0x3A65430")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x3A65460", Offset = "0x3A65460", VA = "0x3A65460")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x3A654B0", Offset = "0x3A654B0", VA = "0x3A654B0")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x3A654E0", Offset = "0x3A654E0", VA = "0x3A654E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x3A65530", Offset = "0x3A65530", VA = "0x3A65530")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x3A65560", Offset = "0x3A65560", VA = "0x3A65560")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x3A655B0", Offset = "0x3A655B0", VA = "0x3A655B0")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x3A655E0", Offset = "0x3A655E0", VA = "0x3A655E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool IsReference
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x3A65630", Offset = "0x3A65630", VA = "0x3A65630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x3A65660", Offset = "0x3A65660", VA = "0x3A65660")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public int Order
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x3A656C0", Offset = "0x3A656C0", VA = "0x3A656C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x3A656F0", Offset = "0x3A656F0", VA = "0x3A656F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Required Required
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x3A65740", Offset = "0x3A65740", VA = "0x3A65740")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x3A65770", Offset = "0x3A65770", VA = "0x3A65770")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public string? PropertyName
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x3A657C0", Offset = "0x3A657C0", VA = "0x3A657C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x3A657D0", Offset = "0x3A657D0", VA = "0x3A657D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x3A657E0", Offset = "0x3A657E0", VA = "0x3A657E0")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x3A65810", Offset = "0x3A65810", VA = "0x3A65810")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x3A65860", Offset = "0x3A65860", VA = "0x3A65860")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x3A65890", Offset = "0x3A65890", VA = "0x3A65890")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool ItemIsReference
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x3A658E0", Offset = "0x3A658E0", VA = "0x3A658E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x3A65910", Offset = "0x3A65910", VA = "0x3A65910")]
		set
		{
		}
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x3A65970", Offset = "0x3A65970", VA = "0x3A65970")]
	public JsonPropertyAttribute()
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3A65980", Offset = "0x3A65980", VA = "0x3A65980")]
	public JsonPropertyAttribute(string propertyName)
	{
	}
}
