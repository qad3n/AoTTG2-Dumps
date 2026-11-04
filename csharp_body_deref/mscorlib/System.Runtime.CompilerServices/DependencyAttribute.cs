// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.DependencyAttribute
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x20004CE")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public sealed class DependencyAttribute : Attribute
{
	[Token(Token = "0x4001336")]
	[FieldOffset(Offset = "0x10")]
	private string dependentAssembly;

	[Token(Token = "0x4001337")]
	[FieldOffset(Offset = "0x18")]
	private LoadHint loadHint;

	[Token(Token = "0x6002379")]
	[Address(RVA = "0x1A2A540", Offset = "0x1A28B40", VA = "0x181A2A540")]
	public DependencyAttribute(string dependentAssemblyArgument, LoadHint loadHintArgument)
	{
	}
}
