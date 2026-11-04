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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public string? Title
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string? Description
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Type? ItemConverterType
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x1BC8540", Offset = "0x1BC6B40", VA = "0x181BC8540")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x1BC8510", Offset = "0x1BC6B10", VA = "0x181BC8510")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	internal NamingStrategy? NamingStrategyInstance
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsReference
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x1BC8290", Offset = "0x1BC6890", VA = "0x181BC8290")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x1BC8390", Offset = "0x1BC6990", VA = "0x181BC8390")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool ItemIsReference
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x1BC82D0", Offset = "0x1BC68D0", VA = "0x181BC82D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1BC83F0", Offset = "0x1BC69F0", VA = "0x181BC83F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x1BC8310", Offset = "0x1BC6910", VA = "0x181BC8310")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x1BC8450", Offset = "0x1BC6A50", VA = "0x181BC8450")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1BC8350", Offset = "0x1BC6950", VA = "0x181BC8350")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x1BC84B0", Offset = "0x1BC6AB0", VA = "0x181BC84B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected JsonContainerAttribute()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	protected JsonContainerAttribute(string id)
	{
	}
}
