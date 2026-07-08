using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000113")]
public class JsonContainerContract : JsonContract
{
	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x90")]
	private JsonContract? _itemContract;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x98")]
	private JsonContract? _finalItemContract;

	[Token(Token = "0x17000102")]
	internal JsonContract? ItemContract
	{
		[Token(Token = "0x60007DC")]
		[Address(RVA = "0x3AE1EE0", Offset = "0x3AE1EE0", VA = "0x3AE1EE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x3AE1EF0", Offset = "0x3AE1EF0", VA = "0x3AE1EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	internal JsonContract? FinalItemContract
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x3AE1F80", Offset = "0x3AE1F80", VA = "0x3AE1F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x3AE1F90", Offset = "0x3AE1F90", VA = "0x3AE1F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x3AE1FA0", Offset = "0x3AE1FA0", VA = "0x3AE1FA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x3AE1FC0", Offset = "0x3AE1FC0", VA = "0x3AE1FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x3AE1FD0", Offset = "0x3AE1FD0", VA = "0x3AE1FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x3AE1FE0", Offset = "0x3AE1FE0", VA = "0x3AE1FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x3AE1FF0", Offset = "0x3AE1FF0", VA = "0x3AE1FF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x3AE2000", Offset = "0x3AE2000", VA = "0x3AE2000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x3AE2010", Offset = "0x3AE2010", VA = "0x3AE2010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x3AE1430", Offset = "0x3AE1430", VA = "0x3AE1430")]
	internal JsonContainerContract(Type underlyingType)
	{
	}
}
