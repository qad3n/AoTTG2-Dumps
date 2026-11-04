// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public NullValueHandling NullValueHandling
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x1BCE130", Offset = "0x1BCC730", VA = "0x181BCE130")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x1BCE490", Offset = "0x1BCCA90", VA = "0x181BCE490")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x1BCDFF0", Offset = "0x1BCC5F0", VA = "0x181BCDFF0")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x1BCE2B0", Offset = "0x1BCC8B0", VA = "0x181BCE2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x1BCE1F0", Offset = "0x1BCC7F0", VA = "0x181BCE1F0")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x1BCE5B0", Offset = "0x1BCCBB0", VA = "0x181BCE5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x1BCE170", Offset = "0x1BCC770", VA = "0x181BCE170")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x1BCE4F0", Offset = "0x1BCCAF0", VA = "0x181BCE4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x1BCE270", Offset = "0x1BCC870", VA = "0x181BCE270")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x1BCE670", Offset = "0x1BCCC70", VA = "0x181BCE670")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool IsReference
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x1BCE030", Offset = "0x1BCC630", VA = "0x181BCE030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x1BCE310", Offset = "0x1BCC910", VA = "0x181BCE310")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public int Order
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x1BCE1B0", Offset = "0x1BCC7B0", VA = "0x181BCE1B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x1BCE550", Offset = "0x1BCCB50", VA = "0x181BCE550")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Required Required
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x1BCE230", Offset = "0x1BCC830", VA = "0x181BCE230")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x1BCE610", Offset = "0x1BCCC10", VA = "0x181BCE610")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public string? PropertyName
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x1BCE0B0", Offset = "0x1BCC6B0", VA = "0x181BCE0B0")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x1BCE3D0", Offset = "0x1BCC9D0", VA = "0x181BCE3D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x1BCE0F0", Offset = "0x1BCC6F0", VA = "0x181BCE0F0")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x1BCE430", Offset = "0x1BCCA30", VA = "0x181BCE430")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool ItemIsReference
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x1BCE070", Offset = "0x1BCC670", VA = "0x181BCE070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x1BCE370", Offset = "0x1BCC970", VA = "0x181BCE370")]
		set
		{
		}
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public JsonPropertyAttribute()
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x1BCDFB0", Offset = "0x1BCC5B0", VA = "0x181BCDFB0")]
	public JsonPropertyAttribute(string propertyName)
	{
	}
}
