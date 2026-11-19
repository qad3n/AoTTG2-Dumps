// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Multiplayer.PlayMode.CurrentPlayer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

namespace Unity.Multiplayer.PlayMode;

[Token(Token = "0x2000003")]
[MovedFrom(true, "Unity.Multiplayer.Playmode", "Unity.Multiplayer.Playmode", null)]
public static class CurrentPlayer
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private static CurrentPlayerApi s_CurrentPlayerApi;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x69C18B0", Offset = "0x69C08B0", VA = "0x69C18B0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void ReloadLatestTagsOnEnterPlaymode()
	{
	}
}
