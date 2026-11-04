// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateFileWatcher.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000208")]
internal sealed class AottgGameCreateFileWatcher : MonoBehaviour
{
	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x23C5030", Offset = "0x23C3630", VA = "0x1823C5030")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x23C4F10", Offset = "0x23C3510", VA = "0x1823C4F10")]
	private void OnCustomContentChanged(object sender, FileSystemEventArgs args)
	{
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGameCreateFileWatcher()
	{
	}
}
