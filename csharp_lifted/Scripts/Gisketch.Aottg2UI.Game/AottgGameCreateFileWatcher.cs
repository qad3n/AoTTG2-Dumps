// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateFileWatcher.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateFileWatcher.c (Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher$$Setup): 4 lines keep C-only constructs
		GameObject __this_00;
		FileWatcherExtension __this_01;
		FileSystemEventHandler pSVar1;
		RenamedEventHandler __this_02;

		this._root = root;
		__this_00 = this.gameObject;
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<FileWatcherExtension>();
			if (__this_01 != null) {
				__this_01.NotifyFilter = 0x13;
				__this_01.IncludeSubdirectories = true;
				pSVar1 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged);
				__this_01.add_Changed(pSVar1);
				pSVar1 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged);
				__this_01.add_Created(pSVar1);
				pSVar1 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged);
				__this_01.add_Deleted(pSVar1);
				__this_02 = new RenamedEventHandler((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged);
				__this_01.add_Renamed(__this_02);
				__this_01.AddWatcher(BuiltinLevels.CustomMapFolderPath);
				__this_01.AddWatcher(BuiltinLevels.CustomLogicFolderPath) ;
				__this_01.AddWatcher(BuiltinLevels.CustomAddonFolderPath) ;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x5D937C0", Offset = "0x5D927C0", VA = "0x5D937C0")]
	private void OnCustomContentChanged(object sender, FileSystemEventArgs args)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateFileWatcher.c (Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher$$OnCustomContentChanged): clean
		GisketchUIRoot pGVar1;
		GisketchScreenRouter pGVar2;
		bool bVar3;

		pGVar1 = this._root;
		bVar3 = ((Object)pGVar1 == null);
		if (!bVar3) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar2 = pGVar1._Screens_k__BackingField;
			if ((pGVar2 != null) &&(bVar3 = (pGVar2._activeId != "game-create"), !bVar3)) {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = AottgGameCreateSession.IsSandbox;
				}
				else {
					bVar3 = AottgGameCreateSession.IsSandbox;
				}
				if (bVar3) {
					if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
					}
					AottgGameCreateSession.RefreshSandboxContent();
					pGVar1 = this._root;
					AottgGameCreateScreen.Refresh(pGVar1);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x5D938F0", Offset = "0x5D928F0", VA = "0x5D938F0")]
	public AottgGameCreateFileWatcher()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateFileWatcher.c (Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher$$.ctor): clean
		base();
		return;
	}
}
