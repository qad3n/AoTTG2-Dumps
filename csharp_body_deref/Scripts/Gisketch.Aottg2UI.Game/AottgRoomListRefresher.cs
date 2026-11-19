// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomListRefresher
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DA")]
internal sealed class AottgRoomListRefresher : MonoBehaviour
{
	[Token(Token = "0x4000E6C")]
	public const string NodeType = "AottgRoomListRefresher";

	[Token(Token = "0x4000E6D")]
	private const float RefreshSeconds = 5f;

	[Token(Token = "0x4000E6E")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000E6F")]
	[FieldOffset(Offset = "0x20")]
	private float _nextRefresh;

	[Token(Token = "0x4000E70")]
	[FieldOffset(Offset = "0x24")]
	private bool _roomListReceived;

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x57D1620", Offset = "0x57D0620", VA = "0x57D1620")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x57D1CA0", Offset = "0x57D0CA0", VA = "0x57D1CA0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x57D1D00", Offset = "0x57D0D00", VA = "0x57D1D00")]
	private void Update()
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x57D1DC0", Offset = "0x57D0DC0", VA = "0x57D1DC0")]
	public AottgRoomListRefresher()
	{
	}
}
