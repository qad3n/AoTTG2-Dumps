// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.DependencyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x20004A7")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public sealed class DependencyAttribute : Attribute
{
	[Token(Token = "0x4001296")]
	[FieldOffset(Offset = "0x10")]
	private string dependentAssembly;

	[Token(Token = "0x4001297")]
	[FieldOffset(Offset = "0x18")]
	private LoadHint loadHint;

	[Token(Token = "0x6002346")]
	[Address(RVA = "0x53CB9E0", Offset = "0x53CA9E0", VA = "0x53CB9E0")]
	public DependencyAttribute(string dependentAssemblyArgument, LoadHint loadHintArgument)
	{
	}
}
