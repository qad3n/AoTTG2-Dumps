using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F7")]
public interface IDebugDisplaySettings
{
	[Token(Token = "0x6000829")]
	void Reset();

	[Token(Token = "0x600082A")]
	void ForEach(Action<IDebugDisplaySettingsData> onExecute);
}
