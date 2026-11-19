// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonContainerAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json;

[Token(Token = "0x2000019")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = false)]
public abstract class JsonContainerAttribute : Attribute
{
	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x40")]
	internal bool? _isReference;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x42")]
	internal bool? _itemIsReference;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x44")]
	internal ReferenceLoopHandling? _itemReferenceLoopHandling;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x4C")]
	internal TypeNameHandling? _itemTypeNameHandling;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x58")]
	private Type? _namingStrategyType;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x60")]
	private object[]? _namingStrategyParameters;

	[Token(Token = "0x17000006")]
	public string? Id
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x55564E0", Offset = "0x55554E0", VA = "0x55564E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x55564F0", Offset = "0x55554F0", VA = "0x55564F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public string? Title
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x5556500", Offset = "0x5555500", VA = "0x5556500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x5556510", Offset = "0x5555510", VA = "0x5556510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string? Description
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5556520", Offset = "0x5555520", VA = "0x5556520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x5556530", Offset = "0x5555530", VA = "0x5556530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Type? ItemConverterType
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x5556540", Offset = "0x5555540", VA = "0x5556540")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5556550", Offset = "0x5555550", VA = "0x5556550")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x5556560", Offset = "0x5555560", VA = "0x5556560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x5556570", Offset = "0x5555570", VA = "0x5556570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x5556580", Offset = "0x5555580", VA = "0x5556580")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x5556590", Offset = "0x5555590", VA = "0x5556590")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x55565C0", Offset = "0x55555C0", VA = "0x55565C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x55565D0", Offset = "0x55555D0", VA = "0x55565D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	internal NamingStrategy? NamingStrategyInstance
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x5556600", Offset = "0x5555600", VA = "0x5556600")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x5556610", Offset = "0x5555610", VA = "0x5556610")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsReference
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x5556620", Offset = "0x5555620", VA = "0x5556620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5556650", Offset = "0x5555650", VA = "0x5556650")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool ItemIsReference
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x55566A0", Offset = "0x55556A0", VA = "0x55566A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x55566D0", Offset = "0x55556D0", VA = "0x55566D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x5556720", Offset = "0x5555720", VA = "0x5556720")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x5556750", Offset = "0x5555750", VA = "0x5556750")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x55567A0", Offset = "0x55557A0", VA = "0x55567A0")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x55567D0", Offset = "0x55557D0", VA = "0x55567D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5556440", Offset = "0x5555440", VA = "0x5556440")]
	protected JsonContainerAttribute()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x55564A0", Offset = "0x55554A0", VA = "0x55564A0")]
	protected JsonContainerAttribute(string id)
	{
	}
}
