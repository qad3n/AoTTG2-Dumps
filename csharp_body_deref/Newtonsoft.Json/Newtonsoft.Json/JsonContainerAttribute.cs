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
		[Address(RVA = "0x3D55000", Offset = "0x3D55000", VA = "0x3D55000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3D55010", Offset = "0x3D55010", VA = "0x3D55010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public string? Title
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3D55020", Offset = "0x3D55020", VA = "0x3D55020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3D55030", Offset = "0x3D55030", VA = "0x3D55030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public string? Description
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3D55040", Offset = "0x3D55040", VA = "0x3D55040")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3D55050", Offset = "0x3D55050", VA = "0x3D55050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Type? ItemConverterType
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3D55060", Offset = "0x3D55060", VA = "0x3D55060")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3D55070", Offset = "0x3D55070", VA = "0x3D55070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public object[]? ItemConverterParameters
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3D55080", Offset = "0x3D55080", VA = "0x3D55080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x3D55090", Offset = "0x3D55090", VA = "0x3D55090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Type? NamingStrategyType
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x3D550A0", Offset = "0x3D550A0", VA = "0x3D550A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x3D550B0", Offset = "0x3D550B0", VA = "0x3D550B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public object[]? NamingStrategyParameters
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x3D550E0", Offset = "0x3D550E0", VA = "0x3D550E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3D550F0", Offset = "0x3D550F0", VA = "0x3D550F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	internal NamingStrategy? NamingStrategyInstance
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3D55120", Offset = "0x3D55120", VA = "0x3D55120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3D55130", Offset = "0x3D55130", VA = "0x3D55130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsReference
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3D55140", Offset = "0x3D55140", VA = "0x3D55140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3D55170", Offset = "0x3D55170", VA = "0x3D55170")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool ItemIsReference
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3D551D0", Offset = "0x3D551D0", VA = "0x3D551D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3D55200", Offset = "0x3D55200", VA = "0x3D55200")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ReferenceLoopHandling ItemReferenceLoopHandling
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3D55260", Offset = "0x3D55260", VA = "0x3D55260")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3D55290", Offset = "0x3D55290", VA = "0x3D55290")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public TypeNameHandling ItemTypeNameHandling
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3D552E0", Offset = "0x3D552E0", VA = "0x3D552E0")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3D55310", Offset = "0x3D55310", VA = "0x3D55310")]
		set
		{
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3D54F60", Offset = "0x3D54F60", VA = "0x3D54F60")]
	protected JsonContainerAttribute()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3D54FC0", Offset = "0x3D54FC0", VA = "0x3D54FC0")]
	protected JsonContainerAttribute(string id)
	{
	}
}
