// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.TypeInformation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000428")]
internal sealed class TypeInformation
{
	[Token(Token = "0x40010EC")]
	[FieldOffset(Offset = "0x10")]
	private string fullTypeName;

	[Token(Token = "0x40010ED")]
	[FieldOffset(Offset = "0x18")]
	private string assemblyString;

	[Token(Token = "0x40010EE")]
	[FieldOffset(Offset = "0x20")]
	private bool hasTypeForwardedFrom;

	[Token(Token = "0x17000450")]
	internal string FullTypeName
	{
		[Token(Token = "0x6002151")]
		[Address(RVA = "0x53B5090", Offset = "0x53B4090", VA = "0x53B5090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000451")]
	internal string AssemblyString
	{
		[Token(Token = "0x6002152")]
		[Address(RVA = "0x53B50A0", Offset = "0x53B40A0", VA = "0x53B50A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000452")]
	internal bool HasTypeForwardedFrom
	{
		[Token(Token = "0x6002153")]
		[Address(RVA = "0x53B50B0", Offset = "0x53B40B0", VA = "0x53B50B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002154")]
	[Address(RVA = "0x53B0220", Offset = "0x53AF220", VA = "0x53B0220")]
	internal TypeInformation(string fullTypeName, string assemblyString, bool hasTypeForwardedFrom)
	{
	}
}
