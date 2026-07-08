using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x200032D")]
public interface ITypeDescriptorFilterService
{
	[Token(Token = "0x600151C")]
	bool FilterAttributes(IComponent component, IDictionary attributes);

	[Token(Token = "0x600151D")]
	bool FilterEvents(IComponent component, IDictionary events);

	[Token(Token = "0x600151E")]
	bool FilterProperties(IComponent component, IDictionary properties);
}
