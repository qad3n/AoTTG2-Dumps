using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x2000327")]
public interface IComponentChangeService
{
	[Token(Token = "0x6001512")]
	void OnComponentChanged(object component, MemberDescriptor member, object oldValue, object newValue);

	[Token(Token = "0x6001513")]
	void OnComponentChanging(object component, MemberDescriptor member);
}
