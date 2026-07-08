using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Video;

[Token(Token = "0x2000007")]
[Obsolete("VideoTimeSource is deprecated. Use TimeUpdateMode instead. (UnityUpgradable) -> VideoTimeUpdateMode")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum VideoTimeSource
{
	[Token(Token = "0x4000014")]
	[Obsolete("AudioDSPTimeSource is deprecated. Use DSPTime instead. (UnityUpgradable) -> DSPTime")]
	AudioDSPTimeSource,
	[Token(Token = "0x4000015")]
	[Obsolete("GameTimeSource is deprecated. Use GameTime instead. (UnityUpgradable) -> GameTime")]
	GameTimeSource
}
