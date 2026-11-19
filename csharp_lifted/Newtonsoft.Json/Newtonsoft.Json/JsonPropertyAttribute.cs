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
		[Address(RVA = "0x555BF10", Offset = "0x555AF10", VA = "0x555BF10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x555BF20", Offset = "0x555AF20", VA = "0x555BF20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x555BF30", Offset = "0x555AF30", VA = "0x555BF30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x555BF40", Offset = "0x555AF40", VA = "0x555BF40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x555BF50", Offset = "0x555AF50", VA = "0x555BF50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x555BF60", Offset = "0x555AF60", VA = "0x555BF60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x555BF70", Offset = "0x555AF70", VA = "0x555BF70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x555BF80", Offset = "0x555AF80", VA = "0x555BF80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public NullValueHandling NullValueHandling
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x555BF90", Offset = "0x555AF90", VA = "0x555BF90")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x555BFC0", Offset = "0x555AFC0", VA = "0x555BFC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x555C010", Offset = "0x555B010", VA = "0x555C010")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x555C040", Offset = "0x555B040", VA = "0x555C040")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x555C090", Offset = "0x555B090", VA = "0x555C090")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x555C0C0", Offset = "0x555B0C0", VA = "0x555C0C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x555C110", Offset = "0x555B110", VA = "0x555C110")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x555C140", Offset = "0x555B140", VA = "0x555C140")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x555C190", Offset = "0x555B190", VA = "0x555C190")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x555C1C0", Offset = "0x555B1C0", VA = "0x555C1C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool IsReference
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x555C210", Offset = "0x555B210", VA = "0x555C210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x555C240", Offset = "0x555B240", VA = "0x555C240")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public int Order
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x555C290", Offset = "0x555B290", VA = "0x555C290")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x555C2C0", Offset = "0x555B2C0", VA = "0x555C2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Required Required
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x555C310", Offset = "0x555B310", VA = "0x555C310")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x555C340", Offset = "0x555B340", VA = "0x555C340")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public string? PropertyName
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x555C390", Offset = "0x555B390", VA = "0x555C390")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x555C3A0", Offset = "0x555B3A0", VA = "0x555C3A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x555C3B0", Offset = "0x555B3B0", VA = "0x555C3B0")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x555C3E0", Offset = "0x555B3E0", VA = "0x555C3E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x555C430", Offset = "0x555B430", VA = "0x555C430")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x555C460", Offset = "0x555B460", VA = "0x555C460")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool ItemIsReference
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x555C4B0", Offset = "0x555B4B0", VA = "0x555C4B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x555C4E0", Offset = "0x555B4E0", VA = "0x555C4E0")]
		set
		{
		}
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x555C530", Offset = "0x555B530", VA = "0x555C530")]
	public JsonPropertyAttribute()
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x555C540", Offset = "0x555B540", VA = "0x555C540")]
	public JsonPropertyAttribute(string propertyName)
	{
	}
}
