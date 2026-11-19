// ==================== AoTTG2 cross-reference ====================
// Type: Utility.GUICallback
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/GUICallback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200092E")]
internal class GUICallback : MonoBehaviour
{
	[Token(Token = "0x4002E38")]
	[FieldOffset(Offset = "0x20")]
	private Action _draw;

	[Token(Token = "0x60056A2")]
	[Address(RVA = "0x5CEF4B0", Offset = "0x5CEE4B0", VA = "0x5CEF4B0")]
	public static GUICallback Create(GameObject owner, Action draw)
	{
		return null;
	}

	[Token(Token = "0x60056A3")]
	[Address(RVA = "0x5CEF530", Offset = "0x5CEE530", VA = "0x5CEF530")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x60056A4")]
	[Address(RVA = "0x5CEF550", Offset = "0x5CEE550", VA = "0x5CEF550")]
	public GUICallback()
	{
	}
}
