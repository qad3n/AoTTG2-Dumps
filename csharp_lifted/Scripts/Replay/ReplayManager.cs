// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayManager.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Replay;

[Token(Token = "0x2000068")]
internal class ReplayManager : MonoBehaviour
{
	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x0")]
	private static ReplayManager _instance;

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x576E430", Offset = "0x576D430", VA = "0x576E430")]
	public static void Init()
	{
		// Lifted from source/cpp/Replay/ReplayManager.c (Replay.ReplayManager$$Init): clean
		ReplayManager pRVar1;

		pRVar1 = SingletonFactory.CreateSingleton<ReplayManager>((object)ReplayManager._instance) ;
		ReplayManager._instance = pRVar1;
		return;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x576E4A0", Offset = "0x576D4A0", VA = "0x576E4A0")]
	public ReplayManager()
	{
		// Lifted from source/cpp/Replay/ReplayManager.c (Replay.ReplayManager$$.ctor): clean
		base();
		return;
	}
}
