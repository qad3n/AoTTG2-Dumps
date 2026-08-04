// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonContainerContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3DD7830", Offset = "0x3DD7830", VA = "0x3DD7830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x3DD7840", Offset = "0x3DD7840", VA = "0x3DD7840")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	internal JsonContract? FinalItemContract
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x3DD78D0", Offset = "0x3DD78D0", VA = "0x3DD78D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x3DD78E0", Offset = "0x3DD78E0", VA = "0x3DD78E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x3DD78F0", Offset = "0x3DD78F0", VA = "0x3DD78F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x3DD7910", Offset = "0x3DD7910", VA = "0x3DD7910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x3DD7920", Offset = "0x3DD7920", VA = "0x3DD7920")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x3DD7930", Offset = "0x3DD7930", VA = "0x3DD7930")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x3DD7940", Offset = "0x3DD7940", VA = "0x3DD7940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x3DD7950", Offset = "0x3DD7950", VA = "0x3DD7950")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x3DD7960", Offset = "0x3DD7960", VA = "0x3DD7960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x3DD6D80", Offset = "0x3DD6D80", VA = "0x3DD6D80")]
	internal JsonContainerContract(Type underlyingType)
	{
	}
}
