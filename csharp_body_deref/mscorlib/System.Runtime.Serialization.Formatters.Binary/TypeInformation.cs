// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.TypeInformation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200044F")]
internal sealed class TypeInformation
{
	[Token(Token = "0x400118C")]
	[FieldOffset(Offset = "0x10")]
	private string fullTypeName;

	[Token(Token = "0x400118D")]
	[FieldOffset(Offset = "0x18")]
	private string assemblyString;

	[Token(Token = "0x400118E")]
	[FieldOffset(Offset = "0x20")]
	private bool hasTypeForwardedFrom;

	[Token(Token = "0x17000451")]
	internal string FullTypeName
	{
		[Token(Token = "0x600217B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000452")]
	internal string AssemblyString
	{
		[Token(Token = "0x600217C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	internal bool HasTypeForwardedFrom
	{
		[Token(Token = "0x600217D")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x1A1E5E0", Offset = "0x1A1CBE0", VA = "0x181A1E5E0")]
	internal TypeInformation(string fullTypeName, string assemblyString, bool hasTypeForwardedFrom)
	{
	}
}
