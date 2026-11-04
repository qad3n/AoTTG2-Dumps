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
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x1C3FBE0", Offset = "0x1C3E1E0", VA = "0x181C3FBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	internal JsonContract? FinalItemContract
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x1C3FBB0", Offset = "0x1C3E1B0", VA = "0x181C3FBB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x1C3FC50", Offset = "0x1C3E250", VA = "0x181C3FC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x1C3FBC0", Offset = "0x1C3E1C0", VA = "0x181C3FBC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x1C3FC60", Offset = "0x1C3E260", VA = "0x181C3FC60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x1C3FBD0", Offset = "0x1C3E1D0", VA = "0x181C3FBD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x1C3FC70", Offset = "0x1C3E270", VA = "0x181C3FC70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x1C3FA80", Offset = "0x1C3E080", VA = "0x181C3FA80")]
	internal JsonContainerContract(Type underlyingType)
	{
	}
}
