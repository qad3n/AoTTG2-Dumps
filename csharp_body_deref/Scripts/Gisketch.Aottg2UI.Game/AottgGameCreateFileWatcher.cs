// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateFileWatcher.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000223")]
internal sealed class AottgGameCreateFileWatcher : MonoBehaviour
{
	[Token(Token = "0x4000B65")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x5D935D0", Offset = "0x5D925D0", VA = "0x5D935D0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x5D937C0", Offset = "0x5D927C0", VA = "0x5D937C0")]
	private void OnCustomContentChanged(object sender, FileSystemEventArgs args)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x5D938F0", Offset = "0x5D928F0", VA = "0x5D938F0")]
	public AottgGameCreateFileWatcher()
	{
	}
}
