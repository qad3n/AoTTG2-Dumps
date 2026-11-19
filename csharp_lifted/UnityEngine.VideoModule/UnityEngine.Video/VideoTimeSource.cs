// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Video.VideoTimeSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
