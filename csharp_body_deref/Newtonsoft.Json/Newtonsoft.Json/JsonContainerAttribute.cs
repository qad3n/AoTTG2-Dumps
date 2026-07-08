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
		[Address(RVA = "0x3A5F6B0", Offset = "0x3A5F6B0", VA = "0x3A5F6B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3A5F6C0", Offset = "0x3A5F6C0", VA = "0x3A5F6C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public string? Title
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3A5F6D0", Offset = "0x3A5F6D0", VA = "0x3A5F6D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3A5F6E0", Offset = "0x3A5F6E0", VA = "0x3A5F6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string? Description
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3A5F6F0", Offset = "0x3A5F6F0", VA = "0x3A5F6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3A5F700", Offset = "0x3A5F700", VA = "0x3A5F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Type? ItemConverterType
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3A5F710", Offset = "0x3A5F710", VA = "0x3A5F710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3A5F720", Offset = "0x3A5F720", VA = "0x3A5F720")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3A5F730", Offset = "0x3A5F730", VA = "0x3A5F730")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x3A5F740", Offset = "0x3A5F740", VA = "0x3A5F740")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x3A5F750", Offset = "0x3A5F750", VA = "0x3A5F750")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x3A5F760", Offset = "0x3A5F760", VA = "0x3A5F760")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x3A5F790", Offset = "0x3A5F790", VA = "0x3A5F790")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3A5F7A0", Offset = "0x3A5F7A0", VA = "0x3A5F7A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	internal NamingStrategy? NamingStrategyInstance
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3A5F7D0", Offset = "0x3A5F7D0", VA = "0x3A5F7D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3A5F7E0", Offset = "0x3A5F7E0", VA = "0x3A5F7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsReference
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3A5F7F0", Offset = "0x3A5F7F0", VA = "0x3A5F7F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3A5F820", Offset = "0x3A5F820", VA = "0x3A5F820")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool ItemIsReference
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3A5F880", Offset = "0x3A5F880", VA = "0x3A5F880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3A5F8B0", Offset = "0x3A5F8B0", VA = "0x3A5F8B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3A5F910", Offset = "0x3A5F910", VA = "0x3A5F910")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3A5F940", Offset = "0x3A5F940", VA = "0x3A5F940")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3A5F990", Offset = "0x3A5F990", VA = "0x3A5F990")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3A5F9C0", Offset = "0x3A5F9C0", VA = "0x3A5F9C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3A5F610", Offset = "0x3A5F610", VA = "0x3A5F610")]
	protected JsonContainerAttribute()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3A5F670", Offset = "0x3A5F670", VA = "0x3A5F670")]
	protected JsonContainerAttribute(string id)
	{
	}
}
