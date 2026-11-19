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
		[Address(RVA = "0x55CFF90", Offset = "0x55CEF90", VA = "0x55CFF90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x55CFFA0", Offset = "0x55CEFA0", VA = "0x55CFFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	internal JsonContract? FinalItemContract
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x55D0030", Offset = "0x55CF030", VA = "0x55D0030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x55D0040", Offset = "0x55CF040", VA = "0x55D0040")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x55D0050", Offset = "0x55CF050", VA = "0x55D0050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x55D0070", Offset = "0x55CF070", VA = "0x55D0070")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x55D0080", Offset = "0x55CF080", VA = "0x55D0080")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x55D0090", Offset = "0x55CF090", VA = "0x55D0090")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x55D00A0", Offset = "0x55CF0A0", VA = "0x55D00A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x55D00B0", Offset = "0x55CF0B0", VA = "0x55D00B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x55D00C0", Offset = "0x55CF0C0", VA = "0x55D00C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x55CF500", Offset = "0x55CE500", VA = "0x55CF500")]
	internal JsonContainerContract(Type underlyingType)
	{
	}
}
