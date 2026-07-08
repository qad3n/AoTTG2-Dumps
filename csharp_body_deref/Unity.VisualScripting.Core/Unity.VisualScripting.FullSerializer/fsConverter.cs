using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000205")]
public abstract class fsConverter : fsBaseConverter
{
	[Token(Token = "0x600123A")]
	public abstract bool CanProcess(Type type);

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x4A48FC0", Offset = "0x4A48FC0", VA = "0x4A48FC0")]
	protected fsConverter()
	{
	}
}
