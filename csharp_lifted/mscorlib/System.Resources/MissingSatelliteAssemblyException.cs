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
[Token(Token = "0x20004B6")]
public class MissingSatelliteAssemblyException : SystemException
{
	[Token(Token = "0x40012A6")]
	[FieldOffset(Offset = "0x90")]
	private string _cultureName;

	[Token(Token = "0x6002388")]
	[Address(RVA = "0x53CBD30", Offset = "0x53CAD30", VA = "0x53CBD30")]
	public MissingSatelliteAssemblyException()
	{
	}

	[Token(Token = "0x6002389")]
	[Address(RVA = "0x53CBD70", Offset = "0x53CAD70", VA = "0x53CBD70")]
	public MissingSatelliteAssemblyException(string message, string cultureName)
	{
	}

	[Token(Token = "0x600238A")]
	[Address(RVA = "0x53CBDB0", Offset = "0x53CADB0", VA = "0x53CBDB0")]
	protected MissingSatelliteAssemblyException(SerializationInfo info, StreamingContext context)
	{
	}
}
