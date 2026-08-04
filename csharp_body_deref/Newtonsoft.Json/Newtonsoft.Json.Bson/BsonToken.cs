// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonToken
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DA")]
internal abstract class BsonToken
{
	[Token(Token = "0x170002B1")]
	public abstract BsonType Type
	{
		[Token(Token = "0x6001000")]
		get;
	}

	[Token(Token = "0x170002B2")]
	public BsonToken Parent
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x3E5A3A0", Offset = "0x3E5A3A0", VA = "0x3E5A3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x3E5A3B0", Offset = "0x3E5A3B0", VA = "0x3E5A3B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002B3")]
	public int CalculatedSize
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0x3E5A3C0", Offset = "0x3E5A3C0", VA = "0x3E5A3C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x3E5A3D0", Offset = "0x3E5A3D0", VA = "0x3E5A3D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x3E5A3E0", Offset = "0x3E5A3E0", VA = "0x3E5A3E0")]
	protected BsonToken()
	{
	}
}
