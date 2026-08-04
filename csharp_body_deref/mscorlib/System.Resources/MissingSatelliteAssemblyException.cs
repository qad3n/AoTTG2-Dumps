// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.MissingSatelliteAssemblyException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Resources;

[Serializable]
[Token(Token = "0x20004AD")]
public class MissingSatelliteAssemblyException : SystemException
{
	[Token(Token = "0x4001346")]
	[FieldOffset(Offset = "0x90")]
	private string _cultureName;

	[Token(Token = "0x6002338")]
	[Address(RVA = "0x3BC42E0", Offset = "0x3BC42E0", VA = "0x3BC42E0")]
	public MissingSatelliteAssemblyException()
	{
	}

	[Token(Token = "0x6002339")]
	[Address(RVA = "0x3BC4320", Offset = "0x3BC4320", VA = "0x3BC4320")]
	public MissingSatelliteAssemblyException(string message, string cultureName)
	{
	}

	[Token(Token = "0x600233A")]
	[Address(RVA = "0x3BC4360", Offset = "0x3BC4360", VA = "0x3BC4360")]
	protected MissingSatelliteAssemblyException(SerializationInfo info, StreamingContext context)
	{
	}
}
