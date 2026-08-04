// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.DataContractAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000002")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum, Inherited = false, AllowMultiple = false)]
public sealed class DataContractAttribute : Attribute
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	private bool isReference;

	[Token(Token = "0x17000001")]
	public bool IsReference
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4678300", Offset = "0x4678300", VA = "0x4678300")]
		get
		{
			return default(bool);
		}
	}
}
