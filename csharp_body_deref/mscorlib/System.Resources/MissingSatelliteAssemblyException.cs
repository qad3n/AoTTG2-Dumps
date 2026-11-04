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
[Token(Token = "0x20004DD")]
public class MissingSatelliteAssemblyException : SystemException
{
	[Token(Token = "0x4001346")]
	[FieldOffset(Offset = "0x90")]
	private string _cultureName;

	[Token(Token = "0x60023BA")]
	[Address(RVA = "0x1A4B130", Offset = "0x1A49730", VA = "0x181A4B130")]
	public MissingSatelliteAssemblyException()
	{
	}

	[Token(Token = "0x60023BB")]
	[Address(RVA = "0x1A4B0F0", Offset = "0x1A496F0", VA = "0x181A4B0F0")]
	public MissingSatelliteAssemblyException(string message, string cultureName)
	{
	}

	[Token(Token = "0x60023BC")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected MissingSatelliteAssemblyException(SerializationInfo info, StreamingContext context)
	{
	}
}
