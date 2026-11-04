// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.IComponentChangeService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x2000232")]
public interface IComponentChangeService
{
	[Token(Token = "0x6000F5A")]
	void OnComponentChanged(object component, MemberDescriptor member, object oldValue, object newValue);

	[Token(Token = "0x6000F5B")]
	void OnComponentChanging(object component, MemberDescriptor member);
}
