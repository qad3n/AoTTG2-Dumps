// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.TypeInformation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000420")]
internal sealed class TypeInformation
{
	[Token(Token = "0x400118A")]
	[FieldOffset(Offset = "0x10")]
	private string fullTypeName;

	[Token(Token = "0x400118B")]
	[FieldOffset(Offset = "0x18")]
	private string assemblyString;

	[Token(Token = "0x400118C")]
	[FieldOffset(Offset = "0x20")]
	private bool hasTypeForwardedFrom;

	[Token(Token = "0x1700044F")]
	internal string FullTypeName
	{
		[Token(Token = "0x600210C")]
		[Address(RVA = "0x3BADE60", Offset = "0x3BADE60", VA = "0x3BADE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000450")]
	internal string AssemblyString
	{
		[Token(Token = "0x600210D")]
		[Address(RVA = "0x3BADE70", Offset = "0x3BADE70", VA = "0x3BADE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000451")]
	internal bool HasTypeForwardedFrom
	{
		[Token(Token = "0x600210E")]
		[Address(RVA = "0x3BADE80", Offset = "0x3BADE80", VA = "0x3BADE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600210F")]
	[Address(RVA = "0x3BA90E0", Offset = "0x3BA90E0", VA = "0x3BA90E0")]
	internal TypeInformation(string fullTypeName, string assemblyString, bool hasTypeForwardedFrom)
	{
	}
}
