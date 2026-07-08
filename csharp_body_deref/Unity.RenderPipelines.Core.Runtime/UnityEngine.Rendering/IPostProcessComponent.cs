using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200015A")]
public interface IPostProcessComponent
{
	[Token(Token = "0x6000A77")]
	bool IsActive();

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x48AF6D0", Offset = "0x48AF6D0", VA = "0x48AF6D0", Slot = "1")]
	[Obsolete("Unused #from(2023.1)", false)]
	bool IsTileCompatible()
	{
		return default(bool);
	}
}
