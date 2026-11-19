// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.MiscInfo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/MiscInfo.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MiscInfo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000980")]
public class MiscInfo : MonoBehaviour
{
	[Token(Token = "0x4002FEA")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Social;

	[Token(Token = "0x4002FEB")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode Help;

	[Token(Token = "0x4002FEC")]
	[FieldOffset(Offset = "0x10")]
	public static JSONNode Credits;

	[Token(Token = "0x60058D8")]
	[Address(RVA = "0x5D09D20", Offset = "0x5D08D20", VA = "0x5D09D20")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/MiscInfo.c (ApplicationManagers.MiscInfo$$Init): clean
		ApplicationManagers_MiscInfo_StaticFields pAVar1;
		String pSVar2;
		JSONNode pSVar3;

		if ((typeof(ResourcePaths)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = ResourcePaths.Info;
		if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = ResourceManager.TryLoadText(pSVar2, "SocialInfo");
		pSVar3 = JSON.Parse(pSVar2);
		MiscInfo.Social = pSVar3;
		pSVar2 = ResourceManager.TryLoadText(ResourcePaths.Info, "HelpInfo");
		pSVar3 = JSON.Parse(pSVar2);
		pAVar1 = typeof(MiscInfo).static_fields;
		pAVar1.Help = pSVar3;
		pSVar2 = ResourceManager.TryLoadText(ResourcePaths.Info, "CreditsInfo");
		pSVar3 = JSON.Parse(pSVar2);
		pAVar1 = typeof(MiscInfo).static_fields;
		pAVar1.Credits = pSVar3;
		return;
	}

	[Token(Token = "0x60058D9")]
	[Address(RVA = "0x5D18570", Offset = "0x5D17570", VA = "0x5D18570")]
	public MiscInfo()
	{
		// Lifted from source/cpp/ApplicationManagers/MiscInfo.c (ApplicationManagers.MiscInfo$$.ctor): clean
		base();
		return;
	}
}
